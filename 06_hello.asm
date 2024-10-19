global _start

section .text

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 12
    syscall

    mov  rax, 60
    mov rdi, 0
    syscall

msg:	db "Hello world!"