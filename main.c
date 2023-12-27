#include "lib/show_bytes.h"
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 0x12345678;
    byte_pointer ap = (byte_pointer)&a;
    show_bytes(ap, 1);
    show_bytes(ap, 2);
    show_bytes(ap, 3);

    const char *m = "mnopqr";
    show_bytes((byte_pointer)m, strlen(m));
}
