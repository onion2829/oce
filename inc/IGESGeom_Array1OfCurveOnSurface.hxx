// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_Array1OfCurveOnSurface_HeaderFile
#define _IGESGeom_Array1OfCurveOnSurface_HeaderFile

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
#ifndef _Handle_IGESGeom_CurveOnSurface_HeaderFile
#include <Handle_IGESGeom_CurveOnSurface.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESGeom_CurveOnSurface;



class IGESGeom_Array1OfCurveOnSurface  {
public:

  DEFINE_STANDARD_ALLOC

  
      IGESGeom_Array1OfCurveOnSurface(const Standard_Integer Low,const Standard_Integer Up);
  
      IGESGeom_Array1OfCurveOnSurface(const Handle(IGESGeom_CurveOnSurface)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(IGESGeom_CurveOnSurface)& V) ;
  
        void Destroy() ;
~IGESGeom_Array1OfCurveOnSurface()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const IGESGeom_Array1OfCurveOnSurface& Assign(const IGESGeom_Array1OfCurveOnSurface& Other) ;
   const IGESGeom_Array1OfCurveOnSurface& operator =(const IGESGeom_Array1OfCurveOnSurface& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(IGESGeom_CurveOnSurface)& Value) ;
  
       const Handle_IGESGeom_CurveOnSurface& Value(const Standard_Integer Index) const;
     const Handle_IGESGeom_CurveOnSurface& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_IGESGeom_CurveOnSurface& ChangeValue(const Standard_Integer Index) ;
      Handle_IGESGeom_CurveOnSurface& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   IGESGeom_Array1OfCurveOnSurface(const IGESGeom_Array1OfCurveOnSurface& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_IGESGeom_CurveOnSurface
#define Array1Item_hxx <IGESGeom_CurveOnSurface.hxx>
#define TCollection_Array1 IGESGeom_Array1OfCurveOnSurface
#define TCollection_Array1_hxx <IGESGeom_Array1OfCurveOnSurface.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
