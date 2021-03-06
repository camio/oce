// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_PointStyle_HeaderFile
#define _StepVisual_PointStyle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_PointStyle_HeaderFile
#include <Handle_StepVisual_PointStyle.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _StepVisual_MarkerSelect_HeaderFile
#include <StepVisual_MarkerSelect.hxx>
#endif
#ifndef _StepBasic_SizeSelect_HeaderFile
#include <StepBasic_SizeSelect.hxx>
#endif
#ifndef _Handle_StepVisual_Colour_HeaderFile
#include <Handle_StepVisual_Colour.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepVisual_Colour;
class StepVisual_MarkerSelect;
class StepBasic_SizeSelect;



class StepVisual_PointStyle : public MMgt_TShared {

public:

  //! Returns a PointStyle <br>
  Standard_EXPORT   StepVisual_PointStyle();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const StepVisual_MarkerSelect& aMarker,const StepBasic_SizeSelect& aMarkerSize,const Handle(StepVisual_Colour)& aMarkerColour) ;
  
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  
  Standard_EXPORT     void SetMarker(const StepVisual_MarkerSelect& aMarker) ;
  
  Standard_EXPORT     StepVisual_MarkerSelect Marker() const;
  
  Standard_EXPORT     void SetMarkerSize(const StepBasic_SizeSelect& aMarkerSize) ;
  
  Standard_EXPORT     StepBasic_SizeSelect MarkerSize() const;
  
  Standard_EXPORT     void SetMarkerColour(const Handle(StepVisual_Colour)& aMarkerColour) ;
  
  Standard_EXPORT     Handle_StepVisual_Colour MarkerColour() const;




  DEFINE_STANDARD_RTTI(StepVisual_PointStyle)

protected:




private: 


Handle_TCollection_HAsciiString name;
StepVisual_MarkerSelect marker;
StepBasic_SizeSelect markerSize;
Handle_StepVisual_Colour markerColour;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
