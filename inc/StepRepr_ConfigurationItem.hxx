// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_ConfigurationItem_HeaderFile
#define _StepRepr_ConfigurationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepRepr_ConfigurationItem_HeaderFile
#include <Handle_StepRepr_ConfigurationItem.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepRepr_ProductConcept_HeaderFile
#include <Handle_StepRepr_ProductConcept.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepRepr_ProductConcept;


//! Representation of STEP entity ConfigurationItem <br>
class StepRepr_ConfigurationItem : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepRepr_ConfigurationItem();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aId,const Handle(TCollection_HAsciiString)& aName,const Standard_Boolean hasDescription,const Handle(TCollection_HAsciiString)& aDescription,const Handle(StepRepr_ProductConcept)& aItemConcept,const Standard_Boolean hasPurpose,const Handle(TCollection_HAsciiString)& aPurpose) ;
  //! Returns field Id <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Id() const;
  //! Set field Id <br>
  Standard_EXPORT     void SetId(const Handle(TCollection_HAsciiString)& Id) ;
  //! Returns field Name <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  //! Set field Name <br>
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& Name) ;
  //! Returns field Description <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Description() const;
  //! Set field Description <br>
  Standard_EXPORT     void SetDescription(const Handle(TCollection_HAsciiString)& Description) ;
  //! Returns True if optional field Description is defined <br>
  Standard_EXPORT     Standard_Boolean HasDescription() const;
  //! Returns field ItemConcept <br>
  Standard_EXPORT     Handle_StepRepr_ProductConcept ItemConcept() const;
  //! Set field ItemConcept <br>
  Standard_EXPORT     void SetItemConcept(const Handle(StepRepr_ProductConcept)& ItemConcept) ;
  //! Returns field Purpose <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Purpose() const;
  //! Set field Purpose <br>
  Standard_EXPORT     void SetPurpose(const Handle(TCollection_HAsciiString)& Purpose) ;
  //! Returns True if optional field Purpose is defined <br>
  Standard_EXPORT     Standard_Boolean HasPurpose() const;




  DEFINE_STANDARD_RTTI(StepRepr_ConfigurationItem)

protected:




private: 


Handle_TCollection_HAsciiString theId;
Handle_TCollection_HAsciiString theName;
Handle_TCollection_HAsciiString theDescription;
Handle_StepRepr_ProductConcept theItemConcept;
Handle_TCollection_HAsciiString thePurpose;
Standard_Boolean defDescription;
Standard_Boolean defPurpose;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
