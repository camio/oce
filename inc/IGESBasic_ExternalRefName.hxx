// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_ExternalRefName_HeaderFile
#define _IGESBasic_ExternalRefName_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESBasic_ExternalRefName_HeaderFile
#include <Handle_IGESBasic_ExternalRefName.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class TCollection_HAsciiString;


//! defines ExternalRefName, Type <416> Form <3> <br>
//!          in package IGESBasic <br>
//!          Used when it is assumed that a copy of the subfigure <br>
//!          exists in native form on the receiving system <br>
class IGESBasic_ExternalRefName : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESBasic_ExternalRefName();
  //! This method is used to set the fields of the class <br>
//!           ExternalRefName <br>
//!       - anExtName : External Reference Entity Symbolic Name <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& anExtName) ;
  //! returns External Reference Entity Symbolic Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ReferenceName() const;




  DEFINE_STANDARD_RTTI(IGESBasic_ExternalRefName)

protected:




private: 


Handle_TCollection_HAsciiString theExtRefEntitySymbName;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
