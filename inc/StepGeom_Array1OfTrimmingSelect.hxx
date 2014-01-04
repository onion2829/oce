// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Array1OfTrimmingSelect_HeaderFile
#define _StepGeom_Array1OfTrimmingSelect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_TrimmingSelect;



class StepGeom_Array1OfTrimmingSelect  {
public:

  DEFINE_STANDARD_ALLOC

  
      StepGeom_Array1OfTrimmingSelect(const Standard_Integer Low,const Standard_Integer Up);
  
      StepGeom_Array1OfTrimmingSelect(const StepGeom_TrimmingSelect& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepGeom_TrimmingSelect& V) ;
  
        void Destroy() ;
~StepGeom_Array1OfTrimmingSelect()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepGeom_Array1OfTrimmingSelect& Assign(const StepGeom_Array1OfTrimmingSelect& Other) ;
   const StepGeom_Array1OfTrimmingSelect& operator =(const StepGeom_Array1OfTrimmingSelect& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepGeom_TrimmingSelect& Value) ;
  
       const StepGeom_TrimmingSelect& Value(const Standard_Integer Index) const;
     const StepGeom_TrimmingSelect& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepGeom_TrimmingSelect& ChangeValue(const Standard_Integer Index) ;
      StepGeom_TrimmingSelect& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepGeom_Array1OfTrimmingSelect(const StepGeom_Array1OfTrimmingSelect& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepGeom_TrimmingSelect
#define Array1Item_hxx <StepGeom_TrimmingSelect.hxx>
#define TCollection_Array1 StepGeom_Array1OfTrimmingSelect
#define TCollection_Array1_hxx <StepGeom_Array1OfTrimmingSelect.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
