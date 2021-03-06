// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_TypeOfCamera_HeaderFile
#define _VrmlConverter_TypeOfCamera_HeaderFile

//! defines the projection parameters for the hidden <br>
//!          lines removal algorithm  and calculates properties of cameras <br>
//!          and lights from Vrml ( OrthograpicCamera, PerspectiveCamera, <br>
//!          DirectionalLight, PointLight, SpotLight ) <br>
//!          to display all shapes of scene with  arbitrary locations <br>
//!          for requested the Projection Vector . <br>
enum VrmlConverter_TypeOfCamera {
VrmlConverter_NoCamera,
VrmlConverter_PerspectiveCamera,
VrmlConverter_OrthographicCamera
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
