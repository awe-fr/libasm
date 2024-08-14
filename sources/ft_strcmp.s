bits 64

section .text
	global ft_strcmp
	ft_strcmp:
		mov rax, 0			;init rax to 0

		loop:
			mov r10b, [rdi]	;get first charactere of s1
			mov r11b, [rsi]	;get first charactere of s2
			cmp r10b, r11b	;compare charactere of s1 and s2
			jnz result		;if not the same charactere return func
			test r10b, r10b	;check the null byte of s1
			jz presult		;if null return func
			test r11b, r11b	;check the null byte of s2
			jz presult		;if null return func
			inc rdi			;go forward in s1
			inc rsi			;go forward in s2
			jmp loop		;reset the loop

		result:
			movzx rax, r10b	;convert the charactere in a higher register
			movzx rcx, r11b	;convert the other charactere in a higher register
			sub rax, rcx	;get the size difference between characteres
			ret				;ret rax

		presult:
			ret				;return 0