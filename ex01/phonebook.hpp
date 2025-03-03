/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 01:43:59 by asebrani          #+#    #+#             */
/*   Updated: 2025/02/28 11:30:05 by asebrani         ###   ########.fr       */
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
    void set_contact(Contact contact, int index);
    void display(PhoneBook Phonebook);
    
};




#endif