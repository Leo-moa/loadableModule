/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#include "vtkSlicerConfigure.h" // For Slicer_USE_PYTHONQT

// Qt includes
#include <QDir>
#include <QTimer>
#ifdef Slicer_USE_PYTHONQT
# include <QVariant>
#endif
#include <QWidget>

// CTK includes
#include <ctkErrorLogModel.h>

// Slicer includes
#include <qSlicerAbstractModuleRepresentation.h>
#include <qSlicerApplication.h>
#ifndef GENERIC_CXX_MODULE_TEST_SKIP_DEPENDENCIES
# include <qSlicerApplicationHelper.h>
# include <qSlicerModuleFactoryManager.h>
# include <qSlicerModuleManager.h>
#endif
#ifdef Slicer_USE_PYTHONQT
# include <qSlicerLoadableModule.h>
# include <qSlicerPythonManager.h>
#endif
#include <vtkSlicerModuleLogic.h>

// loadable_1 includes
#include "qSlicerloadable_1Module.h"


// MRML includes
#include <vtkMRMLScene.h>

// VTK includes
#include <vtkNew.h>

//-----------------------------------------------------------------------------
int qSlicerloadable_1ModuleGenericTest( int argc, char * argv[] )
{
  qSlicerApplication app(argc, argv);
  app.errorLogModel()->setTerminalOutputs(ctkErrorLogTerminalOutput::All);

  qSlicerloadable_1Module * module = new qSlicerloadable_1Module;
  module->setName("loadable_1");
  module->setObjectName(QString("%1Module").arg("loadable_1"));

#ifndef GENERIC_CXX_MODULE_TEST_SKIP_DEPENDENCIES
  if (!module->dependencies().isEmpty())
    {
    qSlicerModuleFactoryManager * moduleFactoryManager = app.moduleManager()->factoryManager();
    qSlicerApplicationHelper::setupModuleFactoryManager(moduleFactoryManager);
    moduleFactoryManager->setExplicitModules(module->dependencies());

    moduleFactoryManager->registerModules();
    qDebug() << "Number of registered modules:"
             << moduleFactoryManager->registeredModuleNames().count();

    moduleFactoryManager->instantiateModules();
    qDebug() << "Number of instantiated modules:"
             << moduleFactoryManager->instantiatedModuleNames().count();

    // Load all available modules
    foreach(const QString& name, moduleFactoryManager->instantiatedModuleNames())
      {
      Q_ASSERT(!name.isNull());
      moduleFactoryManager->loadModule(name);
      }
    }
#endif

  QString modulePathWithoutIntDir = QLatin1String("C:/Users/Leonard/code/loadable_1/lib/Slicer-4.13/qt-loadable-modules");
  if (!QFile::exists(modulePathWithoutIntDir))
    {
    std::cerr << "Line " << __LINE__ << " Problem with @" << "MODULEPATH_WITHOUT_INTDIR@ - "
              << " File " << qPrintable(modulePathWithoutIntDir) << " doesn't exist " << std::endl;
    return EXIT_FAILURE;
    }

  QString moduleFileName = "qSlicerloadable_1Module.dll";

  QDir moduleDir(modulePathWithoutIntDir);
  if (!app.intDir().isEmpty())
    {
    moduleDir.cd(app.intDir());
    }
  QString modulePath = moduleDir.filePath(moduleFileName);

  // Path can be required for modules depending on locale resources.
  // This usually applies to widget representation implemented in python.
  module->setPath(modulePath);

#ifdef Slicer_USE_PYTHONQT
  qSlicerPythonManager * pythonManager = app.pythonManager();
  {
    bool current = qSlicerLoadableModule::importModulePythonExtensions(
          pythonManager, app.intDir(), module->path());
    bool expected = true;
    if (current != expected)
      {
      std::cerr << "Line " << __LINE__ << " Problem with importModulePythonExtensions\n"
                << "\tcurrent:" << current << "\n"
                << "\texpected:" << expected << std::endl;
      return EXIT_FAILURE;
      }
  }
  {
    bool current = qSlicerLoadableModule::addModuleToSlicerModules(
          pythonManager, module, "loadable_1");
    bool expected = true;
    if (current != expected)
      {
      std::cerr << "Line " << __LINE__ << " Problem with addModuleToSlicerModules\n"
                << "\tcurrent:" << current << "\n"
                << "\texpected:" << expected << std::endl;
      return EXIT_FAILURE;
      }
  }
  {
    bool current = qSlicerLoadableModule::addModuleNameToSlicerModuleNames(
          pythonManager, "loadable_1");
    bool expected = true;
    if (current != expected)
      {
      std::cerr << "Line " << __LINE__ << " Problem with addModuleNameToSlicerModuleNames\n"
                << "\tcurrent:" << current << "\n"
                << "\texpected:" << expected << std::endl;
      return EXIT_FAILURE;
      }
  }
#endif

  if (module->title().isEmpty())
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::title() is empty." << std::endl;
    return EXIT_FAILURE;
    }

  if (module->categories().isEmpty())
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::categories() is empty." << std::endl;
    return EXIT_FAILURE;
    }

  if (module->index() < -1 || module->index() > 1000)
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::index() seems invalid." << std::endl;
    return EXIT_FAILURE;
    }

  //if (module->helpText().isEmpty())
  //  {
  //  std::cerr << "Line " << __LINE__
  //            << " - qSlicerloadable_1Module::helpText() is empty." << std::endl;
  //  return EXIT_FAILURE;
  //  }

  if (module->acknowledgementText().isEmpty())
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::acknowledgementText() is empty." << std::endl;
    return EXIT_FAILURE;
    }

  if (module->contributors().isEmpty())
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::contributors() is empty." << std::endl;
    return EXIT_FAILURE;
    }

  // Initialize with no application logic. Shouldn't crash
  module->initialize(0);

  if (module->appLogic() != 0)
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::initialize() failed." << std::endl;
    return EXIT_FAILURE;
    }

  // Instantiate the logic if any
  vtkMRMLAbstractLogic* logic = module->logic();

  if (logic != module->logic())
    {
    std::cerr << "Line " << __LINE__ << " - The logic must remain the same." << std::endl;
    return EXIT_FAILURE;
    }

  // Instantiate the representation if any
  qSlicerAbstractModuleRepresentation* moduleRepresentation =
    module->widgetRepresentation();

  if (moduleRepresentation != module->widgetRepresentation())
    {
    std::cerr << "Line " << __LINE__ << " - The widget must remain the same." << std::endl;
    return EXIT_FAILURE;
    }

  if (!moduleRepresentation && !module->isHidden())
    {
    // A module with no widget should be hidden
    std::cerr << "Line " << __LINE__
              << " qSlicerloadable_1Module has no widget representation."
              << " however it is not hidden. " << std::endl;
    return EXIT_FAILURE;
    }

  // Set a scene to the module,
  vtkNew<vtkMRMLScene> scene;
  module->setMRMLScene(scene.GetPointer());
  if (module->mrmlScene() != scene.GetPointer())
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::setMRMLScene() failed." << std::endl;
    return EXIT_FAILURE;
    }

  if (logic && logic->GetMRMLScene() != scene.GetPointer())
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::setMRMLScene() failed to pass"
              << "the mrml scene to the logic" << std::endl;
    return EXIT_FAILURE;
    }

  if (moduleRepresentation && moduleRepresentation->mrmlScene() != scene.GetPointer())
    {
    std::cerr << "Line " << __LINE__
              << " - qSlicerloadable_1Module::setMRMLScene() failed to pass"
              << "the mrml scene to the widget" << std::endl;
    return EXIT_FAILURE;
    }

#ifdef Slicer_USE_PYTHONQT
  if (pythonManager->pythonErrorOccured())
    {
    return EXIT_FAILURE;
    }
#endif

  delete module;

  return EXIT_SUCCESS;
}
