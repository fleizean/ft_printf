#Definition

NAME		=	libftprintf.a
INCLUDES	=	include/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs

#Directory

FTPRINT		=	ft_print_c ft_print_s ft_print_d ft_print_ud ft_print_h ft_printf ft_print_p ft_print_percent

FTSTR		=	ft_count_digits ft_itoa ft_uitoa ft_strlen ft_write ft_parser

#FileCreate

SRC_FILES+=$(FTPRINT)
SRC_FILES+=$(FTSTR)

SRC 		= 	$(addsuffix .c, $(SRC_FILES))
OBJ 		= 	$(addsuffix .o, $(SRC_FILES))

all:			$(NAME)

%.o:%.c 
			@echo Compiling:
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
			@echo Compiling Success file is : $< $(SRC_DIR) $@ 

norm:
			@norminette $(SRC) $(INCLUDES) | grep -v Norme -B1 || true
			@echo Norminatte exception

build:
			@gcc -Wall -Wextra -Werror *.c
			@echo Build ok

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@ranlib $(NAME)
			@echo Libft compiled!

clean:
			@$(RM) -rf $(OBJ)
			@echo Libft objects files cleaned!

fclean:		clean
			@$(RM) -f $(NAME)
			@echo Libft executable files cleaned!

re:			fclean all
			@echo Cleaned and rebuilt

.PHONY:		all clean fclean re bonus norm
