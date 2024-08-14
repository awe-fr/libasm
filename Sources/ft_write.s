bits 64

extern __errno_location

section .text
	global ft_write
	ft_write:
		mov rax, 1							;init rax to call write
		syscall								;call write
		cmp rax, 0							;check if write failed
		js error_manager					;if failed go to error func
		ret									;return result of write

		error_manager:
			neg rax							;invert rax and get error code
			mov r10, rax					;save rax into r10
			call __errno_location WRT ..plt	;get errno into rax
			mov [rax], r10					;push r10 into errno
			mov rax, -1						;set rax to -1 because write failed
			ret								;return rax