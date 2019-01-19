
// #include <stdio.h>
#include <Python.h>

int add(int a, int b)
{
    return a + b;
}

struct module_state {
    PyObject *error;
};

#define GETSTATE(m) ((struct module_state*)PyModule_GetState(m))

static PyObject *_add(PyObject *m, PyObject *args)
{
    int a;
    int b;
    int result;

    if (!PyArg_ParseTuple(args, "ii", &a, &b))
    {
        return NULL;
    }

    result = add(a, b);

    return PyLong_FromLong(result);
}

static PyMethodDef algorithm_methods[] = 
{
    {
        "add", 
        (PyCFunction)_add, 
        METH_VARARGS, 
        "描述"
    },
    {
        NULL, 
        NULL,
        0,
        NULL
    }
};

static int algorithm_traverse(PyObject *m, visitproc visit, void *arg)
{
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int algorithm_clear(PyObject *m)
{
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}

static struct PyModuleDef algorithm_module_define =
{
    PyModuleDef_HEAD_INIT,
    "algorithm",
    NULL,
    sizeof(struct module_state),
    algorithm_methods,
    NULL,
    algorithm_traverse,
    algorithm_clear,
    NULL
};

PyMODINIT_FUNC PyInit_algorithm(void)
{
    PyObject *module = PyModule_Create(&algorithm_module_define);

    if (module == NULL)
    {
        return NULL;
    }

    struct module_state *st = GETSTATE(module);

    st->error = PyErr_NewException("algorithm.Error", NULL, NULL);
    if (st->error == NULL)
    {
        Py_DECREF(module);
        return NULL;
    }

    return module;
}


// 后续为了方便导出函数到python 可以考虑使用宏 做简单封装

// #if PY_MAJOR_VERSION >= 3
//     struct module_state {
//         PyObject *error;
//     };

//     #define GETSTATE(m) ((struct module_state*)PyModule_GetState(m))

//     static PyObject *error_out(PyObject *m)
//     {
//         struct module_state *st = GETSTATE(m);
//         PyErr_SetString(st->error, "something bad happened");
//         return NULL;
//     }

//     static PyMethodDef myextension_methods[] = 
//     {
//         {
//             "error_out", 
//             (PyCFunction)error_out, 
//             METH_NOARGS, 
//             NULL
//         },
//         {
//             NULL, 
//             NULL,
//             0,
//             NULL
//         }
//     };

//     static int myextension_traverse(PyObject *m, visitproc visit, void *arg)
//     {
//         Py_VISIT(GETSTATE(m)->error);
//         return 0;
//     }

//     static int myextension_clear(PyObject *m)
//     {
//         Py_CLEAR(GETSTATE(m)->error);
//         return 0;
//     }

//     static struct PyModuleDef moduledef =
//     {
//         PyModuleDef_HEAD_INIT,
//         "myextension",
//         NULL,
//         sizeof(struct module_state),
//         myextension_methods,
//         NULL,
//         myextension_traverse,
//         myextension_clear,
//         NULL
//     };

//     #define INITERROR return NULL

//     PyMODINIT_FUNC PyInit_myextension(void)
//     {
//         PyObject *module = PyModule_Create(&moduledef);

//         if (module == NULL)
//         {
//             INITERROR;
//         }

//         struct module_state *st = GETSTATE(module);

//         st->error = PyErr_NewException("myextension.Error", NULL, NULL);
//         if (st->error == NULL)
//         {
//             Py_DECREF(module);
//             INITERROR;
//         }

//         return module;
//     }

// #else
//     struct module_state {
//         PyObject *error;
//     };

//     static struct module_state _state;
//     #define GETSTATE(m) (&_state)

//     static PyObject *error_out(PyObject *m)
//     {
//         struct module_state *st = GETSTATE(m);
//         PyErr_SetString(st->error, "something bad happened");
//         return NULL;
//     }

//     static PyMethodDef myextension_methods[] = 
//     {
//         {
//             "error_out", 
//             (PyCFunction)error_out, 
//             METH_NOARGS, 
//             NULL
//         },
//         {
//             NULL, 
//             NULL,
//             0,
//             NULL
//         }
//     };

//     #define INITERROR return

//     PyMODINIT_FUNC initmyextension(void)
//     {
//         PyObject *module = Py_InitModule("myextension", myextension_methods);

//         if (module == NULL)
//         {
//             INITERROR;
//         }
//         struct module_state *st = GETSTATE(module);

//         st->error = PyErr_NewException("myextension.Error", NULL, NULL);
//         if (st->error == NULL)
//         {
//             Py_DECREF(module);
//             INITERROR;
//         }
//     }
// #endif

