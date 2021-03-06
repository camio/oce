// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FairCurve_Batten_HeaderFile
#define _FairCurve_Batten_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _FairCurve_AnalysisCode_HeaderFile
#include <FairCurve_AnalysisCode.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TColgp_HArray1OfPnt2d;
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class Standard_NegativeValue;
class Standard_NullValue;
class gp_Pnt2d;
class gp_Vec2d;
class Geom2d_BSplineCurve;


//! Constructs curves with a constant or linearly increasing <br>
//! section to be used in the design of wooden or plastic <br>
//! battens. These curves are two-dimensional, and <br>
//! simulate physical splines or battens. <br>
class FairCurve_Batten  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructor  with the two points and the geometrical <br>
//!          characteristics of the batten (elastic beam) <br>
//! Height is the height of the deformation, and Slope is the <br>
//! slope value, initialized at 0. The user can then supply the <br>
//! desired slope value by the method, SetSlope. <br>
//!          Other parameters are initialized as follow : <br>
//!           - FreeSliding = False <br>
//!           - ConstraintOrder1 = 1 <br>
//!           - ConstraintOrder2 = 1 <br>
//!           - Angle1 = 0 <br>
//!           - Angle2 = 0 <br>
//!           - SlidingFactor = 1 <br>
//!  Exceptions <br>
//! NegativeValue if Height is less than or equal to 0. <br>
//! NullValue if the distance between P1 and P2 is less <br>
//! than or equal to the tolerance value for distance in <br>
//! Precision::Confusion: P1.IsEqual(P2, <br>
//! Precision::Confusion()). The function <br>
//! gp_Pnt2d::IsEqual tests to see if this is the case. <br>
  Standard_EXPORT   FairCurve_Batten(const gp_Pnt2d& P1,const gp_Pnt2d& P2,const Standard_Real Height,const Standard_Real Slope = 0);
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~FairCurve_Batten(){Delete();}
  //! Freesliding is initialized with the default setting false. <br>
//! When Freesliding is set to true and, as a result, sliding <br>
//! is free, the sliding factor is automatically computed to <br>
//! satisfy the equilibrium of the batten. <br>
//! <br>
        void SetFreeSliding(const Standard_Boolean FreeSliding) ;
  //! Allows you to change the order of the constraint on the <br>
//! first point. ConstraintOrder has the default setting of 1. <br>
//! The following settings are available: <br>
//! -   0-the curve must pass through a point <br>
//! -   1-the curve must pass through a point and have a given tangent <br>
//! -   2-the curve must pass through a point, have a given tangent and a given curvature. <br>
//!   The third setting is only valid for <br>
//! FairCurve_MinimalVariation curves. <br>
//! These constraints, though geometric, represent the <br>
//! mechanical constraints due, for example, to the <br>
//! resistance of the material the actual physical batten is made of. <br>
        void SetConstraintOrder1(const Standard_Integer ConstraintOrder) ;
  //! Allows you to change the order of the constraint on the <br>
//! second point. ConstraintOrder is initialized with the default setting of 1. <br>
//! The following settings are available: <br>
//! -   0-the curve must pass through a point <br>
//! -   1-the curve must pass through a point and have a given tangent <br>
//! -   2-the curve must pass through a point, have a given <br>
//!   tangent and a given curvature. <br>
//! The third setting is only valid for <br>
//! FairCurve_MinimalVariation curves. <br>
//! These constraints, though geometric, represent the <br>
//! mechanical constraints due, for example, to the <br>
//! resistance of the material the actual physical batten is made of. <br>
        void SetConstraintOrder2(const Standard_Integer ConstraintOrder) ;
  //! Allows you to change the location of the point, P1, and in <br>
//! doing so, modify the curve. <br>
//! Warning <br>
//! This method changes the angle as well as the point. <br>
//! Exceptions <br>
//! NullValue if the distance between P1 and P2 is less <br>
//! than or equal to the tolerance value for distance in <br>
//! Precision::Confusion: P1.IsEqual(P2, <br>
//! Precision::Confusion()). The function <br>
//! gp_Pnt2d::IsEqual tests to see if this is the case. <br>
  Standard_EXPORT     void SetP1(const gp_Pnt2d& P1) ;
  //! Allows you to change the location of the point, P1, and in <br>
//! doing so, modify the curve. <br>
//! Warning <br>
//! This method changes the angle as well as the point. <br>
//! Exceptions <br>
//! NullValue if the distance between P1 and P2 is less <br>
//! than or equal to the tolerance value for distance in <br>
//! Precision::Confusion: P1.IsEqual(P2, <br>
//! Precision::Confusion()). The function <br>
//! gp_Pnt2d::IsEqual tests to see if this is the case. <br>
  Standard_EXPORT     void SetP2(const gp_Pnt2d& P2) ;
  //! Allows you to change the angle Angle1 at the first point, <br>
//! P1. The default setting is 0. <br>
//! <br>
        void SetAngle1(const Standard_Real Angle1) ;
  //! Allows you to change the angle Angle2 at the second <br>
//! point, P2. The default setting is 0. <br>
//! <br>
        void SetAngle2(const Standard_Real Angle2) ;
  //! Allows you to change the height of the deformation. <br>
//!  Raises  NegativeValue; -- if  Height <= 0 <br>
//! if  Height <= 0 <br>
        void SetHeight(const Standard_Real Height) ;
  //! Allows you to set the slope value, Slope. <br>
        void SetSlope(const Standard_Real Slope) ;
  //! Allows you to change the ratio SlidingFactor. This <br>
//! compares the length of the batten and the reference <br>
//! length, which is, in turn, a function of the constraints. <br>
//! This modification has one of the following two effects: <br>
//! -   if you increase the value, it inflates the batten <br>
//! -   if you decrease the value, it flattens the batten. <br>
//! When sliding is free, the sliding factor is automatically <br>
//! computed to satisfy the equilibrium of the batten. When <br>
//! sliding is imposed, a value is required for the sliding factor. <br>
//! SlidingFactor is initialized with the default setting of 1. <br>
        void SetSlidingFactor(const Standard_Real SlidingFactor) ;
  //! Performs the algorithm, using the arguments Code, <br>
//! NbIterations and Tolerance and computes the curve <br>
//! with respect to the constraints. <br>
//! Code will have one of the following values: <br>
//! -   OK <br>
//! -   NotConverged <br>
//! -   InfiniteSliding <br>
//! -   NullHeight <br>
//! The parameters Tolerance and NbIterations control <br>
//! how precise the computation is, and how long it will take. <br>
  Standard_EXPORT   virtual  Standard_Boolean Compute(FairCurve_AnalysisCode& Code,const Standard_Integer NbIterations = 50,const Standard_Real Tolerance = 1.0e-3) ;
  //!  Computes the real number value for length Sliding of <br>
//! Reference for new constraints. If you want to give a <br>
//! specific length to a batten curve, use the following <br>
//! syntax: b.SetSlidingFactor(L / <br>
//! b.SlidingOfReference()) where b is the <br>
//! name of the batten curve object. <br>
  Standard_EXPORT     Standard_Real SlidingOfReference() const;
  //! Returns the initial free sliding value, false by default. <br>
//! Free sliding is generally more aesthetically pleasing <br>
//! than constrained sliding. However, the computation can <br>
//! fail with values such as angles greater than PI/2. This is <br>
//! because the resulting batten length is theoretically infinite. <br>
        Standard_Boolean GetFreeSliding() const;
  //! Returns the established first constraint order. <br>
        Standard_Integer GetConstraintOrder1() const;
  //! Returns the established second constraint order. <br>
        Standard_Integer GetConstraintOrder2() const;
  //! Returns the established location of the point P1. <br>
       const gp_Pnt2d& GetP1() const;
  //! Returns the established location of the point P2. <br>
       const gp_Pnt2d& GetP2() const;
  //! Returns the established first angle. <br>
        Standard_Real GetAngle1() const;
  //! Returns the established second angle. <br>
        Standard_Real GetAngle2() const;
  //! Returns the thickness of the lathe. <br>
        Standard_Real GetHeight() const;
  //! Returns the established slope value. <br>
        Standard_Real GetSlope() const;
  //! Returns the initial sliding factor. <br>
        Standard_Real GetSlidingFactor() const;
  //! Returns the computed curve a 2d BSpline. <br>
  Standard_EXPORT     Handle_Geom2d_BSplineCurve Curve() const;
  //! Prints on the stream o information on the current state <br>
//!          of the object. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& o) const;





protected:

  
  Standard_EXPORT     Standard_Real SlidingOfReference(const Standard_Real D,const Standard_Real A1,const Standard_Real A2) const;
  
  Standard_EXPORT     Standard_Real Compute(const Standard_Real D,const Standard_Real A1,const Standard_Real A2) const;
  //! Returns the effective geometrical constraints at  the <br>
//!          last batten  computation.  This effectives values may <br>
//!          be not equal with the wanted values if <br>
//!          - if the value is "free" <br>
//!          - in the case of incomplete computation : collapse, <br>
//!            infinite sliding, height of batten will be negative at end points <br>
  Standard_EXPORT     Standard_Real Compute(const Standard_Real D,const Standard_Real A) const;


FairCurve_AnalysisCode myCode;
gp_Pnt2d OldP1;
gp_Pnt2d OldP2;
Standard_Real OldAngle1;
Standard_Real OldAngle2;
Standard_Real OldHeight;
Standard_Real OldSlope;
Standard_Real OldSlidingFactor;
Standard_Boolean OldFreeSliding;
Standard_Integer OldConstraintOrder1;
Standard_Integer OldConstraintOrder2;
gp_Pnt2d NewP1;
gp_Pnt2d NewP2;
Standard_Real NewAngle1;
Standard_Real NewAngle2;
Standard_Real NewHeight;
Standard_Real NewSlope;
Standard_Real NewSlidingFactor;
Standard_Boolean NewFreeSliding;
Standard_Integer NewConstraintOrder1;
Standard_Integer NewConstraintOrder2;
Standard_Integer Degree;
Handle_TColgp_HArray1OfPnt2d Poles;
Handle_TColStd_HArray1OfReal Flatknots;
Handle_TColStd_HArray1OfReal Knots;
Handle_TColStd_HArray1OfInteger Mults;


private:

  //! compute the curve with respect of the delta-constraints. <br>
  Standard_EXPORT     Standard_Boolean Compute(const gp_Vec2d& DeltaP1,const gp_Vec2d& DeltaP2,const Standard_Real DeltaAngle1,const Standard_Real DeltaAngle2,FairCurve_AnalysisCode& ACode,const Standard_Integer NbIterations,const Standard_Real Tolerance) ;
  
  Standard_EXPORT     void Angles(const gp_Pnt2d& P1,const gp_Pnt2d& P2) ;




};


#include <FairCurve_Batten.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
