bits 64

section .text
    global ft_strlen
    ft_strlen:
        mov rax, 0      ;init rax
        mov rcx, rdi    ;get first arg
        
        loop:
            add rax, 1  ;add one to the loop

