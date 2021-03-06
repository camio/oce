// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_ListOfIO_HeaderFile
#define _AIS2D_ListOfIO_HeaderFile

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
#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
#ifndef _Handle_AIS2D_ListNodeOfListOfIO_HeaderFile
#include <Handle_AIS2D_ListNodeOfListOfIO.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class AIS2D_ListIteratorOfListOfIO;
class AIS2D_InteractiveObject;
class AIS2D_ListNodeOfListOfIO;



class AIS2D_ListOfIO  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   AIS2D_ListOfIO();
  
  Standard_EXPORT     void Assign(const AIS2D_ListOfIO& Other) ;
    void operator=(const AIS2D_ListOfIO& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~AIS2D_ListOfIO()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(AIS2D_InteractiveObject)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(AIS2D_InteractiveObject)& I,AIS2D_ListIteratorOfListOfIO& theIt) ;
  
  Standard_EXPORT     void Prepend(AIS2D_ListOfIO& Other) ;
  
  Standard_EXPORT     void Append(const Handle(AIS2D_InteractiveObject)& I) ;
  
  Standard_EXPORT     void Append(const Handle(AIS2D_InteractiveObject)& I,AIS2D_ListIteratorOfListOfIO& theIt) ;
  
  Standard_EXPORT     void Append(AIS2D_ListOfIO& Other) ;
  
  Standard_EXPORT     Handle_AIS2D_InteractiveObject& First() const;
  
  Standard_EXPORT     Handle_AIS2D_InteractiveObject& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(AIS2D_ListIteratorOfListOfIO& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(AIS2D_InteractiveObject)& I,AIS2D_ListIteratorOfListOfIO& It) ;
  
  Standard_EXPORT     void InsertBefore(AIS2D_ListOfIO& Other,AIS2D_ListIteratorOfListOfIO& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(AIS2D_InteractiveObject)& I,AIS2D_ListIteratorOfListOfIO& It) ;
  
  Standard_EXPORT     void InsertAfter(AIS2D_ListOfIO& Other,AIS2D_ListIteratorOfListOfIO& It) ;


friend class AIS2D_ListIteratorOfListOfIO;



protected:





private:

  
  Standard_EXPORT   AIS2D_ListOfIO(const AIS2D_ListOfIO& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_AIS2D_InteractiveObject
#define Item_hxx <AIS2D_InteractiveObject.hxx>
#define TCollection_ListNode AIS2D_ListNodeOfListOfIO
#define TCollection_ListNode_hxx <AIS2D_ListNodeOfListOfIO.hxx>
#define TCollection_ListIterator AIS2D_ListIteratorOfListOfIO
#define TCollection_ListIterator_hxx <AIS2D_ListIteratorOfListOfIO.hxx>
#define Handle_TCollection_ListNode Handle_AIS2D_ListNodeOfListOfIO
#define TCollection_ListNode_Type_() AIS2D_ListNodeOfListOfIO_Type_()
#define TCollection_List AIS2D_ListOfIO
#define TCollection_List_hxx <AIS2D_ListOfIO.hxx>

#include <TCollection_List.lxx>

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
