// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_PipeShell_HeaderFile
#define _BRepFill_PipeShell_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepFill_PipeShell_HeaderFile
#include <Handle_BRepFill_PipeShell.hxx>
#endif

#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BRepFill_SequenceOfSection_HeaderFile
#include <BRepFill_SequenceOfSection.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Law_Function_HeaderFile
#include <Handle_Law_Function.hxx>
#endif
#ifndef _Handle_BRepFill_LocationLaw_HeaderFile
#include <Handle_BRepFill_LocationLaw.hxx>
#endif
#ifndef _Handle_BRepFill_SectionLaw_HeaderFile
#include <Handle_BRepFill_SectionLaw.hxx>
#endif
#ifndef _Handle_TopTools_HArray2OfShape_HeaderFile
#include <Handle_TopTools_HArray2OfShape.hxx>
#endif
#ifndef _GeomFill_Trihedron_HeaderFile
#include <GeomFill_Trihedron.hxx>
#endif
#ifndef _BRepFill_TransitionStyle_HeaderFile
#include <BRepFill_TransitionStyle.hxx>
#endif
#ifndef _GeomFill_PipeError_HeaderFile
#include <GeomFill_PipeError.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _BRepFill_TypeOfContact_HeaderFile
#include <BRepFill_TypeOfContact.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Law_Function;
class BRepFill_LocationLaw;
class BRepFill_SectionLaw;
class TopTools_HArray2OfShape;
class Standard_DomainError;
class StdFail_NotDone;
class TopoDS_Wire;
class gp_Ax2;
class gp_Dir;
class TopoDS_Shape;
class TopoDS_Vertex;
class TopTools_ListOfShape;
class BRepFill_Section;
class gp_Trsf;
class BRepFill_Sweep;


//! Perform general sweeping construction <br>
class BRepFill_PipeShell : public MMgt_TShared {

public:

  //! Set an sweep's mode <br>
//!         If no mode are setted, the mode use in MakePipe is used <br>
  Standard_EXPORT   BRepFill_PipeShell(const TopoDS_Wire& Spine);
  //! Set an Frenet or an CorrectedFrenet trihedron <br>
//!          to  perform  the  sweeping <br>
  Standard_EXPORT     void Set(const Standard_Boolean Frenet = Standard_False) ;
  //! Set a Discrete trihedron <br>
//!          to  perform  the  sweeping <br>
  Standard_EXPORT     void SetDiscrete() ;
  //! Set  an  fixed  trihedron  to  perform  the  sweeping <br>
//!         all sections will be parallel. <br>
  Standard_EXPORT     void Set(const gp_Ax2& Axe) ;
  //! Set an fixed  BiNormal  direction to  perform <br>
//!  the sweeping <br>
  Standard_EXPORT     void Set(const gp_Dir& BiNormal) ;
  //! Set support to the spine to define the BiNormal <br>
//!           at   the spine, like    the  normal the surfaces. <br>
//!  Warning: To  be  effective,  Each  edge  of  the  <spine>  must <br>
//!  have an  representaion  on   one   face  of<SpineSupport> <br>
  Standard_EXPORT     Standard_Boolean Set(const TopoDS_Shape& SpineSupport) ;
  //! Set  an  auxiliary  spine  to  define  the Normal <br>
//!  For  each  Point  of  the  Spine  P,  an  Point  Q  is  evalued <br>
//!    on  <AuxiliarySpine> <br>
//! If <CurvilinearEquivalence> <br>
//!   Q split <AuxiliarySpine> with  the  same  length ratio <br>
//!   than P split  <Spline>. <br>
//! Else  the  plan  define  by  P  and  the  tangent  to  the  <Spine> <br>
//!       intersect <AuxiliarySpine> in Q. <br>
//! If <KeepContact> the  Normal  is  defined to  assume like  the  sweeped <br>
//!                  section is  in  contact to  the  <AuxiliarySpine> <br>
//! Else  the  Normal  is  defined  by the vector  PQ. <br>
  Standard_EXPORT     void Set(const TopoDS_Wire& AuxiliarySpine,const Standard_Boolean CurvilinearEquivalence = Standard_True,const BRepFill_TypeOfContact KeepContact = BRepFill_NoContact) ;
  //! Set the flag that indicates attempt to approximate <br>
//!          a C1-continuous surface if a swept surface proved <br>
//!          to be C0. <br>//! Give section to sweep. <br>
//! Possibilities are : <br>
//!	- Give one or sevral profile <br>
//!     - Give one profile and an homotetic law. <br>
//!     - Automatic compute of correspondance beetween profile, and section <br>
//!                 on the sweeped shape <br>
//!     - correspondance beetween profile, and section on the sweeped shape <br>
//!       defined by a vertex of the spine <br>
  Standard_EXPORT     void SetForceApproxC1(const Standard_Boolean ForceApproxC1) ;
  //! Set an section. The corespondance with the spine, will <br>
//!          be automaticaly performed. <br>
  Standard_EXPORT     void Add(const TopoDS_Shape& Profile,const Standard_Boolean WithContact = Standard_False,const Standard_Boolean WithCorrection = Standard_False) ;
  //! Set an section.   The corespondance with the spine, is <br>
//!          given by  <Location> <br>
  Standard_EXPORT     void Add(const TopoDS_Shape& Profile,const TopoDS_Vertex& Location,const Standard_Boolean WithContact = Standard_False,const Standard_Boolean WithCorrection = Standard_False) ;
  //! Set  an    section  and  an   homotetic    law. <br>
//! The  homotetie's  centers  is  given  by  point  on  the  <Spine>. <br>
  Standard_EXPORT     void SetLaw(const TopoDS_Shape& Profile,const Handle(Law_Function)& L,const Standard_Boolean WithContact = Standard_False,const Standard_Boolean WithCorrection = Standard_False) ;
  //! Set  an    section  and  an   homotetic    law. <br>
//!   The  homotetie  center  is  given  by  point  on  the  <Spine> <br>
  Standard_EXPORT     void SetLaw(const TopoDS_Shape& Profile,const Handle(Law_Function)& L,const TopoDS_Vertex& Location,const Standard_Boolean WithContact = Standard_False,const Standard_Boolean WithCorrection = Standard_False) ;
  //! Delete an section. <br>
  Standard_EXPORT     void Delete(const TopoDS_Shape& Profile) ;
  //! Say if <me> is ready to build the shape <br>
//!          return False if <me> do not have section definition <br>
  Standard_EXPORT     Standard_Boolean IsReady() const;
  //! Get a status, when Simulate or Build failed. <br>
  Standard_EXPORT     GeomFill_PipeError GetStatus() const;
  
  Standard_EXPORT     void SetTolerance(const Standard_Real Tol3d = 1.0e-4,const Standard_Real BoundTol = 1.0e-4,const Standard_Real TolAngular = 1.0e-2) ;
  //! Set the  Transition Mode to manage discontinuities <br>
//!          on the sweep. <br>
  Standard_EXPORT     void SetTransition(const BRepFill_TransitionStyle Mode = BRepFill_Modified,const Standard_Real Angmin = 1.0e-2,const Standard_Real Angmax = 6.0) ;
  //! Perform simulation of the sweep : <br>
//!         Somes Section are returned. <br>
  Standard_EXPORT     void Simulate(const Standard_Integer NumberOfSection,TopTools_ListOfShape& Sections) ;
  //! Builds the resulting shape (redefined from MakeShape). <br>
  Standard_EXPORT     Standard_Boolean Build() ;
  //! Transform the sweeping Shell in Solid. <br>
//!          If the section are not closed returns False <br>
  Standard_EXPORT     Standard_Boolean MakeSolid() ;
  //! Returns the result Shape. <br>
  Standard_EXPORT    const TopoDS_Shape& Shape() const;
  //! Returns the  TopoDS  Shape of the bottom of the sweep. <br>
  Standard_EXPORT    const TopoDS_Shape& FirstShape() const;
  //! Returns the TopoDS Shape of the top of the sweep. <br>
  Standard_EXPORT    const TopoDS_Shape& LastShape() const;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <S>. <br>
  Standard_EXPORT     void Generated(const TopoDS_Shape& S,TopTools_ListOfShape& L) ;




  DEFINE_STANDARD_RTTI(BRepFill_PipeShell)

protected:




private: 

  
  Standard_EXPORT     void Prepare() ;
  
  Standard_EXPORT     void Place(const BRepFill_Section& Sec,TopoDS_Wire& W,gp_Trsf& Trsf,Standard_Real& param) ;
  
  Standard_EXPORT     void ResetLoc() ;
  
  Standard_EXPORT     void BuildHistory(const BRepFill_Sweep& theSweep) ;

TopoDS_Wire mySpine;
TopoDS_Shape myFirst;
TopoDS_Shape myLast;
TopoDS_Shape myShape;
BRepFill_SequenceOfSection mySeq;
TopTools_DataMapOfShapeListOfShape myGenMap;
Standard_Real myTol3d;
Standard_Real myBoundTol;
Standard_Real myTolAngular;
Standard_Real angmin;
Standard_Real angmax;
Standard_Boolean myForceApproxC1;
Handle_Law_Function myLaw;
Standard_Boolean myIsAutomaticLaw;
Handle_BRepFill_LocationLaw myLocation;
Handle_BRepFill_SectionLaw mySection;
Handle_TopTools_HArray2OfShape myFaces;
GeomFill_Trihedron myTrihedron;
BRepFill_TransitionStyle myTransition;
GeomFill_PipeError myStatus;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
