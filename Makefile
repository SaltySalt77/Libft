TARGET = libft.a

CC = gcc
CCFLAGS = -Wall -Werror -Wextra

AR = ar
ARFLAGS = rcus

RM = rm
RMFLAGS = -rf

SRCS	 =	ft_isalpha.c	\
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
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\

SRCS_BONUS = ft_lstnew.c		\
			 ft_lstadd_front.c 	\
			 ft_lstsize.c		\
			 ft_lstlast.c		\
			 ft_lstadd_back.c	\
			 ft_lstdelone.c		\
			 ft_lstclear.c		\
			 ft_lstiter.c		\
			 ft_lstmap.c		\

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(TARGET)

bonus : $(TARGET) $(OBJS_BONUS)
	$(AR) ru $(TARGET) $(OBJS_BONUS)
	touch bonus

$(TARGET) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(OBJS) : ./libft.h

$(OBJS_BONUS) : ./libft.h

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean :
	$(RM) $(RMFLAGS) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAGS) $(TARGET)

re : fclean all

.PHONY: all clean fclean re
