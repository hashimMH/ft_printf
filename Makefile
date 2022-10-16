

NAME = ft_printf.a

SRCS = 	ft_strlen.c \
			  ft_strchr.c \
			  ft_atoi.c \
			  ft_putchar_fd.c \
			  ft_putstr_fd.c \
			  ft_putendl_fd.c \
			  ft_putnbr_fd.c \

OBJS = ft_strlen.o \
			  ft_strchr.o \
			  ft_atoi.o \
			  ft_putchar_fd.o \
			  ft_putstr_fd.o \
			  ft_putendl_fd.o \
			  ft_putnbr_fd.o \

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) 
	
clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME) 

re: fclean all