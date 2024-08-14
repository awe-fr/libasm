# libasm
### Introduction

This project involves writing a library in assembly language (asm) to re-implement some standard C functions. Assembly language is a low-level programming language that closely corresponds to a computer's machine code instructions. Unlike high-level programming languages, which are generally portable across multiple architectures, assembly language is specific to a particular computer architecture. In this project, I will use assembly to implement some classic C library functions using Intel syntax.

### Features

The library, named libasm.a, must include the following functions, rewritten in assembly:

	- ft_strlen : (man 3 strlen)
 	- ft_strcpy : (man 3 strcpy)
  	- ft_strcmp : (man 3 strcmp)
   	- ft_write : (man 2 write)
	- ft_read : (man 2 read)
 	- ft_strdup : (man 3 strdup)

### Prototypes

	size_t	ft_strlen(const char *s);
 	char	*ft_strcpy(char *dest, const char *src);
	int		ft_strcmp(const char *s1, const char *s2);
	ssize_t	ft_write(int fd, const void *buf, size_t count);
	ssize_t	ft_read(int fd, void *buf, size_t count);
	char    *ft_strdup(const char *s);

### Technical Specifications

   - Code writted in ```64-bit``` assembly.
   - ```nasm``` is used as compiler.
   - Writted with ```Intel syntax```.
   - Functions are implemented in ```.s``` files.
   - ```errno``` is set proprely with ```__errno_location```.

### Compilation Instructions

   - ```make``` compile the lib.
   - ```make clean``` delete ```.o``` files.
   - ```make fclean``` delete ```.o``` files and the ```libasm.a```.
   - ```make re``` use ```fclean``` and recompile the lib.

After compiled the lib, include ```./libasm/header/libasm.h``` in your project and compile your code with ```libasm.a```.
   
