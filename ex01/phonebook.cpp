/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:00:42 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/05 02:46:57 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

int PhoneBook::check(std::string input)
{
     if (input.empty())
    {
        std::cout << " Error empty str" << std::endl;
        return (0);
    }
    
    for (int i = 0; i < (int)input.size() ;i++)
    {
        if (std::isprint(input[i]) == 0)
            i++;
        else
            break; 
        if (i == (int)input.size())
        {
            std::cout << "Error cannot only contain whitespaces" << std::endl;
            return(0);
        }
    }
    return(1);
}

void PhoneBook::set_contact(Contact contact)
{
    static int index =0;
        contacts[index % 8] = contact;
        index++;
        return;
}

void PhoneBook::add()
{
    Contact newcontact;
    
    std::string input;
    while(1){
    std::cout << "Enter Contact's First Name"<< std::endl;
    std::getline(std::cin,input);
    if (check(input))
        break;
    }
    newcontact.set_fn(input);
    while(1){
    std::cout << "Enter Contact's Last Name"<< std::endl;
    std::getline(std::cin,input);
    if (check(input))
        break;
    }
    newcontact.set_ln(input);
    while(1){
    std::cout << "Enter Contact's Nick Name"<< std::endl;
    std::getline(std::cin,input);
    if (check(input))
        break; 
    }
    newcontact.set_nn(input);
    while(1){
    std::cout << "Enter Contact's Phone Number"<< std::endl;
    std::getline(std::cin,input);
    if (check(input))
        break;
    }
    newcontact.set_pn(input);
    while(1){
    std::cout << "Enter Contact's Darkest Secret"<< std::endl;
    std::getline(std::cin,input);
    if (check(input))
        break;
    }
    newcontact.set_ds(input);
   set_contact(newcontact);
    std::cout << "Contact added successfully"<< std:: endl;
}

std::string formatColumn(std::string str) {
    std::string result = str;
    if (result.length() > 10)
        return result.substr(0, 9) + ".";
    return result;
}

void PhoneBook::searchcontact() {
    std::cout << std::setfill(' ');
    
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "\n";
    std::cout << std::string(43, '_') << "\n";

    for (int i = 0; i < 8; i++) {
        if (contacts[i].get_fn().empty())
            continue;

        std::cout << std::setw(10) << (i + 1) << "|"
                  << std::setw(10) << formatColumn(contacts[i].get_fn()) << "|"
                  << std::setw(10) << formatColumn(contacts[i].get_ln()) << "|"
                  << std::setw(10) << formatColumn(contacts[i].get_nn()) << "\n";
    }
}
