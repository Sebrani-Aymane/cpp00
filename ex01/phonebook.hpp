/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 01:43:59 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/05 00:09:39 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int contactnum;
    public:
    void add(PhoneBook phonebook);
    void searchcontact(PhoneBook Phonebook);
    void set_contact(Contact contact);
    void display(PhoneBook Phonebook);
    int check(std::string input);
    
};


int check(std::string input)
{
     if (input.empty())
    {
        std::cout << " Error empty str" << std::endl;
        return (0);
    }
    
    for (int i = 0; i < input.size() ;i++)
    {
        if (std::isspace(input[i]))
            i++;
        else
            break;
            
        if (i == input.size())
        {
            std::cout << "Error cannot only contain whitespaces" << std::endl;
            return(0);
        }
    }
    return(1);
}

#endif