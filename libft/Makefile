NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.
AR = ar rcs
RM = rm -f
HEADER = libft.h

SRC_CHAR = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c

SRC_STR =  ft_strlen.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c

SRC_MEM =  	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_calloc.c

SRC_CONV = 	ft_atoi.c \
			ft_itoa.c

SRC_FD =   	ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

SRC_LIST = 	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

SRCS = $(SRC_CHAR) $(SRC_STR) $(SRC_MEM) $(SRC_CONV) $(SRC_FD)
SRCS_BONUS = $(SRC_LIST)

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

BONUS_FLAG = .bonus_flag

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME) $(BONUS_FLAG)

re: fclean all

bonus: $(BONUS_FLAG)

$(BONUS_FLAG): $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)
	@touch $(BONUS_FLAG)

.PHONY: all clean fclean re bonus
