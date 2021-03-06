// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_Area2dBuilder_HeaderFile
#define _TopOpeBRepBuild_Area2dBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepBuild_AreaBuilder_HeaderFile
#include <TopOpeBRepBuild_AreaBuilder.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopOpeBRepBuild_LoopSet;
class TopOpeBRepBuild_LoopClassifier;



//! The Area2dBuilder algorithm is used to construct Faces from a LoopSet, <br>
//! where the Loop is the composite topological object of the boundary, <br>
//! here wire or block of edges. <br>
//! The LoopSet gives an iteration on Loops. <br>
//! For each Loop  it indicates if it is on the boundary (wire) or if it <br>
//! results from  an interference (block of edges). <br>
//! The result of the Area2dBuilder is an iteration on areas. <br>
//! An area is described by a set of Loops. <br>
class TopOpeBRepBuild_Area2dBuilder  : public TopOpeBRepBuild_AreaBuilder {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepBuild_Area2dBuilder();
  //! Creates a Area2dBuilder to build faces on <br>
//! the (wires,blocks of edge) of <LS>, using the classifier <LC>. <br>
  Standard_EXPORT   TopOpeBRepBuild_Area2dBuilder(TopOpeBRepBuild_LoopSet& LS,TopOpeBRepBuild_LoopClassifier& LC,const Standard_Boolean ForceClass = Standard_False);
  //! Sets a Area1dBuilder to find the areas of <br>
//! the shapes described by <LS> using the classifier <LC>. <br>
  Standard_EXPORT   virtual  void InitAreaBuilder(TopOpeBRepBuild_LoopSet& LS,TopOpeBRepBuild_LoopClassifier& LC,const Standard_Boolean ForceClass = Standard_False) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
