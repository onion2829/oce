// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAdaptor_HSurface_HeaderFile
#define _BRepAdaptor_HSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif

#ifndef _BRepAdaptor_Surface_HeaderFile
#include <BRepAdaptor_Surface.hxx>
#endif
#ifndef _Adaptor3d_HSurface_HeaderFile
#include <Adaptor3d_HSurface.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class BRepAdaptor_Surface;
class Adaptor3d_Surface;



class BRepAdaptor_HSurface : public Adaptor3d_HSurface {

public:

  
  Standard_EXPORT   BRepAdaptor_HSurface();
  
  Standard_EXPORT   BRepAdaptor_HSurface(const BRepAdaptor_Surface& S);
  
  Standard_EXPORT     void Set(const BRepAdaptor_Surface& S) ;
  
  Standard_EXPORT    const Adaptor3d_Surface& Surface() const;
  
        BRepAdaptor_Surface& ChangeSurface() ;




  DEFINE_STANDARD_RTTI(BRepAdaptor_HSurface)

protected:


BRepAdaptor_Surface mySurf;


private: 




};

#define TheSurface BRepAdaptor_Surface
#define TheSurface_hxx <BRepAdaptor_Surface.hxx>
#define Adaptor3d_GenHSurface BRepAdaptor_HSurface
#define Adaptor3d_GenHSurface_hxx <BRepAdaptor_HSurface.hxx>
#define Handle_Adaptor3d_GenHSurface Handle_BRepAdaptor_HSurface
#define Adaptor3d_GenHSurface_Type_() BRepAdaptor_HSurface_Type_()

#include <Adaptor3d_GenHSurface.lxx>

#undef TheSurface
#undef TheSurface_hxx
#undef Adaptor3d_GenHSurface
#undef Adaptor3d_GenHSurface_hxx
#undef Handle_Adaptor3d_GenHSurface
#undef Adaptor3d_GenHSurface_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif