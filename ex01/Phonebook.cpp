/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:29:26 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/02 20:48:20 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void Phonebook::go_to_contact(std::string info[5], int number_contact)
{
        contacts[number_contact].add_contact(info);
}

void Phonebook::print_contacts()
{
        std::cout << " ------------------------------------------- "
                  << std::endl
                  << "|   INDEX  "
                  << "|"
                  << "FIRST NAME"
                  << "|"
                  << "LAST NAME "
                  << "|"
                  << " NICKNAME |" << std::endl
                  << " -------------------------------------------  "
                  << std::endl;
        for (int i = 0; i < 8; i++)
        {
                if (contacts[i].print_info_contact(i))
                        break;
        }
}

void Phonebook::go_to_print_inforamtions(int number_contact)
{
        contacts[number_contact].print_informatios();
}

int Phonebook::check(int i)
{
        if (contacts[i].string_empty())
                return (1);
        return (0);
}
