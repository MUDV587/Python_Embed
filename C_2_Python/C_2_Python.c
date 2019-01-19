# include <Python.h>

int add_from_python(int a, int b);

int main(int argc, char *argv[])
{
    Py_SetProgramName(argv[0]);
    Py_Initialize();
    PySys_SetArgv(argc, argv);
    PyRun_SimpleString("print ('Hello Python!')\n");
    printf("%d", add_from_python(2, 3));
    Py_Finalize();

    return 0;
}

int add_from_python(int a, int b)
{
    int result;

    PyObject *pSys;
    PyObject *pPath;
    PyObject *pModule;
    PyObject *pFunc;
    PyObject *pArgs;
    PyObject *pValue;

    // import
    pSys = PyImport_Import(PyUnicode_FromString("sys"));

    pPath = PyObject_GetAttrString(pSys, "path");

    PyList_Append(pPath, PyUnicode_FromString("."));

    pModule = PyImport_Import(PyUnicode_FromString("algorithm"));

    // algorithm.add
    pFunc = PyObject_GetAttrString(pModule, "add");

    // build args
    pArgs = PyTuple_New(2);
    PyTuple_SetItem(pArgs, 0, PyLong_FromLong(a));
    PyTuple_SetItem(pArgs, 1, PyLong_FromLong(b));

    // call
    pValue = PyObject_CallObject(pFunc, pArgs);

    result = PyLong_AsLong(pValue);

    return result;
}
