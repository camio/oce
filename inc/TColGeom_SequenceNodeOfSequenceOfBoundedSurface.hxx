// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_SequenceNodeOfSequenceOfBoundedSurface_HeaderFile
#define _TColGeom_SequenceNodeOfSequenceOfBoundedSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColGeom_SequenceNodeOfSequenceOfBoundedSurface_HeaderFile
#include <Handle_TColGeom_SequenceNodeOfSequenceOfBoundedSurface.hxx>
#endif

#ifndef _Handle_Geom_BoundedSurface_HeaderFile
#include <Handle_Geom_BoundedSurface.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Geom_BoundedSurface;
class TColGeom_SequenceOfBoundedSurface;



class TColGeom_SequenceNodeOfSequenceOfBoundedSurface : public TCollection_SeqNode {

public:

  
      TColGeom_SequenceNodeOfSequenceOfBoundedSurface(const Handle(Geom_BoundedSurface)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Geom_BoundedSurface& Value() const;




  DEFINE_STANDARD_RTTI(TColGeom_SequenceNodeOfSequenceOfBoundedSurface)

protected:




private: 


Handle_Geom_BoundedSurface myValue;


};

#define SeqItem Handle_Geom_BoundedSurface
#define SeqItem_hxx <Geom_BoundedSurface.hxx>
#define TCollection_SequenceNode TColGeom_SequenceNodeOfSequenceOfBoundedSurface
#define TCollection_SequenceNode_hxx <TColGeom_SequenceNodeOfSequenceOfBoundedSurface.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom_SequenceNodeOfSequenceOfBoundedSurface
#define TCollection_SequenceNode_Type_() TColGeom_SequenceNodeOfSequenceOfBoundedSurface_Type_()
#define TCollection_Sequence TColGeom_SequenceOfBoundedSurface
#define TCollection_Sequence_hxx <TColGeom_SequenceOfBoundedSurface.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
