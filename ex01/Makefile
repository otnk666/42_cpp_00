
NAME		= PhoneBook

CXX			= c++
CXXFLAGS 	= -Wall -Werror -Wextra -g
CXXFLAGS	+= -std=c++98

RM			= rm -rf
SRCS		= main.cpp PhoneBook.cpp Contact.cpp
INCLUDES	= PhoneBook.hpp Contact.hpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re