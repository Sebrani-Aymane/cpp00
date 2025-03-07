/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:30:24 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/07 00:53:36 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"


int  main()
{
    PhoneBook phonebook;
    std::string input;

    while (1){
        std::cout << "Enter a command (ADD/SEARCH/EXIT): "<<std::endl;
        if(!getline(std::cin,input))
            exit(0);
        if (input=="ADD")
            phonebook.add();
        else if(input == "SEARCH")
            phonebook.searchcontact();
        else if (input == "EXIT")
            exit(0);
        else
        std:: cout << "Usage : ADD/SEARCH/EXIT "<< std::endl;
    }
}