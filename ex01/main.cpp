/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 01:42:47 by asebrani          #+#    #+#             */
/*   Updated: 2025/02/28 11:12:36 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ex01.hpp"

int main()
{
	PhoneBook phonebook;
	std::string input;
	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
			phonebook.add(phonebook);
		else if (input == "SEARCH")
			phonebook.search
	}
}