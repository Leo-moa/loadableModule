/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// loadable_1 Logic includes
#include <vtkSlicerloadable_1Logic.h>

// loadable_1 includes
#include "qSlicerloadable_1Module.h"
#include "qSlicerloadable_1ModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerloadable_1ModulePrivate
{
public:
  qSlicerloadable_1ModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerloadable_1ModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerloadable_1ModulePrivate::qSlicerloadable_1ModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerloadable_1Module methods

//-----------------------------------------------------------------------------
qSlicerloadable_1Module::qSlicerloadable_1Module(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerloadable_1ModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerloadable_1Module::~qSlicerloadable_1Module()
{
}

//-----------------------------------------------------------------------------
QString qSlicerloadable_1Module::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerloadable_1Module::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerloadable_1Module::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerloadable_1Module::icon() const
{
  return QIcon(":/Icons/loadable_1.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerloadable_1Module::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerloadable_1Module::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerloadable_1Module::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerloadable_1Module
::createWidgetRepresentation()
{
  return new qSlicerloadable_1ModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerloadable_1Module::createLogic()
{
  return vtkSlicerloadable_1Logic::New();
}
