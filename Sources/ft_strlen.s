bits 64

section .text
	global ft_strlen
	ft_strlen:
		mov rax, 0			;init rax
		
		loop:
			mov dl, [rdi]	;get the first charactere
			test dl, dl		;compare if null
			jz result 		;return if true
			inc rax			;add one to the loop
			inc rdi			;get the next charactere
			jmp loop		;continue the loop

		result:
			ret				;return rax