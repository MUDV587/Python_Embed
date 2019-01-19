
cdef public test(a, b):
    return a[b]

cdef public add(a, b):
    return a + b

cdef public char add_with_type(int a, int b):
    return a + b
