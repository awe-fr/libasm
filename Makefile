NAME = libasm.a

SRCS = Sources/ft_strlen.s\
		Sources/ft_strcpy.s\
		Sources/ft_strcmp.s

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
