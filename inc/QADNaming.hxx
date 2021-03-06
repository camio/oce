// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QADNaming_HeaderFile
#define _QADNaming_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_TDF_Data_HeaderFile
#include <Handle_TDF_Data.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class TopoDS_Shape;
class TDF_Data;
class TopTools_ListOfShape;
class TCollection_AsciiString;
class TDF_Label;
class Draw_Interpretor;
class QADNaming_DataMapOfShapeOfName;
class QADNaming_DataMapNodeOfDataMapOfShapeOfName;
class QADNaming_DataMapIteratorOfDataMapOfShapeOfName;



class QADNaming  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  TopoDS_Shape CurrentShape(const Standard_CString ShapeEntry,const Handle(TDF_Data)& Data) ;
  
  Standard_EXPORT   static  void GetShape(const Standard_CString ShapeEntry,const Handle(TDF_Data)& Data,TopTools_ListOfShape& Shapes) ;
  
  Standard_EXPORT   static  TCollection_AsciiString GetEntry(const TopoDS_Shape& Shape,const Handle(TDF_Data)& Data,Standard_Integer& Status) ;
  //! returns label by first two arguments (df and entry string) <br>
  Standard_EXPORT   static  Standard_Boolean Entry(const Standard_Address theArguments,TDF_Label& theLabel) ;
  
  Standard_EXPORT   static  void AllCommands(Draw_Interpretor& DI) ;
  //! commands relatives to NamedShape <br>
  Standard_EXPORT   static  void BasicCommands(Draw_Interpretor& DI) ;
  //! loading NamedShape to the Data Framework <br>
  Standard_EXPORT   static  void BuilderCommands(Draw_Interpretor& DI) ;
  //! loading NamedShape to the Data Framework <br>
  Standard_EXPORT   static  void IteratorsCommands(Draw_Interpretor& DI) ;
  
  Standard_EXPORT   static  void ToolsCommands(Draw_Interpretor& DI) ;
  //! commands relatives to Naming <br>
  Standard_EXPORT   static  void SelectionCommands(Draw_Interpretor& DI) ;





protected:





private:




friend class QADNaming_DataMapOfShapeOfName;
friend class QADNaming_DataMapNodeOfDataMapOfShapeOfName;
friend class QADNaming_DataMapIteratorOfDataMapOfShapeOfName;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
