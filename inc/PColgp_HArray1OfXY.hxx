// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray1OfXY_HeaderFile
#define _PColgp_HArray1OfXY_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PColgp_HArray1OfXY.hxx>

#include <Standard_Integer.hxx>
#include <gp_XY.hxx>
#include <PColgp_FieldOfHArray1OfXY.hxx>
#include <Standard_Address.hxx>
#include <Standard_Persistent.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY.hxx>
class Standard_OutOfRange;
class Standard_RangeError;
class gp_XY;
class PColgp_FieldOfHArray1OfXY;
class PColgp_VArrayNodeOfFieldOfHArray1OfXY;
class PColgp_VArrayTNodeOfFieldOfHArray1OfXY;


class PColgp_HArray1OfXY : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColgp_HArray1OfXY(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PColgp_HArray1OfXY(const Standard_Integer Low, const Standard_Integer Up, const gp_XY& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_XY& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   gp_XY Value (const Standard_Integer Index)  const;

PColgp_HArray1OfXY( )
{
  
}
PColgp_HArray1OfXY(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray1OfXYLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColgp_HArray1OfXYLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray1OfXYUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColgp_HArray1OfXYUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColgp_FieldOfHArray1OfXY& _CSFDB_GetPColgp_HArray1OfXYData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray1OfXY)

protected:




private: 

  
  Standard_EXPORT   PColgp_FieldOfHArray1OfXY Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PColgp_FieldOfHArray1OfXY Data;


};

#define Item gp_XY
#define Item_hxx <gp_XY.hxx>
#define PCollection_FieldOfHArray1 PColgp_FieldOfHArray1OfXY
#define PCollection_FieldOfHArray1_hxx <PColgp_FieldOfHArray1OfXY.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfXY
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColgp_VArrayNodeOfFieldOfHArray1OfXY.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfXY
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColgp_VArrayTNodeOfFieldOfHArray1OfXY.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfXY
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColgp_VArrayNodeOfFieldOfHArray1OfXY.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfXY
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColgp_VArrayTNodeOfFieldOfHArray1OfXY.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfXY_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfXY_Type_()
#define PCollection_HArray1 PColgp_HArray1OfXY
#define PCollection_HArray1_hxx <PColgp_HArray1OfXY.hxx>
#define Handle_PCollection_HArray1 Handle_PColgp_HArray1OfXY
#define PCollection_HArray1_Type_() PColgp_HArray1OfXY_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_




#endif // _PColgp_HArray1OfXY_HeaderFile
