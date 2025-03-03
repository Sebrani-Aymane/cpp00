/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:13:35 by asebrani          #+#    #+#             */
/*   Updated: 2025/02/28 08:17:27 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

std::string Contact:: get_fn()
{
    return (this->firstname);
}
std ::string Contact::get_ln(){
    return (this->lastname);
}
std :: string Contact:: get_nn(){
    return(this->nickname);
}
std:: string Contact:: get_pn(){
    return(this->phonenumber);
}
std::string Contact:: get_ds(){
    return(this->darkestsecret);
}

void Contact:: set_fn(std::string fn)
{
    this->firstname = fn;
}

void Contact:: set_ln(std::string ln){
    this->lastname = ln;
}

void Contact::set_nn(std::string nn){
    this->nickname = nn;
}

void Contact:: set_pn(std::string pn){
    this->phonenumber = pn;
}

void Contact::set_ds(std::string ds){
    this->darkestsecret = ds;
}
