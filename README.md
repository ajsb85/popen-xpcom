popen-xpcom
===========

This interface return de verbose output.

Usage example:
==============

var iface = Components.classes["@siragon.com/popen;1?impl=c++"].
  	createInstance(Components.interfaces.nsIPopen);

var foo = iface.popen("android-sdk\\plataform-tools\\adb.exe install -r com.siragon.launcher.apk");

dump(foo);
