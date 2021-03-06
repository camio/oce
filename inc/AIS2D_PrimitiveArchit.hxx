// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_PrimitiveArchit_HeaderFile
#define _AIS2D_PrimitiveArchit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_AIS2D_PrimitiveArchit_HeaderFile
#include <Handle_AIS2D_PrimitiveArchit.hxx>
#endif

#ifndef _Handle_Graphic2d_Primitive_HeaderFile
#include <Handle_Graphic2d_Primitive.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class Graphic2d_Primitive;



class AIS2D_PrimitiveArchit : public MMgt_TShared {

public:

  
  Standard_EXPORT   AIS2D_PrimitiveArchit(const Handle(Graphic2d_Primitive)& aPrim,const Standard_Integer ind);
  
  Standard_EXPORT     Handle_Graphic2d_Primitive GetPrimitive() const;
  
  Standard_EXPORT     Standard_Integer GetIndex() const;




  DEFINE_STANDARD_RTTI(AIS2D_PrimitiveArchit)

protected:




private: 


Handle_Graphic2d_Primitive myPrimitive;
Standard_Integer myInd;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
