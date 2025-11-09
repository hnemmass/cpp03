NAME = FragTrap
CC = c++ -std=c++98 -Wall -Werror -Wextra

SRC = src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp include/ClapTrap.hpp include/ScavTrap.hpp include/FragTrap.hpp
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY = all clean fclean re