// Created on: 2011-06-01
// Created by: Oleg AGASHIN
// Copyright (c) 2011-2014 OPEN CASCADE SAS
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

#ifndef _BRepMesh_VectorOfVertex_HeaderFile
#define _BRepMesh_VectorOfVertex_HeaderFile

#ifndef _BRepMesh_Vertex_HeaderFile
#include <BRepMesh_Vertex.hxx>
#endif
#ifndef NCollection_Vector_HeaderFile
#include <NCollection_Vector.hxx>
#endif

typedef NCollection_Vector<BRepMesh_Vertex> BRepMesh_VectorOfVertex;

#endif
