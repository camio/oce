// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GProp_PEquation_HeaderFile
#define _GProp_PEquation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GProp_EquaType_HeaderFile
#include <GProp_EquaType.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TColgp_Array1OfPnt;
class gp_Pln;
class gp_Lin;
class gp_Pnt;
class gp_Vec;


//! A framework to analyze a collection - or cloud <br>
//! - of points and to verify if they are coincident, <br>
//! collinear or coplanar within a given precision. If <br>
//! so, it also computes the mean point, the mean <br>
//! line or the mean plane of the points. If not, it <br>
//! computes the minimal box which includes all the points. <br>
class GProp_PEquation  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Constructs a framework to analyze the <br>
//! collection of points Pnts and computes: <br>
//! -   the mean point if the points in question are <br>
//!   considered to be coincident within the precision Tol, or <br>
//! -   the mean line if they are considered to be <br>
//!   collinear within the precision Tol, or <br>
//! -   the mean plane if they are considered to be <br>
//!   coplanar within the precision Tol, or <br>
//! -   the minimal box which contains all the points. Use : <br>
//! -   the functions IsPoint, IsLinear, IsPlanar <br>
//!   and IsSpace to find the result of the analysis, and <br>
//! -   the function Point, Line, Plane or Box to <br>
//!   access the computed result. <br>
  Standard_EXPORT   GProp_PEquation(const TColgp_Array1OfPnt& Pnts,const Standard_Real Tol);
  //! Returns true if, according to the given <br>
//! tolerance, the points analyzed by this framework are  coplanar. <br>
//! Use the function  Plane  to access the computed result. <br>
  Standard_EXPORT     Standard_Boolean IsPlanar() const;
  //!  Returns true if, according to the given <br>
//! tolerance, the points analyzed by this framework are  colinear. <br>
//! Use the function  Line  to access the computed result. <br>
  Standard_EXPORT     Standard_Boolean IsLinear() const;
  //!  Returns true if, according to the given <br>
//! tolerance, the points analyzed by this framework are  coincident. <br>
//!       Use the function  Point  to access the computed result. <br>
  Standard_EXPORT     Standard_Boolean IsPoint() const;
  //! Returns true if, according to the given <br>
//! tolerance value, the points analyzed by this <br>
//! framework are neither coincident, nor collinear, nor coplanar. <br>
//! Use the function Box to query the smallest box <br>
//! that includes the collection of points. <br>
  Standard_EXPORT     Standard_Boolean IsSpace() const;
  //! Returns the mean plane passing near all the <br>
//! points analyzed by this framework if, according <br>
//! to the given precision, the points are considered to be coplanar. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the <br>
//! given precision value, the points analyzed by <br>
//! this framework are considered to be: <br>
//! -   coincident, or <br>
//! -   collinear, or <br>
//! -   not coplanar. <br>
  Standard_EXPORT     gp_Pln Plane() const;
  //! Returns the mean line passing near all the <br>
//! points analyzed by this framework if, according <br>
//! to the given precision value, the points are considered to be collinear. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the <br>
//! given precision, the points analyzed by this <br>
//! framework are considered to be: <br>
//! -   coincident, or <br>
//! -   not collinear. <br>
  Standard_EXPORT     gp_Lin Line() const;
  //! Returns the mean point of all the points <br>
//! analyzed by this framework if, according to the <br>
//! given precision, the points are considered to be coincident. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the <br>
//! given precision, the points analyzed by this <br>
//! framework are not considered to be coincident. <br>
  Standard_EXPORT     gp_Pnt Point() const;
  //! Returns the definition of the smallest box which <br>
//! contains all the points analyzed by this <br>
//! framework if, according to the given precision <br>
//! value, the points are considered to be neither <br>
//! coincident, nor collinear and nor coplanar. <br>
//! This box is centered on the barycenter P of the <br>
//! collection of points. Its sides are parallel to the <br>
//! three vectors V1, V2 and V3, the length of <br>
//! which is the length of the box in the corresponding direction. <br>
//! Note: Vectors V1, V2 and V3 are parallel to <br>
//! the three axes of principal inertia of the system <br>
//! composed of the collection of points where each point is of equal mass. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if, according to the given precision, <br>
//! the points analyzed by this framework are considered to be coincident, collinear or coplanar. <br>
  Standard_EXPORT     void Box(gp_Pnt& P,gp_Vec& V1,gp_Vec& V2,gp_Vec& V3) const;





protected:





private:



GProp_EquaType type;
gp_Pnt g;
gp_Vec v1;
gp_Vec v2;
gp_Vec v3;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif