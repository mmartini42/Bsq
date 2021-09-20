# Colors
GREY = \033[4;34m
RED = \033[1;31m
GREEN = \033[3;32m
YELLOW = \033[2;49;33m
BLUE = \033[4;34m
BLUEE = \033[3;34m
PURPLE = \033[3;35m
CYAN = \033[3;36m
RESET = \033[0m
ICONOK = \033[1;32m
ICONKO = \033[1;31m
CO_DELET = \033[3;31m
CO_A_OUT = \033[96m
WHITE = \033[1;49;97m

-include sources.mk

NAME = bsq

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -O3 -g -I includes

%.o: %.c $(HEADER)
	@printf "\033[2K\r$(PURPLE)$<: $(CYAN)loading..$(RESET)"
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@gcc $(CFLAGS) $(OBJECTS) -o $(NAME)
	@printf "\033[2K\r$(PURPLE)$<: $(CYAN)loading..$(RESET)"

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

gmk:
	./scripts/generate-mk.sh

norminette: clean
	norminette -R CheckForbiddenSourceHeader sources
	norminette -R CheckDefine includes

end:
	./scripts/end.sh

test: $(NAME)
	./$(NAME) map.txt
	
map:
	perl map-generator.perl 100 100 40 > map.txt

.PHONY: all clean fclean re gmk norminette test end map
