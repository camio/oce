// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_ClosureTool_HeaderFile
#define _TDF_ClosureTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TDF_DataSet_HeaderFile
#include <Handle_TDF_DataSet.hxx>
#endif
class TDF_DataSet;
class TDF_IDFilter;
class TDF_ClosureMode;
class TDF_Label;
class TDF_LabelMap;
class TDF_AttributeMap;


//! This class provides services to build the closure <br>
//!          of an information set. <br>
//! <br>
//!          You can set closure options by using IDFilter <br>
//!          (to select or exclude specific attribute IDs) and <br>
//!          CopyOption objects and by giving to Closure <br>
//!          method. <br>
//! <br>
class TDF_ClosureTool  {
public:

  DEFINE_STANDARD_ALLOC

  //! Builds the transitive closure of label and <br>
//!          attribute sets into <aDataSet>. <br>
  Standard_EXPORT   static  void Closure(const Handle(TDF_DataSet)& aDataSet) ;
  //! Builds the transitive closure of label and <br>
//!          attribute sets into <aDataSet>. Uses <aFilter> to <br>
//!          determine if an attribute has to be taken in <br>
//!          account or not. Uses <aMode> for various way of <br>
//!          closing. <br>
  Standard_EXPORT   static  void Closure(const Handle(TDF_DataSet)& aDataSet,const TDF_IDFilter& aFilter,const TDF_ClosureMode& aMode) ;
  //! Builds the transitive closure of <aLabel>. <br>
  Standard_EXPORT   static  void Closure(const TDF_Label& aLabel,TDF_LabelMap& aLabMap,TDF_AttributeMap& anAttMap,const TDF_IDFilter& aFilter,const TDF_ClosureMode& aMode) ;





protected:





private:

  //! Adds label attributes and dependences. <br>
  Standard_EXPORT   static  void LabelAttributes(const TDF_Label& aLabel,TDF_LabelMap& aLabMap,TDF_AttributeMap& anAttMap,const TDF_IDFilter& aFilter,const TDF_ClosureMode& aMode) ;




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
