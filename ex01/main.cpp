
#include "phonebook.hpp"


int  main(int ac,char **av)
{
    PhoneBook phonebook;
    std::string input;
    (void)av;
    if (ac!= 1)
        return(std::cout <<"Error invalid params"<< std::endl,0);
    while (1){
        std::cout << "Enter a command (ADD/SEARCH/EXIT): "<<std::endl;
        std::getline(std::cin, input);
        if (input=="ADD")
            phonebook.add();
        else if(input == "SEARCH")
            phonebook.searchcontact();
    }
}