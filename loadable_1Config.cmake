#
# This file makes available modules implemented in this extension to other extensions.
#

set(loadable_1_SOURCE_DIR "C:/Users/Leonard/code/loadable_1")

set(loadable_1_LIBRARY_PATHS_LAUNCHER_BUILD "C:/Users/Leonard/code/loadable_1/lib/Slicer-4.13/cli-modules/${CMAKE_CFG_INTDIR};C:/Users/Leonard/code/loadable_1/lib/Slicer-4.13/qt-loadable-modules/${CMAKE_CFG_INTDIR}")
set(loadable_1_PATHS_LAUNCHER_BUILD "C:/Users/Leonard/code/loadable_1/lib/Slicer-4.13/cli-modules/${CMAKE_CFG_INTDIR};C:/Users/Leonard/code/loadable_1/bin/${CMAKE_CFG_INTDIR}")
set(loadable_1_ENVVARS_LAUNCHER_BUILD "")
set(loadable_1_PYTHONPATH_LAUNCHER_BUILD "C:/Users/Leonard/code/loadable_1/lib/Slicer-4.13/qt-scripted-modules;C:/Users/Leonard/code/loadable_1/lib/Slicer-4.13/qt-loadable-modules/${CMAKE_CFG_INTDIR};C:/Users/Leonard/code/loadable_1/lib/Slicer-4.13/qt-loadable-modules/Python")



# --------------------------------------------------------------------------
# Include directories

# Extension include directories for module

set(qSlicerloadable_1Module_INCLUDE_DIRS
  "C:/Users/Leonard/code/loadable_1/loadable_1;C:/Users/Leonard/code/loadable_1/loadable_1")

# Extension include directories for module logic

set(vtkSlicerloadable_1ModuleLogic_INCLUDE_DIRS
  "C:/Users/Leonard/code/loadable_1/loadable_1/Logic")

# Extension include directories for module mrml


# Extension include directories for module Widget

set(qSlicerloadable_1ModuleWidgets_INCLUDE_DIRS
  "C:/Users/Leonard/code/loadable_1/loadable_1/Widgets")

# Extension VTK wrap hierarchy files

set(vtkSlicerloadable_1ModuleLogic_WRAP_HIERARCHY_FILE
  "C:/D/S4R/Slicer-build/vtkSlicerloadable_1ModuleLogicHierarchy.txt")

# Extension Module logic include file directories.
set(loadable_1_ModuleLogic_INCLUDE_DIRS "${vtkSlicerloadable_1ModuleLogic_INCLUDE_DIRS}"
  CACHE INTERNAL "Extension Module logic includes" FORCE)

# Extension Module MRML include file directories.
set(loadable_1_ModuleMRML_INCLUDE_DIRS ""
  CACHE INTERNAL "Extension Module MRML includes" FORCE)

# Extension Module Widgets include file directories.
set(loadable_1_ModuleWidgets_INCLUDE_DIRS "${qSlicerloadable_1ModuleWidgets_INCLUDE_DIRS}"
  CACHE INTERNAL "Extension Module widgets includes" FORCE)

# --------------------------------------------------------------------------
# Target definitions

if(EXISTS "C:/Users/Leonard/code/loadable_1/./loadable_1Targets.cmake")
  include("C:/Users/Leonard/code/loadable_1/./loadable_1Targets.cmake")
endif()
