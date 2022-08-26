// Configured by cmake macro C:/Users/Leonard/code/loadable_1/loadable_1/Widgets/CMakeLists.txt

#include <PythonQt.h>
#include <Python.h>

//-----------------------------------------------------------------------------
static PyMethodDef PyqSlicerloadable_1ModuleWidgetsPythonQt_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

//-----------------------------------------------------------------------------
#if PY_MAJOR_VERSION >= 3
extern "C" { Q_DECL_EXPORT PyObject* PyInit_qSlicerloadable_1ModuleWidgetsPythonQt(); }
#else
extern "C" { Q_DECL_EXPORT void initqSlicerloadable_1ModuleWidgetsPythonQt(); }
#endif

#ifdef __GNUC__
// Disable warnings related to Py_DECREF() macro
// See http://gcc.gnu.org/onlinedocs/gcc/Diagnostic-Pragmas.html
// Note: Ideally the incriminated functions and macros should be fixed upstream ...
#pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

/* #undef HAS_DECORATOR */

namespace {
//-----------------------------------------------------------------------------
void copyAttributes(PyObject* orig_module, PyObject* dest_module)
{
  PyObject* keys = PyObject_Dir(orig_module);
  if (keys)
    {
    PyObject* key;
    PyObject* value;
    int nKeys = PyList_Size(keys);
    for (int i = 0; i < nKeys; ++i)
      {
      key = PyList_GetItem(keys, i);
      value = PyObject_GetAttr(orig_module, key);
      if (!value)
        {
        continue;
        }
      //printf("%s\n", PyString_AsString(key));
      if (!PyObject_HasAttr(dest_module, key))
        {
        PyObject_SetAttr(dest_module, key, value);
        }
      Py_DECREF((void*)value);
      }
    Py_DECREF(keys);
    }
}
} // end of anonymous namespace
//-----------------------------------------------------------------------------
#if PY_MAJOR_VERSION >= 3

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "qSlicerloadable_1ModuleWidgetsPythonQt",                 /* m_name */
    "The qSlicerloadable_1ModuleWidgetsPythonQt module",      /* m_doc */
    -1,                                        /* m_size */
    PyqSlicerloadable_1ModuleWidgetsPythonQt_ClassMethods,    /* m_methods */
    NULL,                                      /* m_reload */
    NULL,                                      /* m_traverse */
    NULL,                                      /* m_clear */
    NULL,                                      /* m_free */
  };

#endif
//-----------------------------------------------------------------------------
#if PY_MAJOR_VERSION >= 3
PyObject* PyInit_qSlicerloadable_1ModuleWidgetsPythonQt()
#else
void initqSlicerloadable_1ModuleWidgetsPythonQt()
#endif
{
  #if PY_MAJOR_VERSION < 3
  static const char modulename[] = "qSlicerloadable_1ModuleWidgetsPythonQt";
  #endif

  PyObject *m;
  #if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
  #else
    m = Py_InitModule((char*)modulename, PyqSlicerloadable_1ModuleWidgetsPythonQt_ClassMethods);
  #endif
  extern void PythonQt_init_osm_qSlicerloadable_1ModuleWidgets(PyObject*);
  PythonQt_init_osm_qSlicerloadable_1ModuleWidgets(m);

#ifdef HAS_DECORATOR
  extern void initqSlicerloadable_1ModuleWidgetsPythonQtDecorators();
  initqSlicerloadable_1ModuleWidgetsPythonQtDecorators();
#endif

  // Since invoking 'PythonQt_init_osm_qSlicerloadable_1ModuleWidgets', will create
  // the module "PythonQt.qSlicerloadable_1ModuleWidgets". Let's copy its content into the current module.
  PythonQtObjectPtr currentModule = PyImport_ImportModule((char*)"PythonQt.qSlicerloadable_1ModuleWidgets");
  if(currentModule.isNull())
    {
    PyErr_SetString(PyExc_ImportError, (char*)"Failed to import PythonQt.qSlicerloadable_1ModuleWidgets");
#if PY_MAJOR_VERSION >= 3
    return NULL;
#else
    return;
#endif
    }
  copyAttributes(currentModule, m);
#if PY_MAJOR_VERSION >= 3
  return m;
#endif
}
