// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_DocumentType_HeaderFile
#define _StepBasic_DocumentType_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_DocumentType_HeaderFile
#include <Handle_StepBasic_DocumentType.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;



class StepBasic_DocumentType : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepBasic_DocumentType();
  
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& apdt) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString ProductDataType() const;
  
  Standard_EXPORT     void SetProductDataType(const Handle(TCollection_HAsciiString)& apdt) ;




  DEFINE_STANDARD_RTTI(StepBasic_DocumentType)

protected:




private: 


Handle_TCollection_HAsciiString thepdt;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
