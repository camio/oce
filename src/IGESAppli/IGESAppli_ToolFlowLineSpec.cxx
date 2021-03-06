// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
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

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <IGESAppli_ToolFlowLineSpec.ixx>
#include <IGESData_ParamCursor.hxx>
#include <Interface_HArray1OfHAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <IGESData_Dump.hxx>
#include <Interface_Macros.hxx>


IGESAppli_ToolFlowLineSpec::IGESAppli_ToolFlowLineSpec ()    {  }


void  IGESAppli_ToolFlowLineSpec::ReadOwnParams
  (const Handle(IGESAppli_FlowLineSpec)& ent,
   const Handle(IGESData_IGESReaderData)& /* IR */, IGESData_ParamReader& PR) const
{
  //Standard_Boolean st; //szv#4:S4163:12Mar99 not needed
  Standard_Integer num;
  Handle(Interface_HArray1OfHAsciiString) tempNameAndModifiers;
  if (!PR.ReadInteger(PR.Current(), "Number of property values", num)) num = 0;
  if (num > 0) tempNameAndModifiers = new Interface_HArray1OfHAsciiString(1, num);
  else PR.AddFail("Number of property values: Not Positive");
  //szv#4:S4163:12Mar99 `st=` not needed
  if (!tempNameAndModifiers.IsNull())
    PR.ReadTexts(PR.CurrentList(num), "Name and Modifiers", tempNameAndModifiers);

  DirChecker(ent).CheckTypeAndForm(PR.CCheck(),ent);
  ent->Init(tempNameAndModifiers);
}

void  IGESAppli_ToolFlowLineSpec::WriteOwnParams
  (const Handle(IGESAppli_FlowLineSpec)& ent, IGESData_IGESWriter& IW) const
{
  Standard_Integer i, num;
  IW.Send(ent->NbPropertyValues());
  for ( num = ent->NbPropertyValues(), i = 1; i <= num; i++ )
    IW.Send(ent->Modifier(i));
}

void  IGESAppli_ToolFlowLineSpec::OwnShared
  (const Handle(IGESAppli_FlowLineSpec)& /* ent */, Interface_EntityIterator& /* iter */) const
{
}

void  IGESAppli_ToolFlowLineSpec::OwnCopy
  (const Handle(IGESAppli_FlowLineSpec)& another,
   const Handle(IGESAppli_FlowLineSpec)& ent, Interface_CopyTool& /* TC */) const
{
  Standard_Integer num = another->NbPropertyValues();
  Handle(Interface_HArray1OfHAsciiString) tempNameAndModifiers =
    new Interface_HArray1OfHAsciiString(1, num);
  for ( Standard_Integer i = 1; i <= num; i++ )
    tempNameAndModifiers->SetValue
      (i, new TCollection_HAsciiString(another->Modifier(i)));
  ent->Init(tempNameAndModifiers);
}

IGESData_DirChecker  IGESAppli_ToolFlowLineSpec::DirChecker
  (const Handle(IGESAppli_FlowLineSpec)& /* ent */ ) const
{
  IGESData_DirChecker DC(406, 14);
  DC.Structure(IGESData_DefVoid);
  DC.GraphicsIgnored();
  DC.LineFont(IGESData_DefVoid);
  DC.LineWeight(IGESData_DefVoid);
  DC.Color(IGESData_DefVoid);
  DC.BlankStatusIgnored();
  DC.UseFlagIgnored();
  DC.HierarchyStatusIgnored();
  return DC;
}

void  IGESAppli_ToolFlowLineSpec::OwnCheck
  (const Handle(IGESAppli_FlowLineSpec)& /* ent */,
   const Interface_ShareTool& , Handle(Interface_Check)& /* ach */) const
{
}

void  IGESAppli_ToolFlowLineSpec::OwnDump
  (const Handle(IGESAppli_FlowLineSpec)& ent, const IGESData_IGESDumper& /* dumper */,
   const Handle(Message_Messenger)& S, const Standard_Integer level) const
{
  S << "IGESAppli_FlowLineSpec" << endl;
  S << "Name and Modifiers : ";
  IGESData_DumpStrings(S ,level,1, ent->NbPropertyValues(),ent->Modifier);
  S << endl;
}

