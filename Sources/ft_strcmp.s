bits 64

section .text
	global ft_strcmp
	ft_strcmp:
		mov rax, 0		;init rax to 0

		loop:
			mov r10b, [rdi]
			mov r11b, [rsi]
			mov rax, r10b
			sub rax, r11b
			cmp r10b, r11b
			jnz result
			inc rdi
			inc rsi
			jmp loop

		result:
			ret