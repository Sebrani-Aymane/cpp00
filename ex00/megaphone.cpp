/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrani <asebrani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:51:04 by asebrani          #+#    #+#             */
/*   Updated: 2025/03/05 11:51:06 by asebrani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av) {
    if (ac < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    for (int i = 1; i < ac; i++) { 
        std::string str = av[i];
        for (int j = 0; j < str.size(); j++) {
            if (str[j] >= 'a' && str[j] <= 'z') {
                str[j] -= 32;
            }
        }
        std::cout << str;
    }
    std::cout << std::endl;
    return 0;
}