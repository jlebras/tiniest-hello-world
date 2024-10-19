#include <unistd.h>

void _start () {
    write(1, "Hello World!", 12);
    _exit(0);
}