CC = c++

FLAGS = -Wall -Wextra -Werror 

SRC = main.cpp  phonebook.cpp  contact.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = Phonebook

all :$(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@
	
clean :
		rm -f $(OBJ)

fclean : clean	
	rm -f  $(NAME)

re : fclean all