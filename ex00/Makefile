c = c++
flags = -Wall -Wextra -Werror 
src = megaphone.cpp
obj = $(src:.cpp = .o)
name = Megaphone
all = $(name)
$(name) : $(obj)
		$(cc) $(flags) -o $(name) $(obj)
%.o: %.c
	$(cc)$(flags) $< -o $@
clean :
		rm -f $(obj)
fclean : clean	
	rm -f  $(name)
re : fclean all