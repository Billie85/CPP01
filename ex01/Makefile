NAME	= zombie

SRCS	= main.cpp \
		  Zombie.cpp \
		  zombieHorde.cpp

OBJS		= $(SRCS:%.cpp=%.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(SRCS)
		$(CXX) $(CXXFLAGS) -o $@ $^

clean	:

fclean	: clean
	rm -f $(NAME)
re : fclean all