/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:48:16 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/05 02:00:38 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int  main(int ac,char **av)
{
    PhoneBook phonebook;
    std::string input;
    if (ac!= 1)
        return(std::cout <<"Error invalid params"<< std::endl,0);
    while (1){
        if (input=="ADD")
            phonebook.add();
    }
}