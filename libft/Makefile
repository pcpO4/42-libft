# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/11 19:27:52 by pcervant          #+#    #+#              #
#    Updated: 2024/06/26 18:12:19 by pcervant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

SRCS_BONUS	=	ft_lstmap_bonus.c			ft_lstnew_bonus.c			ft_lstsize_bonus.c \
				ft_lstdelone_bonus.c		ft_lstiter_bonus.c		ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c		ft_lstclear_bonus.c

OBJS = $(SRCS:.c=.o)

OBJ_BONUS = $(SRCS_BONUS:.c=.o)

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME) $(BONUS_OBJS)

bonus: $(OBJS) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJ_BONUS)

re:	fclean $(NAME)

.PHONY: all clean fclean re bonus


	