// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_FuncExtPS_HeaderFile
#define _Extrema_FuncExtPS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Adaptor3d_SurfacePtr_HeaderFile
#include <Adaptor3d_SurfacePtr.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _Extrema_SequenceOfPOnSurf_HeaderFile
#include <Extrema_SequenceOfPOnSurf.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class gp_Pnt;
class Adaptor3d_Surface;
class math_Vector;
class math_Matrix;
class Extrema_POnSurf;



class Extrema_FuncExtPS  : public math_FunctionSetWithDerivatives {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Extrema_FuncExtPS();
  
  Standard_EXPORT   Extrema_FuncExtPS(const gp_Pnt& P,const Adaptor3d_Surface& S);
  //! sets the field mysurf of the function. <br>
  Standard_EXPORT     void Initialize(const Adaptor3d_Surface& S) ;
  //! sets the field mysurf of the function. <br>
  Standard_EXPORT     void SetPoint(const gp_Pnt& P) ;
  
  Standard_EXPORT     Standard_Integer NbVariables() const;
  
  Standard_EXPORT     Standard_Integer NbEquations() const;
  //! Calculate Fi(U,V). <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& UV,math_Vector& F) ;
  //! Calculate Fi'(U,V). <br>
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& UV,math_Matrix& DF) ;
  //! Calculate Fi(U,V) and Fi'(U,V). <br>
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& UV,math_Vector& F,math_Matrix& DF) ;
  //! Save the found extremum. <br>
  Standard_EXPORT   virtual  Standard_Integer GetStateNumber() ;
  //! Return the number of found extrema. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Return the value of the Nth distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  //! Returns the Nth extremum. <br>
  Standard_EXPORT     Extrema_POnSurf Point(const Standard_Integer N) const;





protected:





private:



gp_Pnt myP;
Adaptor3d_SurfacePtr myS;
Standard_Real myU;
Standard_Real myV;
gp_Pnt myPs;
TColStd_SequenceOfReal mySqDist;
Extrema_SequenceOfPOnSurf myPoint;
Standard_Boolean myPinit;
Standard_Boolean mySinit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
