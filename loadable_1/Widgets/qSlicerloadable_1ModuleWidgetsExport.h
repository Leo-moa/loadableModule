/*=auto=========================================================================

 Portions (c) Copyright 2005 Brigham and Women's Hospital (BWH)
 All Rights Reserved.

 See COPYRIGHT.txt
 or http://www.slicer.org/copyright/copyright.txt for details.

 Program:   3D Slicer

=========================================================================auto=*/


// .NAME __qSlicerloadable_1ModuleWidgetsExport - manage Windows system differences
// .SECTION Description
// The __qSlicerloadable_1ModuleWidgetsExport captures some system differences between Unix
// and Windows operating systems.

#ifndef __qSlicerloadable_1ModuleWidgetsExport_h
#define __qSlicerloadable_1ModuleWidgetsExport_h

#if defined(WIN32) && !defined(qSlicerloadable_1ModuleWidgets_STATIC)
 #if defined(qSlicerloadable_1ModuleWidgets_EXPORTS)
  #define Q_SLICER_MODULE_LOADABLE_1_WIDGETS_EXPORT __declspec( dllexport )
 #else
  #define Q_SLICER_MODULE_LOADABLE_1_WIDGETS_EXPORT __declspec( dllimport )
 #endif
#else
 #define Q_SLICER_MODULE_LOADABLE_1_WIDGETS_EXPORT
#endif

#endif
