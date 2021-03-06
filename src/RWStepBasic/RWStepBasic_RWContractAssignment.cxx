// Created on: 1999-11-26
// Created by: Andrey BETENEV
// Copyright (c) 1999 Matra Datavision
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

// Generator:	ExpToCas (EXPRESS -> CASCADE/XSTEP Translator) V1.0

#include <RWStepBasic_RWContractAssignment.ixx>

//=======================================================================
//function : RWStepBasic_RWContractAssignment
//purpose  : 
//=======================================================================

RWStepBasic_RWContractAssignment::RWStepBasic_RWContractAssignment ()
{
}

//=======================================================================
//function : ReadStep
//purpose  : 
//=======================================================================

void RWStepBasic_RWContractAssignment::ReadStep (const Handle(StepData_StepReaderData)& data,
                                                 const Standard_Integer num,
                                                 Handle(Interface_Check)& ach,
                                                 const Handle(StepBasic_ContractAssignment) &ent) const
{
  // Check number of parameters
  if ( ! data->CheckNbParams(num,1,ach,"contract_assignment") ) return;

  // Own fields of ContractAssignment

  Handle(StepBasic_Contract) aAssignedContract;
  data->ReadEntity (num, 1, "assigned_contract", ach, STANDARD_TYPE(StepBasic_Contract), aAssignedContract);

  // Initialize entity
  ent->Init(aAssignedContract);
}

//=======================================================================
//function : WriteStep
//purpose  : 
//=======================================================================

void RWStepBasic_RWContractAssignment::WriteStep (StepData_StepWriter& SW,
                                                  const Handle(StepBasic_ContractAssignment) &ent) const
{

  // Own fields of ContractAssignment

  SW.Send (ent->AssignedContract());
}

//=======================================================================
//function : Share
//purpose  : 
//=======================================================================

void RWStepBasic_RWContractAssignment::Share (const Handle(StepBasic_ContractAssignment) &ent,
                                              Interface_EntityIterator& iter) const
{

  // Own fields of ContractAssignment

  iter.AddItem (ent->AssignedContract());
}
