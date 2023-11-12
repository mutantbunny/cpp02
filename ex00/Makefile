CC = g++
CFLAGS = -Wall -Wextra -Werror -ggdb -std=c++98
RM = rm -f

NAME = fixed

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

INCS = Fixed.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

leaks: $(NAME)
	valgrind --leak-check=full ./$(NAME)

re: fclean all

.PHONY: all clean fclean leaks re