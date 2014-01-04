// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_HArray1OfPHDat_HeaderFile
#define _HLRAlgo_HArray1OfPHDat_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_HLRAlgo_HArray1OfPHDat_HeaderFile
#include <Handle_HLRAlgo_HArray1OfPHDat.hxx>
#endif

#ifndef _HLRAlgo_Array1OfPHDat_HeaderFile
#include <HLRAlgo_Array1OfPHDat.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class HLRAlgo_PolyHidingData;
class HLRAlgo_Array1OfPHDat;



class HLRAlgo_HArray1OfPHDat : public MMgt_TShared {

public:

  
      HLRAlgo_HArray1OfPHDat(const Standard_Integer Low,const Standard_Integer Up);
  
      HLRAlgo_HArray1OfPHDat(const Standard_Integer Low,const Standard_Integer Up,const HLRAlgo_PolyHidingData& V);
  
        void Init(const HLRAlgo_PolyHidingData& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const HLRAlgo_PolyHidingData& Value) ;
  
       const HLRAlgo_PolyHidingData& Value(const Standard_Integer Index) const;
  
        HLRAlgo_PolyHidingData& ChangeValue(const Standard_Integer Index) ;
  
       const HLRAlgo_Array1OfPHDat& Array1() const;
  
        HLRAlgo_Array1OfPHDat& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(HLRAlgo_HArray1OfPHDat)

protected:




private: 


HLRAlgo_Array1OfPHDat myArray;


};

#define ItemHArray1 HLRAlgo_PolyHidingData
#define ItemHArray1_hxx <HLRAlgo_PolyHidingData.hxx>
#define TheArray1 HLRAlgo_Array1OfPHDat
#define TheArray1_hxx <HLRAlgo_Array1OfPHDat.hxx>
#define TCollection_HArray1 HLRAlgo_HArray1OfPHDat
#define TCollection_HArray1_hxx <HLRAlgo_HArray1OfPHDat.hxx>
#define Handle_TCollection_HArray1 Handle_HLRAlgo_HArray1OfPHDat
#define TCollection_HArray1_Type_() HLRAlgo_HArray1OfPHDat_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
