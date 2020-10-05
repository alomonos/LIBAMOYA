NAME = libmx.a

SRC_DIR = src/
DIROBJ  = obj

SRC = $(wildcard src/*.c)
OUT = $(SRC:$(SRC_DIR)%.c=$(DIROBJ )%.o)

INC = inc/libmx.h

FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install

install: $(NAME)

$(NAME) : $(SRC) $(INC)
	@clang $(FLAGS) -c $(SRC) -I $(INC) -g
	@ar rc $(NAME) $(OUT)
	@mkdir -p $(DIROBJ)
	@mv $(OUT) $(DIROBJ)

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(DIROBJ)

reinstall: uninstall install
