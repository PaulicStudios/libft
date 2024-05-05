# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:59:39 by pgrossma          #+#    #+#              #
#    Updated: 2024/05/05 19:05:59 by pgrossma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VPATH		=	libft \
				libft/lst libft/arr \
				printf \
				get_next_line
SRCSLIBFT	=	ft_atof.c ft_atoi.c ft_atol.c ft_bzero.c ft_calloc.c\
				ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c\
				ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_pow.c\
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
				ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
				ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
				ft_tolower.c ft_toupper.c ft_lower_str.c \
				ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstiter.c ft_lstmap.c \
				ft_arr_add.c ft_arr_cpy.c ft_arr_create_len.c ft_arr_create.c ft_arr_free.c ft_arr_len.c ft_arr_rm.c ft_arr_sort.c
SRCSPRINTF	=	ft_printf.c ft_putchar_pf.c ft_putnbr_pf.c ft_putstr_pf.c ft_puthex_pf.c ft_putunbr_pf.c
SRCSGNL		=	get_next_line.c get_next_line_utils.c

SRC		= $(SRCSLIBFT) $(SRCSPRINTF) $(SRCSGNL)
OBJ		= $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
OBJDIR	= obj

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
