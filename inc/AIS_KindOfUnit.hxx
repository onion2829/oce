// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_KindOfUnit_HeaderFile
#define _AIS_KindOfUnit_HeaderFile

//! Declares which entities in an opened local context <br>
//! are to be cleared of mode settings. Temporary <br>
//! graphic presentations such as those for sub-shapes, <br>
//! for example, are only created for the selection <br>
//! process. By means of these enumerations, they can <br>
//! be cleared from local context. <br>
enum AIS_KindOfUnit {
AIS_TOU_LENGTH,
AIS_TOU_SURFACE,
AIS_TOU_VOLUME,
AIS_TOU_PLANE_ANGLE,
AIS_TOU_SOLID_ANGLE,
AIS_TOU_MASS,
AIS_TOU_FORCE,
AIS_TOU_TIME
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif