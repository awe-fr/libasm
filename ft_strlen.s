bits 64

section .text
    global ft_strlen
    ft_strlen:
        mov rax, 0      ;init rax
        mov rcx, rdi    ;get first arg
        
        loop:
            mov dl, [rcx]   ;get the first charactere
            test dl, dl     ;compare if null
            jz result       ;return if true
            inc rax         ;add one to the loop
            inc rcx         ;get the next charactere
            jmp loop        ;continue the loop

        result:
            ret