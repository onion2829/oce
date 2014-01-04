// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPInt_Tools_HeaderFile
#define _BOPInt_Tools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Geom_Curve;
class Bnd_Box;
class IntTools_Range;
class IntTools_CommonPrt;
class gp_Lin;
class gp_Pln;
class gp_Pnt;



class BOPInt_Tools  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Boolean CheckCurve(const Handle(Geom_Curve)& theC,const Standard_Real theTol,Bnd_Box& theBox) ;
  
  Standard_EXPORT   static  Standard_Boolean IsOnPave(const Standard_Real theT,const IntTools_Range& theRange,const Standard_Real theTol) ;
  
  Standard_EXPORT   static  void VertexParameters(const IntTools_CommonPrt& theCP,Standard_Real& theT1,Standard_Real& theT2) ;
  
  Standard_EXPORT   static  void VertexParameter(const IntTools_CommonPrt& theCP,Standard_Real& theT) ;
  
  Standard_EXPORT   static  Standard_Boolean IsOnPave1(const Standard_Real theT,const IntTools_Range& theRange,const Standard_Real theTol) ;
  //!  Checks if the range <theR> interfere with the range <theRRef> <br>
  Standard_EXPORT   static  Standard_Boolean IsInRange(const IntTools_Range& theRRef,const IntTools_Range& theR,const Standard_Real theTol) ;
  
  Standard_EXPORT   static  Standard_Integer SegPln(const gp_Lin& theLin,const Standard_Real theTLin1,const Standard_Real theTLin2,const Standard_Real theTolLin,const gp_Pln& thePln,const Standard_Real theTolPln,gp_Pnt& theP,Standard_Real& theT,Standard_Real& theTolP,Standard_Real& theTmin,Standard_Real& theTmax) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
