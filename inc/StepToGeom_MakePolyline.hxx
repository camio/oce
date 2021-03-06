// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakePolyline_HeaderFile
#define _StepToGeom_MakePolyline_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepToGeom_Root_HeaderFile
#include <StepToGeom_Root.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_Polyline_HeaderFile
#include <Handle_StepGeom_Polyline.hxx>
#endif
#ifndef _Handle_Geom_BSplineCurve_HeaderFile
#include <Handle_Geom_BSplineCurve.hxx>
#endif
class StepGeom_Polyline;
class Geom_BSplineCurve;


//! Translates polyline entity into Geom_BSpline <br>
//!          In case if polyline has more than 2 points bspline will be C0 <br>
class StepToGeom_MakePolyline  : public StepToGeom_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_Polyline)& SPL,Handle(Geom_BSplineCurve)& CC) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
