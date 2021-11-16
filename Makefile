TARGET = libft.a

CC = gcc
CCFLAGS = -Wall -Werror -Wextra

AR = ar
ARFLAGS = rcus

RM = rm
RMFLAGS = -rf

SRCS_1 =	ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\

SRCS = $(SRCS_1)
OJBS = $(SRCS:.c=.o)

all : $(TARGET)

$(TARGET) : $(OJBS)
	$(AR) $(ARFLAGS) $@ $^

$(OJBS) : ./libft.h

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean :
	$(RM) $(RMFLAGS) $(OJBS)

fclean : clean
	$(RM) $(RMFLAGS) $(TARGET)

re : fclean all

.PHONY: all clean fclean re
