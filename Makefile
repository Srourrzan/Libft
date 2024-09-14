SRC			= ft_bzero ft_memcpy ft_memchr ft_memcmp ft_strlen ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strlcpy ft_strlcat ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strtrim ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_striteri ft_strjoin ft_strmapi ft_itoa ft_split
B_SRC		= ft_lstnew ft_lstadd_back ft_lstadd_front
SRCS		= $(addsuffix .c, ${SRC})
B_SRCS		= ${addsuffix _bonus.c, ${B_SRC}}
OBJS		= ${SRCS:.c=.o}
B_OBJS		= ${B_OBJS:.c=.o}
NAME		= libft.a
CC			= cc
RM			= rm -f
AR			= ar rcs
CFLAGS		= -Wall -Wextra -Werror
all: $(NAME)
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@
$(NAME): ${OBJS}
	${AR} ${NAME} ${OBJS}
bonus: $(B_OBJS) $(NAME)
	${AR} ${NAME} ${B_OBJS}
clean:
	${RM} ${OBJS} ${B_OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all
.PHONY:	all bonus clean fclean re
