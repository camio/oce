// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Xw_HeaderFile
#define _Xw_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Xw_Driver;
class Xw_Window;
class Xw_ColorMap;
class Xw_TypeMap;
class Xw_WidthMap;
class Xw_FontMap;
class Xw_MarkMap;
class Xw_GraphicDevice;
class Xw_IconBox;
class Xw_TextManager;
class Xw_ListOfMFTFonts;
class Xw_HListOfMFTFonts;


//! This package contains the common X graphic interface. <br>
//!  Warning: All the interface is described by a set of C routines. <br>
//!          All these C routines are stored in the library <br>
//!          of this package. <br>
class Xw  {
public:

  DEFINE_STANDARD_ALLOC

  //! Global Trace Level for Maintenance Only <br>
  Standard_EXPORT   static  void SetTrace(const Standard_Integer TraceLevel,const Standard_Integer ErrorLevel) ;





protected:





private:

  //! Return current global Trace level . <br>
  Standard_EXPORT   static  Standard_Integer TraceLevel() ;
  //! Return current global Error level . <br>
  Standard_EXPORT   static  Standard_Integer ErrorLevel() ;



friend class Xw_Driver;
friend class Xw_Window;
friend class Xw_ColorMap;
friend class Xw_TypeMap;
friend class Xw_WidthMap;
friend class Xw_FontMap;
friend class Xw_MarkMap;
friend class Xw_GraphicDevice;
friend class Xw_IconBox;
friend class Xw_TextManager;
friend class Xw_ListOfMFTFonts;
friend class Xw_HListOfMFTFonts;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
