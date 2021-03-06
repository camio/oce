// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DeformedDataSource_HeaderFile
#define _MeshVS_DeformedDataSource_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_DeformedDataSource_HeaderFile
#include <Handle_MeshVS_DeformedDataSource.hxx>
#endif

#ifndef _Handle_MeshVS_DataSource_HeaderFile
#include <Handle_MeshVS_DataSource.hxx>
#endif
#ifndef _TColStd_PackedMapOfInteger_HeaderFile
#include <TColStd_PackedMapOfInteger.hxx>
#endif
#ifndef _MeshVS_DataMapOfIntegerVector_HeaderFile
#include <MeshVS_DataMapOfIntegerVector.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _MeshVS_DataSource_HeaderFile
#include <MeshVS_DataSource.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MeshVS_EntityType_HeaderFile
#include <MeshVS_EntityType.hxx>
#endif
#ifndef _Handle_MeshVS_HArray1OfSequenceOfInteger_HeaderFile
#include <Handle_MeshVS_HArray1OfSequenceOfInteger.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class MeshVS_DataSource;
class TColStd_Array1OfReal;
class MeshVS_HArray1OfSequenceOfInteger;
class TColStd_Array1OfInteger;
class MeshVS_DataMapOfIntegerVector;
class gp_Vec;


//! The class provides default class which helps to represent node displacements by deformed mesh <br>
//!    This class has an internal handle to canonical non-deformed mesh data source and <br>
//! map of displacement vectors. The displacement can be magnified to useful size. <br>
//! All methods is implemented with calling the corresponding methods of non-deformed data source. <br>
class MeshVS_DeformedDataSource : public MeshVS_DataSource {

public:

  //!  Constructor <br>
//! theNonDeformDS is canonical non-deformed data source, by which we are able to calculate <br>
//!   deformed mesh geometry <br>
//! theMagnify is coefficient of displacement magnify <br>
  Standard_EXPORT   MeshVS_DeformedDataSource(const Handle(MeshVS_DataSource)& theNonDeformDS,const Standard_Real theMagnify);
  
  Standard_EXPORT   virtual  Standard_Boolean GetGeom(const Standard_Integer ID,const Standard_Boolean IsElement,TColStd_Array1OfReal& Coords,Standard_Integer& NbNodes,MeshVS_EntityType& Type) const;
  
  Standard_EXPORT   virtual  Standard_Boolean GetGeomType(const Standard_Integer ID,const Standard_Boolean IsElement,MeshVS_EntityType& Type) const;
  
  Standard_EXPORT   virtual  Standard_Boolean Get3DGeom(const Standard_Integer ID,Standard_Integer& NbNodes,Handle(MeshVS_HArray1OfSequenceOfInteger)& Data) const;
  
  Standard_EXPORT   virtual  Standard_Address GetAddr(const Standard_Integer ID,const Standard_Boolean IsElement) const;
  
  Standard_EXPORT   virtual  Standard_Boolean GetNodesByElement(const Standard_Integer ID,TColStd_Array1OfInteger& NodeIDs,Standard_Integer& NbNodes) const;
  
  Standard_EXPORT   virtual const TColStd_PackedMapOfInteger& GetAllNodes() const;
  
  Standard_EXPORT   virtual const TColStd_PackedMapOfInteger& GetAllElements() const;
  //! This method returns map of nodal displacement vectors <br>
  Standard_EXPORT    const MeshVS_DataMapOfIntegerVector& GetVectors() const;
  //! This method sets map of nodal displacement vectors (Map). <br>
  Standard_EXPORT     void SetVectors(const MeshVS_DataMapOfIntegerVector& Map) ;
  //! This method returns vector ( Vect ) assigned to node number ID. <br>
  Standard_EXPORT     Standard_Boolean GetVector(const Standard_Integer ID,gp_Vec& Vect) const;
  //! This method sets vector ( Vect ) assigned to node number ID. <br>
  Standard_EXPORT     void SetVector(const Standard_Integer ID,const gp_Vec& Vect) ;
  
  Standard_EXPORT     void SetNonDeformedDataSource(const Handle(MeshVS_DataSource)& theDS) ;
  //! With this methods you can read and change internal canonical data source <br>
  Standard_EXPORT     Handle_MeshVS_DataSource GetNonDeformedDataSource() const;
  
  Standard_EXPORT     void SetMagnify(const Standard_Real theMagnify) ;
  //! With this methods you can read and change magnify coefficient of nodal displacements <br>
  Standard_EXPORT     Standard_Real GetMagnify() const;




  DEFINE_STANDARD_RTTI(MeshVS_DeformedDataSource)

protected:




private: 


Handle_MeshVS_DataSource myNonDeformedDataSource;
TColStd_PackedMapOfInteger myEmptyMap;
MeshVS_DataMapOfIntegerVector myVectors;
Standard_Real myMagnify;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
