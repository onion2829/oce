// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepData_EDescr_HeaderFile
#define _StepData_EDescr_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepData_EDescr.hxx>

#include <MMgt_TShared.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>
#include <Handle_StepData_Described.hxx>
class StepData_Described;


//! This class is intended to describe the authorized form for an
//! entity, either Simple or Plex
class StepData_EDescr : public MMgt_TShared
{

public:

  
  //! Tells if a ESDescr matches a step type : exact or super type
  Standard_EXPORT virtual   Standard_Boolean Matches (const Standard_CString steptype)  const = 0;
  
  //! Tells if a EDescr is complex (ECDescr) or simple (ESDescr)
  Standard_EXPORT virtual   Standard_Boolean IsComplex()  const = 0;
  
  //! Creates a described entity (i.e. a simple one)
  Standard_EXPORT virtual   Handle(StepData_Described) NewEntity()  const = 0;




  DEFINE_STANDARD_RTTI(StepData_EDescr)

protected:




private: 




};







#endif // _StepData_EDescr_HeaderFile
