// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_RetrievalDriver_HeaderFile
#define _PCDM_RetrievalDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PCDM_RetrievalDriver_HeaderFile
#include <Handle_PCDM_RetrievalDriver.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _PCDM_Reader_HeaderFile
#include <PCDM_Reader.hxx>
#endif
#ifndef _Handle_CDM_MetaData_HeaderFile
#include <Handle_CDM_MetaData.hxx>
#endif
#ifndef _PCDM_ReferenceIterator_HeaderFile
#include <PCDM_ReferenceIterator.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_Application_HeaderFile
#include <Handle_CDM_Application.hxx>
#endif
#ifndef _Handle_PCDM_Document_HeaderFile
#include <Handle_PCDM_Document.hxx>
#endif
#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class PCDM_DriverError;
class CDM_MetaData;
class TCollection_ExtendedString;
class CDM_Document;
class CDM_Application;
class PCDM_Document;
class Storage_Schema;
class TColStd_SequenceOfExtendedString;
class CDM_MessageDriver;
class PCDM_SequenceOfReference;
class TCollection_AsciiString;



class PCDM_RetrievalDriver : public PCDM_Reader {

public:

  //!  Warning -  raises DriverError if an error occurs during inside the <br>
//!          Make method. <br>//! retrieves the content of the file into a new Document. <br>
//! <br>
//!          by  default  Read will  use the Schema method to read the file <br>
//!          into a persistent document. and the Make   method to build a <br>
//!          transient document. <br>
//! <br>
  Standard_EXPORT   virtual  void Read(const TCollection_ExtendedString& aFileName,const Handle(CDM_Document)& aNewDocument,const Handle(CDM_Application)& anApplication) ;
  
  Standard_EXPORT   virtual  void Make(const Handle(PCDM_Document)& aPCDM,const Handle(CDM_Document)& aNewDocument)  = 0;
  
  Standard_EXPORT   virtual  TCollection_ExtendedString SchemaName() const = 0;
  
  Standard_EXPORT   virtual  void LoadExtensions(const Handle(Storage_Schema)& aSchema,const TColStd_SequenceOfExtendedString& Extensions,const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT   static  void RaiseIfUnknownTypes(const Handle(Storage_Schema)& aSchema,const TCollection_ExtendedString& aFileName) ;
  
  Standard_EXPORT   static  Standard_Integer DocumentVersion(const TCollection_ExtendedString& aFileName,const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT   static  Standard_Integer ReferenceCounter(const TCollection_ExtendedString& aFileName,const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT     void SetFormat(const TCollection_ExtendedString& aformat) ;
  
  Standard_EXPORT     TCollection_ExtendedString GetFormat() const;


friend   
  Standard_EXPORT   void PCDM_ReferenceIterator::Init(const Handle(CDM_MetaData)& aMetaData) ;


  DEFINE_STANDARD_RTTI(PCDM_RetrievalDriver)

protected:




private: 

  
  Standard_EXPORT   static  void References(const TCollection_ExtendedString& aFileName,PCDM_SequenceOfReference& theReferences,const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT   static  void Extensions(const TCollection_ExtendedString& aFileName,TColStd_SequenceOfExtendedString& theExtensions,const Handle(CDM_MessageDriver)& theMsgDriver) ;
  
  Standard_EXPORT   static  void UserInfo(const TCollection_ExtendedString& aFileName,const TCollection_AsciiString& Start,const TCollection_AsciiString& End,TColStd_SequenceOfExtendedString& theUserInfo,const Handle(CDM_MessageDriver)& theMsgDriver) ;

TCollection_ExtendedString myFormat;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
