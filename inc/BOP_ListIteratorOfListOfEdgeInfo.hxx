// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListIteratorOfListOfEdgeInfo_HeaderFile
#define _BOP_ListIteratorOfListOfEdgeInfo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfEdgeInfo_HeaderFile
#include <Handle_BOP_ListNodeOfListOfEdgeInfo.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class BOP_ListOfEdgeInfo;
class BOP_EdgeInfo;
class BOP_ListNodeOfListOfEdgeInfo;



class BOP_ListIteratorOfListOfEdgeInfo  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BOP_ListIteratorOfListOfEdgeInfo();
  
  Standard_EXPORT   BOP_ListIteratorOfListOfEdgeInfo(const BOP_ListOfEdgeInfo& L);
  
  Standard_EXPORT     void Initialize(const BOP_ListOfEdgeInfo& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     BOP_EdgeInfo& Value() const;


friend class BOP_ListOfEdgeInfo;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item BOP_EdgeInfo
#define Item_hxx <BOP_EdgeInfo.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfEdgeInfo
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfEdgeInfo.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfEdgeInfo
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfEdgeInfo.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfEdgeInfo
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfEdgeInfo_Type_()
#define TCollection_List BOP_ListOfEdgeInfo
#define TCollection_List_hxx <BOP_ListOfEdgeInfo.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
