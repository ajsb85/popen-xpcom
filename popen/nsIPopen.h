/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM nsIPopen.idl
 */

#ifndef __gen_nsIPopen_h__
#define __gen_nsIPopen_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIPopen */
#define NS_IPOPEN_IID_STR "b408a710-9cad-43c6-b261-3f687f5c9f8b"

#define NS_IPOPEN_IID \
  {0xb408a710, 0x9cad, 0x43c6, \
    { 0xb2, 0x61, 0x3f, 0x68, 0x7f, 0x5c, 0x9f, 0x8b }}

class NS_NO_VTABLE nsIPopen : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPOPEN_IID)

  /* string popen (in string s); */
  NS_IMETHOD Popen(const char * s, char * *_retval) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPopen, NS_IPOPEN_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPOPEN \
  NS_IMETHOD Popen(const char * s, char * *_retval); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPOPEN(_to) \
  NS_IMETHOD Popen(const char * s, char * *_retval) { return _to Popen(s, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPOPEN(_to) \
  NS_IMETHOD Popen(const char * s, char * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Popen(s, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPopen : public nsIPopen
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPOPEN

  nsPopen();

private:
  ~nsPopen();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPopen, nsIPopen)

nsPopen::nsPopen()
{
  /* member initializers and constructor code */
}

nsPopen::~nsPopen()
{
  /* destructor code */
}

/* string popen (in string s); */
NS_IMETHODIMP nsPopen::Popen(const char * s, char * *_retval)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPopen_h__ */
