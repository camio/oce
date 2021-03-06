// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_SignShape_HeaderFile
#define _MoniTool_SignShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MoniTool_SignShape_HeaderFile
#include <Handle_MoniTool_SignShape.hxx>
#endif

#ifndef _MoniTool_SignText_HeaderFile
#include <MoniTool_SignText.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class TCollection_AsciiString;
class Standard_Transient;


//! Signs HShape according to its real content (type of Shape) <br>
//!           Context is not used <br>
class MoniTool_SignShape : public MoniTool_SignText {

public:

  
  Standard_EXPORT   MoniTool_SignShape();
  //! Returns "SHAPE" <br>
  Standard_EXPORT     Standard_CString Name() const;
  //! Returns for a HShape, the string of its ShapeEnum <br>
//!           The Model is absolutely useless (may be null) <br>
  Standard_EXPORT     TCollection_AsciiString Text(const Handle(Standard_Transient)& ent,const Handle(Standard_Transient)& context) const;




  DEFINE_STANDARD_RTTI(MoniTool_SignShape)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
