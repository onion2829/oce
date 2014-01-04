// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Approx_Array1OfGTrsf2d_HeaderFile
#define _Approx_Array1OfGTrsf2d_HeaderFile

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
class gp_GTrsf2d;



class Approx_Array1OfGTrsf2d  {
public:

  DEFINE_STANDARD_ALLOC

  
      Approx_Array1OfGTrsf2d(const Standard_Integer Low,const Standard_Integer Up);
  
      Approx_Array1OfGTrsf2d(const gp_GTrsf2d& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const gp_GTrsf2d& V) ;
  
        void Destroy() ;
~Approx_Array1OfGTrsf2d()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const Approx_Array1OfGTrsf2d& Assign(const Approx_Array1OfGTrsf2d& Other) ;
   const Approx_Array1OfGTrsf2d& operator =(const Approx_Array1OfGTrsf2d& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const gp_GTrsf2d& Value) ;
  
       const gp_GTrsf2d& Value(const Standard_Integer Index) const;
     const gp_GTrsf2d& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        gp_GTrsf2d& ChangeValue(const Standard_Integer Index) ;
      gp_GTrsf2d& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   Approx_Array1OfGTrsf2d(const Approx_Array1OfGTrsf2d& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item gp_GTrsf2d
#define Array1Item_hxx <gp_GTrsf2d.hxx>
#define TCollection_Array1 Approx_Array1OfGTrsf2d
#define TCollection_Array1_hxx <Approx_Array1OfGTrsf2d.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
