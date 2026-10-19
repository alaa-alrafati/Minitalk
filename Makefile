
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC1 = server.c
SRC2 = client.c
OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a
INCLUDE = -I . -I $(LIBFT_DIR) -I $(FT_PRINTF_DIR)
NAME1 = server
NAME2 = client

all : $(LIBFT) $(FT_PRINTF) $(NAME1) $(NAME2)

$(FT_PRINTF) :
	make -C $(FT_PRINTF_DIR)

$(LIBFT) :
	make -C $(LIBFT_DIR)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME1) : $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ1) $(LIBFT) $(FT_PRINTF) -o $(NAME1)

$(NAME2) : $(OBJ2)
	$(CC) $(CFLAGS) $(OBJ2) $(LIBFT) $(FT_PRINTF) -o $(NAME2)

clean :
	rm -f $(OBJ1) $(OBJ2)
	make -C $(FT_PRINTF_DIR) clean
	make -C $(LIBFT_DIR) clean

fclean : clean
	rm -f $(NAME1) $(NAME2)
	make -C $(FT_PRINTF_DIR) fclean
	make -C $(LIBFT_DIR) fclean

re : fclean all

.PHONY : all clean fclean re