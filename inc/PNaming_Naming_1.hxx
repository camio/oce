// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PNaming_Naming_1_HeaderFile
#define _PNaming_Naming_1_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PNaming_Naming_1_HeaderFile
#include <Handle_PNaming_Naming_1.hxx>
#endif

#ifndef _Handle_PNaming_Name_1_HeaderFile
#include <Handle_PNaming_Name_1.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif
class PNaming_Name_1;


class PNaming_Naming_1 : public PDF_Attribute {

public:

  
  Standard_EXPORT   PNaming_Naming_1();
  
  Standard_EXPORT     void SetName(const Handle(PNaming_Name_1)& aName) ;
  
  Standard_EXPORT     Handle_PNaming_Name_1 GetName() const;

PNaming_Naming_1(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PNaming_Name_1) _CSFDB_GetPNaming_Naming_1myName() const { return myName; }
    void _CSFDB_SetPNaming_Naming_1myName(const Handle(PNaming_Name_1)& p) { myName = p; }



  DEFINE_STANDARD_RTTI(PNaming_Naming_1)

protected:




private: 


Handle_PNaming_Name_1 myName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
