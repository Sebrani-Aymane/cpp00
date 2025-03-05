/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:00:42 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/05 00:09:08 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void PhoneBook::set_contact(Contact contact)
{
    static int index =0;
        contacts[index % 8] = contact;
        index++;
        return;
}

void PhoneBook::add(PhoneBook phonebook)
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