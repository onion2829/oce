// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_DatumAspect_HeaderFile
#define _Prs3d_DatumAspect_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs3d_DatumAspect_HeaderFile
#include <Handle_Prs3d_DatumAspect.hxx>
#endif

#ifndef _Handle_Prs3d_LineAspect_HeaderFile
#include <Handle_Prs3d_LineAspect.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Prs3d_BasicAspect_HeaderFile
#include <Prs3d_BasicAspect.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Prs3d_LineAspect;


//! A framework to define the display of datums. <br>
class Prs3d_DatumAspect : public Prs3d_BasicAspect {

public:

  //! An empty framework to define the display of datums. <br>
  Standard_EXPORT   Prs3d_DatumAspect();
  //! Returns the attributes for display of the first axis. <br>
  Standard_EXPORT     Handle_Prs3d_LineAspect FirstAxisAspect() const;
  //! Returns the attributes for display of the second axis. <br>
  Standard_EXPORT     Handle_Prs3d_LineAspect SecondAxisAspect() const;
  //! Returns the attributes for display of the third axis. <br>
  Standard_EXPORT     Handle_Prs3d_LineAspect ThirdAxisAspect() const;
  //! Sets the DrawFirstAndSecondAxis attributes to active. <br>
  Standard_EXPORT     void SetDrawFirstAndSecondAxis(const Standard_Boolean draw) ;
  //! Returns true if the first and second axes can be drawn. <br>
  Standard_EXPORT     Standard_Boolean DrawFirstAndSecondAxis() const;
  //! Sets the DrawThirdAxis attributes to active. <br>
  Standard_EXPORT     void SetDrawThirdAxis(const Standard_Boolean draw) ;
  //! Returns true if the third axis can be drawn. <br>
  Standard_EXPORT     Standard_Boolean DrawThirdAxis() const;
  //! Sets the lengths L1, L2 and L3 of the three axes. <br>
  Standard_EXPORT     void SetAxisLength(const Standard_Real L1,const Standard_Real L2,const Standard_Real L3) ;
  //! Returns the length of the displayed first axis. <br>
  Standard_EXPORT     Quantity_Length FirstAxisLength() const;
  //! Returns the length of the displayed second axis. <br>
  Standard_EXPORT     Quantity_Length SecondAxisLength() const;
  //! Returns the length of the displayed third axis. <br>
  Standard_EXPORT     Quantity_Length ThirdAxisLength() const;




  DEFINE_STANDARD_RTTI(Prs3d_DatumAspect)

protected:




private: 


Handle_Prs3d_LineAspect myFirstAxisAspect;
Handle_Prs3d_LineAspect mySecondAxisAspect;
Handle_Prs3d_LineAspect myThirdAxisAspect;
Standard_Boolean myDrawFirstAndSecondAxis;
Standard_Boolean myDrawThirdAxis;
Quantity_Length myFirstAxisLength;
Quantity_Length mySecondAxisLength;
Quantity_Length myThirdAxisLength;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
