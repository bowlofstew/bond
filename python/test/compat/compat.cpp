#include "compat_reflection.h"
#include <bond/python/struct.h>

BOOST_PYTHON_MODULE(bond_python_compatibility_test)
{
    using namespace unittest::compat;

    bond::python::struct_<Compat>()
        .def();
}

