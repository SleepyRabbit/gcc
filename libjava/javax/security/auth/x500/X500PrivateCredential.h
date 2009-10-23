
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_x500_X500PrivateCredential__
#define __javax_security_auth_x500_X500PrivateCredential__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace security
    {
        class PrivateKey;
      namespace cert
      {
          class X509Certificate;
      }
    }
  }
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace x500
        {
            class X500PrivateCredential;
        }
      }
    }
  }
}

class javax::security::auth::x500::X500PrivateCredential : public ::java::lang::Object
{

public:
  X500PrivateCredential(::java::security::cert::X509Certificate *, ::java::security::PrivateKey *);
  X500PrivateCredential(::java::security::cert::X509Certificate *, ::java::security::PrivateKey *, ::java::lang::String *);
  ::java::security::cert::X509Certificate * getCertificate();
  ::java::security::PrivateKey * getPrivateKey();
  ::java::lang::String * getAlias();
  void destroy();
  jboolean isDestroyed();
private:
  ::java::security::PrivateKey * __attribute__((aligned(__alignof__( ::java::lang::Object)))) key;
  ::java::security::cert::X509Certificate * certificate;
  ::java::lang::String * alias;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_security_auth_x500_X500PrivateCredential__
