/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 01:43:59 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/07 00:52:53 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
    public:
    void add();
    void searchcontact();
    void set_contact(Contact contact);
    void display(int index);
    int check(std::string input);
    int check1(std::string input);
    
};




#endif
