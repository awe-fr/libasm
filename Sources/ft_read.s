bits 64

extern __errno_location

section .text
	global ft_read
	ft_read:
		mov rax, 0							;set rax for read
		syscall								;exec read
		cmp rax, 0							;check if rax failed
		js error_manager					;if failed send to error manager
		ret									;return bytes readed

		error_manager:
			neg rax							;invert rax and get error code
			mov r10, rax					;save rax into r10
			call __errno_location WRT ..plt	;get errno into rax
			mov [rax], r10					;push r10 into errno
			mov rax, -1						;set rax to -1 because read failed
			ret								;return rax