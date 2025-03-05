/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:54:21 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/05 02:21:51 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <string>
#include <cstring>

void Contact::set_fn(std::string value) {
    this->firstname = value;
}

void Contact::set_ln(std::string value) {
    this->lastname = value;
}

void Contact::set_nn(std::string value) {
    this->nickname = value;
}

void Contact::set_ds(std::string value) {
    this->darkestsecret = value;
}

void Contact::set_pn(std::string value) {
    this->phonenumber = value;
}

std::string Contact::get_fn() {
    return this->firstname;
}

std::string Contact::get_ln() {
    return this->lastname;
}

std::string Contact::get_nn() {
    return this->nickname;
}

std::string Contact::get_ds() {
    return this->darkestsecret;
}

std::string Contact::get_pn() {
    return this->phonenumber;
}

