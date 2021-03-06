// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Quantity_HArray1OfColor_HeaderFile
#define _Quantity_HArray1OfColor_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Quantity_HArray1OfColor.hxx>

#include <Quantity_Array1OfColor.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Quantity_Color;
class Quantity_Array1OfColor;



class Quantity_HArray1OfColor : public MMgt_TShared
{

public:

  
    Quantity_HArray1OfColor(const Standard_Integer Low, const Standard_Integer Up);
  
    Quantity_HArray1OfColor(const Standard_Integer Low, const Standard_Integer Up, const Quantity_Color& V);
  
      void Init (const Quantity_Color& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Quantity_Color& Value) ;
  
     const  Quantity_Color& Value (const Standard_Integer Index)  const;
  
      Quantity_Color& ChangeValue (const Standard_Integer Index) ;
  
     const  Quantity_Array1OfColor& Array1()  const;
  
      Quantity_Array1OfColor& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(Quantity_HArray1OfColor)

protected:




private: 


  Quantity_Array1OfColor myArray;


};

#define ItemHArray1 Quantity_Color
#define ItemHArray1_hxx <Quantity_Color.hxx>
#define TheArray1 Quantity_Array1OfColor
#define TheArray1_hxx <Quantity_Array1OfColor.hxx>
#define TCollection_HArray1 Quantity_HArray1OfColor
#define TCollection_HArray1_hxx <Quantity_HArray1OfColor.hxx>
#define Handle_TCollection_HArray1 Handle_Quantity_HArray1OfColor
#define TCollection_HArray1_Type_() Quantity_HArray1OfColor_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _Quantity_HArray1OfColor_HeaderFile
