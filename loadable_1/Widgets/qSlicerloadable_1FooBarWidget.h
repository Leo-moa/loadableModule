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

#ifndef __qSlicerloadable_1FooBarWidget_h
#define __qSlicerloadable_1FooBarWidget_h

// Qt includes
#include <QWidget>

// FooBar Widgets includes
#include "qSlicerloadable_1ModuleWidgetsExport.h"

class qSlicerloadable_1FooBarWidgetPrivate;

/// \ingroup Slicer_QtModules_loadable_1
class Q_SLICER_MODULE_LOADABLE_1_WIDGETS_EXPORT qSlicerloadable_1FooBarWidget
  : public QWidget
{
  Q_OBJECT
public:
  typedef QWidget Superclass;
  qSlicerloadable_1FooBarWidget(QWidget *parent=0);
  ~qSlicerloadable_1FooBarWidget() override;

protected slots:
	void voxel_tracking();
protected:
  QScopedPointer<qSlicerloadable_1FooBarWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerloadable_1FooBarWidget);
  Q_DISABLE_COPY(qSlicerloadable_1FooBarWidget);
};

#endif
