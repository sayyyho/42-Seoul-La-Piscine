CC = gcc
INCS = includes 
CFLAGS = -Wall -Wextra -Werror -c
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
NAME = libft.a
RM = rm -f

all : ${NAME}
%.o : %.c
	${CC} ${CFLAGS} -o $@ $< -I ${INCS}
${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}
clean :
	${RM} ${OBJS}
fclean : clean
	${RM} ${NAME}
re : fclean all
