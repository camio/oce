// Created by: VAUTHIER Jean-Claude & DAUTRY Philippe
// Copyright (c) 1997-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
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

//      	------------

// Version:	0.0
//Version	Date		Purpose
//		0.0	Feb 10 1997	Creation



#include <DDF_Data.ixx>
#include <DDF.hxx>

#include <Standard_GUID.hxx>

#include <TCollection_AsciiString.hxx>

#include <TDF_Attribute.hxx>
#include <TDF_Label.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_Tool.hxx>



//=======================================================================
//function : DDF_Data
//purpose  : 
//=======================================================================

DDF_Data::DDF_Data(const Handle(TDF_Data)& aDF) : myDF (aDF) {}



//=======================================================================
//function : DrawOn
//purpose  : 
//=======================================================================

void DDF_Data::DrawOn(Draw_Display& dis) const

{ cout<<"DDF_Data"<<endl; }



//=======================================================================
//function : Copy
//purpose  : 
//=======================================================================

Handle(Draw_Drawable3D) DDF_Data::Copy() const { return new DDF_Data (myDF); }



//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void DDF_Data::Dump(Standard_OStream& S) const

{
  TDF_Tool::DeepDump(S,myDF);
}


//=======================================================================
//function : DataFramework
//purpose  : 
//=======================================================================

Handle(TDF_Data) DDF_Data::DataFramework () const { return myDF; }




//=======================================================================
//function : DataFramework
//purpose  : 
//=======================================================================

void DDF_Data::DataFramework (const Handle(TDF_Data)& aDF) 

{ myDF = aDF; }




//=======================================================================
//function : Whatis
//purpose  : 
//=======================================================================

void DDF_Data::Whatis (Draw_Interpretor& I) const

{
  I << "Data Framework";
}
