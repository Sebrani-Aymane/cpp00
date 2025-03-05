c = c++
flags = -Wall -Wextra -Werror 
src = contact.cpp main.cpp phonebook.cpp tools.cpp
obj = $(src:.cpp = .o)
name = Phonebook
all = $(name)
$(name) : $(obj)
		$(cc) $(flags) -o $(name) $(obj)
%.o: %.c
	$(cc) $(flags) $< -o $@
clean :
		rm -f $(obj)
fclean : clean	
	rm -f  $(name)
re : fclean all