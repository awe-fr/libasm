bits 64

section .text
	global ft_strcpy
	ft_strcpy:
		mov rax, 0				;init rax to 0

		loop:
			mov r11b, [rsi]		;get first charactere
			mov rdi[rax], r11b	;copy the charactere into dest
			test r11b, r11b		;check '\0'
			jz result			;if null return result
			inc rsi				;go to next charactere
			inc rax				;increase counter by one
			jmp loop			;loop until string ended

		result:
			mov rax, rdi		;get pointer to dest start
			ret					;return
