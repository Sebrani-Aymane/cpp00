/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 01:49:18 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/07 00:21:34 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

class Contact
{
private:
    std:: string firstname;
    std:: string lastname;
    std:: string nickname;
    std:: string phonenumber;
    std:: string darkestsecret;
   
public:
std::string get_fn();
std::string get_ln();
std::string get_nn();
std::string get_pn();
std::string get_ds();

void set_fn(std::string fn);
void set_ln(std::string ls);
void set_nn(std::string nn);
void set_pn(std::string pn);
void set_ds(std::string ds);

};
#endif