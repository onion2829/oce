// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_DiameterDimension_HeaderFile
#define _IGESDimen_DiameterDimension_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_DiameterDimension.hxx>

#include <Handle_IGESDimen_GeneralNote.hxx>
#include <Handle_IGESDimen_LeaderArrow.hxx>
#include <gp_XY.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>
class IGESDimen_GeneralNote;
class IGESDimen_LeaderArrow;
class gp_XY;
class gp_Pnt2d;


//! defines DiameterDimension, Type <206> Form <0>
//! in package IGESDimen
//! Used for dimensioning diameters
class IGESDimen_DiameterDimension : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESDimen_DiameterDimension();
  
  //! This method is used to set the fields of the class
  //! DiameterDimension
  //! - aNote         : General Note Entity
  //! - aLeader       : First Leader Entity
  //! - anotherLeader : Second Leader Entity or a Null Handle.
  //! - aCenter       : Arc center coordinates
  Standard_EXPORT   void Init (const Handle(IGESDimen_GeneralNote)& aNote, const Handle(IGESDimen_LeaderArrow)& aLeader, const Handle(IGESDimen_LeaderArrow)& anotherLeader, const gp_XY& aCenter) ;
  
  //! returns the General Note Entity
  Standard_EXPORT   Handle(IGESDimen_GeneralNote) Note()  const;
  
  //! returns the First Leader Entity
  Standard_EXPORT   Handle(IGESDimen_LeaderArrow) FirstLeader()  const;
  
  //! returns False if theSecondleader is a Null Handle.
  Standard_EXPORT   Standard_Boolean HasSecondLeader()  const;
  
  //! returns the Second Leader Entity
  Standard_EXPORT   Handle(IGESDimen_LeaderArrow) SecondLeader()  const;
  
  //! returns the Arc Center co-ordinates as Pnt2d from package gp
  Standard_EXPORT   gp_Pnt2d Center()  const;
  
  //! returns the Arc Center co-ordinates as Pnt2d from package gp
  //! after Transformation. (Z = 0.0 for Transformation)
  Standard_EXPORT   gp_Pnt2d TransformedCenter()  const;




  DEFINE_STANDARD_RTTI(IGESDimen_DiameterDimension)

protected:




private: 


  Handle(IGESDimen_GeneralNote) theNote;
  Handle(IGESDimen_LeaderArrow) theFirstLeader;
  Handle(IGESDimen_LeaderArrow) theSecondLeader;
  gp_XY theCenter;


};







#endif // _IGESDimen_DiameterDimension_HeaderFile
