#include <Eo.h>
#include <Efl.h>
#include <Eina.h>

#include "myobj.eo.h"

int main() {
    eina_init();
    efl_object_init();

    Eo *obj = efl_add(MYOBJ_CLASS, NULL);

    printf("%d\n", myobj_adder(obj, 3, 4));

    efl_del(obj);

    efl_object_shutdown();
    eina_shutdown();
    return 0;
}
