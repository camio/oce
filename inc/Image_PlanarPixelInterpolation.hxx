// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Image_PlanarPixelInterpolation_HeaderFile
#define _Image_PlanarPixelInterpolation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Image_PixelInterpolation_HeaderFile
#include <Image_PixelInterpolation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Image_Image_HeaderFile
#include <Handle_Image_Image.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Image_DColorImage_HeaderFile
#include <Handle_Image_DColorImage.hxx>
#endif
#ifndef _Handle_Image_DIndexedImage_HeaderFile
#include <Handle_Image_DIndexedImage.hxx>
#endif
class Image_Image;
class Aspect_Pixel;
class Image_DColorImage;
class Aspect_ColorPixel;
class Image_DIndexedImage;
class Aspect_IndexPixel;


//! The class PlanarPixelInterpolation is used to compute a <br>
//!            SubPixelvalue on non integer Image coordinate <br>
//!          PlanarPixelInterpolation redefined a new method to compute a <br>
//!	      SubPixel value . <br>
//!	    To compute the value of a Image SubPixel, first we look <br>
//!	      for the three nearest Image Pixels . <br>
//!	    Then we compute the plane definition in the 3D space <br>
//!	      composed by the Image Pixel coordinate and Pixel value <br>
//!	      on Z axis . <br>
//!	    The SubPixel value is the Z value of ( FX,FY ) point in the <br>
//!	      three nearest Image Pixel defined plane . <br>
class Image_PlanarPixelInterpolation  : public Image_PixelInterpolation {
public:

  DEFINE_STANDARD_ALLOC

  //! Create a PlanarPixelInterpolation  object. <br>
  Standard_EXPORT   Image_PlanarPixelInterpolation();
  //! Redefined the method to compute SubPixel's value <br>
//!	      on non integer Image coordinate. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's used <br>
//!	      to check if the SubPixel coordinate FX,FY is outside of <br>
//!	      image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_Image)& aImage,const Standard_Real X,const Standard_Real Y,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_Pixel& RetPixel) const;
  //! Compute SubPixel's value on non integer Image coordinate for <br>
//!	      DColorImage and ColorPixel. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's used <br>
//!	      to check if the SubPixel coordinate FX,FY is outside of <br>
//!	      image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_DColorImage)& aImage,const Standard_Real X,const Standard_Real Y,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_ColorPixel& RetPixel) const;
  //! Compute SubPixel's value on non integer Image coordinate for <br>
//!	      DIndexedImage and IndexPixel. <br>
//!	    LowerX,LowerY,UpperX,UpperY is the Image Min Max, it's used <br>
//!	      to check if the SubPixel coordinate X,Y is outside of <br>
//!	      image. <br>
//!          Return True  if Interpolation Succes. <br>
//!	    Return False if the SubPixel is out from Image. <br>
  Standard_EXPORT   virtual  Standard_Boolean Interpolate(const Handle(Image_DIndexedImage)& aImage,const Standard_Real X,const Standard_Real Y,const Standard_Integer LowerX,const Standard_Integer LowerY,const Standard_Integer UpperX,const Standard_Integer UpperY,Aspect_IndexPixel& RetPixel) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
