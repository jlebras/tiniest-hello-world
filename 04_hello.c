#include <unistd.h>
#include <stdint.h>

void _start () {
    asm volatile (
        "movq $1, %%rax;"
        "movq %0, %%rdi;"
        "movq %1, %%rsi;"
        "movq %2, %%rdx;"
        "syscall;"
        :
        : "r"((uint64_t)1), "r"((const char*)"Hello World!"), "r"((size_t)12)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );

    asm volatile (
        "movq  $60, %%rax;"
        "movq $0, %%rdi;"
        "syscall;"
        :
        :
        : "%rax", "%rdi"

    );
}