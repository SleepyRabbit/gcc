
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_xml_sax_ext_Locator2__
#define __org_xml_sax_ext_Locator2__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
        namespace ext
        {
            class Locator2;
        }
      }
    }
  }
}

class org::xml::sax::ext::Locator2 : public ::java::lang::Object
{

public:
  virtual ::java::lang::String * getXMLVersion() = 0;
  virtual ::java::lang::String * getEncoding() = 0;
  virtual ::java::lang::String * getPublicId() = 0;
  virtual ::java::lang::String * getSystemId() = 0;
  virtual jint getLineNumber() = 0;
  virtual jint getColumnNumber() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_xml_sax_ext_Locator2__
