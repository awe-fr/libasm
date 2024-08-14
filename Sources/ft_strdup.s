bits 64

extern malloc
extern ft_strlen
extern ft_strcpy
extern __errno_location

section .text
	global ft_strdup
	ft_strdup:
		mov r10, rdi						;save str into r10
		call ft_strlen						;get len of string
		mov rdi, rax						;put len to alloc in rdi
		inc rdi								;add one for the null byte
		call malloc							;alloc memory needed
		cmp rax, 0							;check if malloc failed
		jz error_manager					;if failed go to error manager
		mov rdi, rax						;put the new string in rdi
		mov rsi, r10						;put the string to copy in rsi
		call ft_strcpy						;copy the string
		ret									;return the string

		error_manager:
			neg rax							;invert rax and get error code
			mov r12, rax					;save rax into r12
			call __errno_location WRT ..plt	;get errno into rax
			mov [rax], r12					;push r12 into errno
			mov rax, 0						;set rax to 0 because strdup failed
			ret								;return rax