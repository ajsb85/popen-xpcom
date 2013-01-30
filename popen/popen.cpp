#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include "nsIPopen.h"
#include "mozilla/ModuleUtils.h"
#include "nsMemory.h"

class POPEN : public nsIPopen
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPOPEN
};

NS_IMPL_ISUPPORTS1(POPEN, nsIPopen)

NS_IMETHODIMP
POPEN::Popen(const char *s, char **_retval)
{
   char sTemp[1024] = {NULL};
   FILE   *pPipe;
   *_retval = (char*)NS_Alloc(sizeof(char)*40000);
   strcpy_s(*_retval, 1024, sTemp);
   if( (pPipe = _popen( s, "rt" )) == NULL )
      exit( 1 );
   while( !feof( pPipe ) )
   {
      if( fgets(  sTemp, 1024, pPipe ) != NULL )
		strcat_s( *_retval, 1024 , sTemp ); 
   }
   printf( "\nProcess returned %d\n", _pclose( pPipe ) );
  return NS_OK;
}



NS_GENERIC_FACTORY_CONSTRUCTOR(POPEN)

// 3ccbb6b2-2d12-4e5d-8d6e-53164c5760cf
#define POPEN_CID \
  { 0x3ccbb6b2, 0x2d12, 0x4e5d, \
    { 0x8d, 0x6e, 0x53, 0x16, 0x4c, 0x57, 0x60, 0xcf } }

NS_DEFINE_NAMED_CID(POPEN_CID);

static const mozilla::Module::CIDEntry kPopenCIDs[] = {
  { &kPOPEN_CID, false, NULL, POPENConstructor },
  { NULL }
};

static const mozilla::Module::ContractIDEntry kPopenContracts[] = {
  { "@siragon.com/popen;1?impl=c++", &kPOPEN_CID },
  { NULL }
};

static const mozilla::Module kPopenModule = {
  mozilla::Module::kVersion,
  kPopenCIDs,
  kPopenContracts
};

NSMODULE_DEFN(PopenModule) = &kPopenModule;