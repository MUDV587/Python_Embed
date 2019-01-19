
#include <Python.h>

#include "algorithm.h"

int main(int argc, char *argv[])
{
    PyObject *tuple;
    Py_Initialize();

    PyInit_algorithm();

    printf("%s\n",PyUnicode_AsUnicode(
                test(
                    PyUnicode_FromString("hello"),
                    PyLong_FromLong(1)
                )
            ));
    tuple = Py_BuildValue("(iis)", 1, 2, "three");
    printf("%d\n",PyLong_AsLong(
                test(
                    tuple,
                    PyLong_FromLong(1)
                )
            ));
    printf("%s\n",PyUnicode_AsUnicode(
                test(
                    tuple,
                    PyLong_FromLong(2)
                )
            ));

    printf("%d\n",PyLong_AsLong(
                add(
                    PyLong_FromLong(2),
                    PyLong_FromLong(3)
                )
            ));

    printf("%d",add_with_type(10,2));

    return 0;
}