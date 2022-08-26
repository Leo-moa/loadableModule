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

// Qt includes
#include <QDebug>

// Slicer includes
#include "qSlicerloadable_1ModuleWidget.h"
#include "ui_qSlicerloadable_1ModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerloadable_1ModuleWidgetPrivate: public Ui_qSlicerloadable_1ModuleWidget
{
public:
  qSlicerloadable_1ModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerloadable_1ModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerloadable_1ModuleWidgetPrivate::qSlicerloadable_1ModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerloadable_1ModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerloadable_1ModuleWidget::qSlicerloadable_1ModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerloadable_1ModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerloadable_1ModuleWidget::~qSlicerloadable_1ModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerloadable_1ModuleWidget::setup()
{
  Q_D(qSlicerloadable_1ModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}
