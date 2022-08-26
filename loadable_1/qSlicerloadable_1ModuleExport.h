/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerloadable_1ModuleExport - manage Windows system differences
// .SECTION Description
// The __qSlicerloadable_1ModuleExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerloadable_1ModuleExport_h
#define __qSlicerloadable_1ModuleExport_h

#if defined(WIN32) && !defined(qSlicerloadable_1Module_STATIC)
 #if defined(qSlicerloadable_1Module_EXPORTS)
  #define Q_SLICER_QTMODULES_LOADABLE_1_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_QTMODULES_LOADABLE_1_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_QTMODULES_LOADABLE_1_EXPORT
#endif

#endif
