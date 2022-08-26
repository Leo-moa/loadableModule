/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __vtkSlicerloadable_1ModuleLogicExport - manage Windows system differences
// .SECTION Description
// The __vtkSlicerloadable_1ModuleLogicExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __vtkSlicerloadable_1ModuleLogicExport_h
#define __vtkSlicerloadable_1ModuleLogicExport_h

#if defined(WIN32) && !defined(vtkSlicerloadable_1ModuleLogic_STATIC)
 #if defined(vtkSlicerloadable_1ModuleLogic_EXPORTS)
  #define VTK_SLICER_LOADABLE_1_MODULE_LOGIC_EXPORT __declspec( dllexport )
 #else
  #define VTK_SLICER_LOADABLE_1_MODULE_LOGIC_EXPORT __declspec( dllimport )
 #endif
#else
 #define VTK_SLICER_LOADABLE_1_MODULE_LOGIC_EXPORT
#endif

#endif
