// Created on: 1993-03-03
// Created by: Philippe DAUTRY
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and / or modify it
// under the terms of the GNU Lesser General Public version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#include <PGeom2d_Direction.ixx>

//=======================================================================
//function : PGeom2d_Direction
//purpose  : 
//=======================================================================

PGeom2d_Direction::PGeom2d_Direction()
{}


//=======================================================================
//function : PGeom2d_Direction
//purpose  : 
//=======================================================================

PGeom2d_Direction::PGeom2d_Direction(const gp_Vec2d& aVec) :
       PGeom2d_Vector(aVec)
{}
