bits 64

STDOUT : equ 1
SYS_WRITE : equ 1
SYS_EXIT : equ 60

section .data
    message db 'Hello World !', 10

section .text
    global _start
    _start:

        mov rbx, 5

        loop:
            mov rax, SYS_WRITE
            mov rdi, STDOUT
            mov rsi, message
            mov rdx, 13 + 1
            syscall

            dec rbx
            jnz loop

        mov rax, SYS_EXIT
        mov rdi, 0
        syscall