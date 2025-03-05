/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:00:42 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/05 04:34:29 by asebrani         ###   ########.fr       */
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
    int checkvalid = 0;
    
     if (input.empty())
    {
        std::cout << "Error empty str" << std::endl;
        return (0);
    }
    
    for (int i = 0; i < (int)input.size() ;i++)
    {
        if (std::isprint(input[i]) && !isspace(input[i]))
            checkvalid =1;
    }
        if (!checkvalid)
        {
            std::cout << "Error cannot only contain whitespaces" << std::endl;
            return(0);
        }
        return(1);
}


void PhoneBook::set_contact(Contact contact)
{
    static int index = 0;
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

std::string set_lines(std::string str) {
    std::string result = str;
    if (result.length() > 10)
        return result.substr(0, 9) + ".";
    return result;
}

void PhoneBook::display(int index)
{
    if (index < 1 || index > 8){
        std:: cout <<"Invalid index"<<std::endl;
        return;}
    std::cout << std::setfill(' ');
    std::string input;
    
    std::cout << std::setw(10) << "Index " << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|"
              << std::setw(10) << "PhoneNumber" << "|"
              << std::setw(10) << "DarkestSecret" << "|"
              << std:: endl;
    std::cout << std::string(43, '_') << "\n";


        std::cout << std::setw(10) << index << "|"
                  << std::setw(10) << contacts[index -1].get_fn() << "|"
                  << std::setw(10) << contacts[index -1].get_ln() << "|"
                  << std::setw(10) << contacts[index -1].get_nn() << "|"
                  << std::setw(10) << contacts[index -1].get_pn() << "|"
                  << std::setw(10) << contacts[index -1].get_ds() << std::endl;
}


void PhoneBook::searchcontact() {
    std::cout << std::setfill(' ');
    std::string input;
    
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "\n";
    std::cout << std::string(43, '_') << "\n";

    for (int i = 0; i < 8; i++) {

        std::cout << std::setw(10) << (i + 1) << "|"
                  << std::setw(10) << set_lines(contacts[i].get_fn()) << "|"
                  << std::setw(10) << set_lines(contacts[i].get_ln()) << "|"
                  << std::setw(10) << set_lines(contacts[i].get_nn()) << "\n";
                  std::cout << std::string(43, '_') << "\n";
        
    }
    std::cout << "Enter contact's index to show full attributes" << std::endl;
    std::getline(std::cin,input);
    if (!check(input) || input == "EXIT"){
        std::cout<< "here"<< std::endl;
        return;}
    else
        display(atoi(input.c_str()));
}