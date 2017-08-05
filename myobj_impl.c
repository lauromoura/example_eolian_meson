#include <Eo.h>
#include "myobj.eo.h"

typedef struct
{

} MyObj_Data;

EOLIAN static int
_myobj_adder(Eo *obj, MyObj_Data *pd, int a, int b)
{
    return a + b;
}

EOLIAN static void
_myobj_class_constructor(Efl_Class *klass)
{

}

EOLIAN static void
_myobj_class_destructor(Efl_Class *klass)
{

}

#include "myobj.eo.c"
