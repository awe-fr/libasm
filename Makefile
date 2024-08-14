NAME = libasm.a

SRCS = sources/ft_strlen.s\
		sources/ft_strcpy.s\
		sources/ft_strcmp.s\
		sources/ft_write.s\
		sources/ft_read.s\
		sources/ft_strdup.s\

OBJS = $(SRCS:.s=.o)

CC = nasm

FLAGS = -f elf64

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.s
	$(CC) $(FLAGS) -s $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
