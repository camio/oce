// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_Filling_HeaderFile
#define _BRepFill_Filling_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _GeomPlate_BuildPlateSurface_HeaderFile
#include <GeomPlate_BuildPlateSurface.hxx>
#endif
#ifndef _BRepFill_SequenceOfEdgeFaceAndOrder_HeaderFile
#include <BRepFill_SequenceOfEdgeFaceAndOrder.hxx>
#endif
#ifndef _BRepFill_SequenceOfFaceAndOrder_HeaderFile
#include <BRepFill_SequenceOfFaceAndOrder.hxx>
#endif
#ifndef _GeomPlate_SequenceOfPointConstraint_HeaderFile
#include <GeomPlate_SequenceOfPointConstraint.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class StdFail_NotDone;
class Standard_OutOfRange;
class Standard_ConstructionError;
class TopoDS_Face;
class TopoDS_Edge;
class gp_Pnt;
class BRepFill_SequenceOfEdgeFaceAndOrder;
class TopTools_ListOfShape;
class TopTools_SequenceOfShape;
class TopoDS_Shape;


//! N-Side Filling <br>
//!  This algorithm avoids to build a face from: <br>
//!  * a set of edges defining the bounds of the face and some <br>
//!    constraints the surface support has to satisfy <br>
//!  * a set of edges and points defining some constraints <br>
//!    the support surface has to satisfy <br>
//!  * an initial surface to deform for satisfying the constraints <br>
//!  * a set of parameters to control the constraints. <br>
class BRepFill_Filling  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructor <br>
  Standard_EXPORT   BRepFill_Filling(const Standard_Integer Degree = 3,const Standard_Integer NbPtsOnCur = 15,const Standard_Integer NbIter = 2,const Standard_Boolean Anisotropie = Standard_False,const Standard_Real Tol2d = 0.00001,const Standard_Real Tol3d = 0.0001,const Standard_Real TolAng = 0.01,const Standard_Real TolCurv = 0.1,const Standard_Integer MaxDeg = 8,const Standard_Integer MaxSegments = 9);
  //! Sets the values of Tolerances used to control the constraint. <br>
//!	Tol2d: <br>
//!	Tol3d:   it is the maximum distance allowed between the support surface <br>
//!	         and the constraints <br>
//!	TolAng:  it is the maximum angle allowed between the normal of the surface <br>
//!	         and the constraints <br>
//!	TolCurv: it is the maximum difference of curvature allowed between <br>
//!	         the surface and the constraint <br>
  Standard_EXPORT     void SetConstrParam(const Standard_Real Tol2d = 0.00001,const Standard_Real Tol3d = 0.0001,const Standard_Real TolAng = 0.01,const Standard_Real TolCurv = 0.1) ;
  //! Sets the parameters used for resolution. <br>
//!	The default values of these parameters have been chosen for a good <br>
//!	ratio quality/performance. <br>
//!	Degree:      it is the order of energy criterion to minimize for computing <br>
//!	             the deformation of the surface. <br>
//!	             The default value is 3 <br>
//!	             The recommanded value is i+2 where i is the maximum order of the <br>
//!	             constraints. <br>
//!	NbPtsOnCur:  it is the average number of points for discretisation <br>
//!	             of the edges. <br>
//!	NbIter:      it is the maximum number of iterations of the process. <br>
//!	             For each iteration the number of discretisation points is <br>
//!	             increased. <br>
//!	Anisotropie: <br>
  Standard_EXPORT     void SetResolParam(const Standard_Integer Degree = 3,const Standard_Integer NbPtsOnCur = 15,const Standard_Integer NbIter = 2,const Standard_Boolean Anisotropie = Standard_False) ;
  //! Sets the parameters used for approximation of the surface <br>
  Standard_EXPORT     void SetApproxParam(const Standard_Integer MaxDeg = 8,const Standard_Integer MaxSegments = 9) ;
  //! Loads the initial Surface <br>
  Standard_EXPORT     void LoadInitSurface(const TopoDS_Face& aFace) ;
  //! Adds a new constraint which also defines an edge of the wire <br>
//!	        of the face <br>
//!	Order: Order of the constraint: <br>
//!	       GeomAbs_C0 : the surface has to pass by 3D representation <br>
//!	                    of the edge <br>
//!	       GeomAbs_G1 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency with the first <br>
//!	                    face of the edge <br>
//!	       GeomAbs_G2 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency and curvature <br>
//!	                    with the first face of the edge. <br>
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Edge& anEdge,const GeomAbs_Shape Order,const Standard_Boolean IsBound = Standard_True) ;
  //! Adds a new constraint which also defines an edge of the wire <br>
//!	        of the face <br>
//!	Order: Order of the constraint: <br>
//!	       GeomAbs_C0 : the surface has to pass by 3D representation <br>
//!	                    of the edge <br>
//!	       GeomAbs_G1 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency with the <br>
//!	                    given face <br>
//!	       GeomAbs_G2 : the surface has to pass by 3D representation <br>
//!	                    of the edge and to respect tangency and curvature <br>
//!	                    with the given face. <br>
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Edge& anEdge,const TopoDS_Face& Support,const GeomAbs_Shape Order,const Standard_Boolean IsBound = Standard_True) ;
  //! Adds a free constraint on a face. The corresponding edge has to <br>
//!	be automatically recomputed. <br>
//!	It is always a bound. <br>
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Face& Support,const GeomAbs_Shape Order) ;
  //! Adds a punctual constraint <br>
  Standard_EXPORT     Standard_Integer Add(const gp_Pnt& Point) ;
  //! Adds a punctual constraint. <br>
  Standard_EXPORT     Standard_Integer Add(const Standard_Real U,const Standard_Real V,const TopoDS_Face& Support,const GeomAbs_Shape Order) ;
  //! Builds the resulting faces <br>
  Standard_EXPORT     void Build() ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     TopoDS_Face Face() const;
  //! Returns the list of shapes generated from the <br>
//!          shape <S>. <br>
  Standard_EXPORT    const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;
  
  Standard_EXPORT     Standard_Real G0Error() const;
  
  Standard_EXPORT     Standard_Real G1Error() const;
  
  Standard_EXPORT     Standard_Real G2Error() const;
  
  Standard_EXPORT     Standard_Real G0Error(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Real G1Error(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Real G2Error(const Standard_Integer Index) ;





protected:





private:

  //! Adds constraints to builder <br>
  Standard_EXPORT     void AddConstraints(const BRepFill_SequenceOfEdgeFaceAndOrder& SeqOfConstraints) ;
  //! Builds wires of maximum length <br>
  Standard_EXPORT     void BuildWires(TopTools_ListOfShape& EdgeList,TopTools_ListOfShape& WireList) ;
  //! Finds extremities of future edges to fix the holes between wires. <br>
//!          Can properly operate only with convex contour <br>
  Standard_EXPORT     void FindExtremitiesOfHoles(const TopTools_ListOfShape& WireList,TopTools_SequenceOfShape& VerSeq) const;


GeomPlate_BuildPlateSurface myBuilder;
BRepFill_SequenceOfEdgeFaceAndOrder myBoundary;
BRepFill_SequenceOfEdgeFaceAndOrder myConstraints;
BRepFill_SequenceOfFaceAndOrder myFreeConstraints;
GeomPlate_SequenceOfPointConstraint myPoints;
TopTools_DataMapOfShapeListOfShape myOldNewMap;
TopTools_ListOfShape myGenerated;
TopoDS_Face myFace;
TopoDS_Face myInitFace;
Standard_Real myTol2d;
Standard_Real myTol3d;
Standard_Real myTolAng;
Standard_Real myTolCurv;
Standard_Integer myMaxDeg;
Standard_Integer myMaxSegments;
Standard_Integer myDegree;
Standard_Integer myNbPtsOnCur;
Standard_Integer myNbIter;
Standard_Boolean myAnisotropie;
Standard_Boolean myIsInitFaceGiven;
Standard_Boolean myIsDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
