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

#ifndef __qSlicerloadable_1ModuleWidget_h
#define __qSlicerloadable_1ModuleWidget_h

// Slicer includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerloadable_1ModuleExport.h"

class qSlicerloadable_1ModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_LOADABLE_1_EXPORT qSlicerloadable_1ModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerloadable_1ModuleWidget(QWidget *parent=0);
  virtual ~qSlicerloadable_1ModuleWidget();

public slots:
	
protected:
  QScopedPointer<qSlicerloadable_1ModuleWidgetPrivate> d_ptr;

  void setup() override;

private:
  Q_DECLARE_PRIVATE(qSlicerloadable_1ModuleWidget);
  Q_DISABLE_COPY(qSlicerloadable_1ModuleWidget);
};

#endif
