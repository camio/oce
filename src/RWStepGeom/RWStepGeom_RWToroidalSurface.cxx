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


#include <RWStepGeom_RWToroidalSurface.ixx>
#include <StepGeom_Axis2Placement3d.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepGeom_ToroidalSurface.hxx>


RWStepGeom_RWToroidalSurface::RWStepGeom_RWToroidalSurface () {}

void RWStepGeom_RWToroidalSurface::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepGeom_ToroidalSurface)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,4,ach,"toroidal_surface")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- inherited field : position ---

	Handle(StepGeom_Axis2Placement3d) aPosition;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"position", ach, STANDARD_TYPE(StepGeom_Axis2Placement3d), aPosition);

	// --- own field : majorRadius ---

	Standard_Real aMajorRadius;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat3 =` not needed
	data->ReadReal (num,3,"major_radius",ach,aMajorRadius);

	// --- own field : minorRadius ---

	Standard_Real aMinorRadius;
	//szv#4:S4163:12Mar99 `Standard_Boolean stat4 =` not needed
	data->ReadReal (num,4,"minor_radius",ach,aMinorRadius);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aPosition, aMajorRadius, aMinorRadius);
}


void RWStepGeom_RWToroidalSurface::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepGeom_ToroidalSurface)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- inherited field position ---

	SW.Send(ent->Position());

	// --- own field : majorRadius ---

	SW.Send(ent->MajorRadius());

	// --- own field : minorRadius ---

	SW.Send(ent->MinorRadius());
}


void RWStepGeom_RWToroidalSurface::Share(const Handle(StepGeom_ToroidalSurface)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->Position());
}



void RWStepGeom_RWToroidalSurface::Check
  (const Handle(StepGeom_ToroidalSurface)& ent,
   const Interface_ShareTool& ,
   Handle(Interface_Check)& ach) const
{
//  cout << "------ calling CheckToroidalSurface ------" << endl;
  if (ent->MajorRadius() < 0.0)
    ach->AddFail("ERROR: ToroidalSurface: MajorRadius < 0.0");
  if (ent->MinorRadius() < 0.0)
    ach->AddFail("ERROR: ToroidalSurface: MinorRadius < 0.0");
  if (ent->MajorRadius() < ent->MinorRadius())
    ach->AddWarning("ToroidalSurface: MajorRadius smaller than MinorRadius");
}
