bits 64

extern __errno_location

section .text
	global ft_write
	ft_write:
		mov rax, 1						;init rax to call write
		syscall							;call write
		cmp rax, 0						;check if write fail
		js error_manager				;if failed go to error func
		ret								;return result of write

	error_manager:
		neg		rax						;invert rax and get error code
		push	rax						;save rax into the stack
		call __errno_location WRT ..plt	;get errno into rax
		pop		qword[rax]				;get stack value (and cast) into errno
		mov		rax, -1					;set rax to -1 because write failed
		ret								;return rax