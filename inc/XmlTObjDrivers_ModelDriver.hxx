// Created on: 2004-11-24
// Created by: Edward AGAPOV
// Copyright (c) 2004-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

// The original implementation Copyright: (C) RINA S.p.A

#ifndef XmlTObjDrivers_ModelDriver_HeaderFile
#define XmlTObjDrivers_ModelDriver_HeaderFile

#include <TObj_Common.hxx>
#include <XmlMDF_ADriver.hxx>

class XmlTObjDrivers_ModelDriver : public XmlMDF_ADriver 
{

 public:

  Standard_EXPORT XmlTObjDrivers_ModelDriver
                         (const Handle(CDM_MessageDriver)& theMessageDriver);
  // constructor

  Standard_EXPORT Handle(TDF_Attribute) NewEmpty() const;
  // Creates a new attribute

  Standard_EXPORT Standard_Boolean Paste
                         (const XmlObjMgt_Persistent&  Source,
                          const Handle(TDF_Attribute)& Target,
                          XmlObjMgt_RRelocationTable&  RelocTable) const;
  // Translate the contents of <aSource> and put it
  // into <aTarget>, using the relocation table
  // <aRelocTable> to keep the sharings.
  // Set CurrentModel of TObj_Persistence into Target TObj_TModel
  // if its GUID and GUID stored in Source are same

  Standard_EXPORT void Paste
                         (const Handle(TDF_Attribute)& Source,
                          XmlObjMgt_Persistent&        Target,
                          XmlObjMgt_SRelocationTable&  RelocTable) const;
  // Translate the contents of <aSource> and put it
  // into <aTarget>, using the relocation table
  // <aRelocTable> to keep the sharings.
  // a Model is stored as its GUID
  
 public:
  // CASCADE RTTI
  DEFINE_STANDARD_RTTI(XmlTObjDrivers_ModelDriver)
};

// Define handle class
DEFINE_STANDARD_HANDLE(XmlTObjDrivers_ModelDriver,XmlMDF_ADriver)


#endif

#ifdef _MSC_VER
#pragma once
#endif
