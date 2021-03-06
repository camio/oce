// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_Vertex_HeaderFile
#define _StdPrs_Vertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Prs3d_Root_HeaderFile
#include <Prs3d_Root.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
class TopoDS_Vertex;
class StdPrs_ToolVertex;
class Prs3d_Presentation;
class Prs3d_Drawer;



class StdPrs_Vertex  : public Prs3d_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const TopoDS_Vertex& aPoint,const Handle(Prs3d_Drawer)& aDrawer) ;
  
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const TopoDS_Vertex& aPoint) ;
  
  Standard_EXPORT   static  Standard_Boolean Match(const TopoDS_Vertex& aPoint,const Quantity_Length X,const Quantity_Length Y,const Quantity_Length Z,const Quantity_Length aDistance) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
