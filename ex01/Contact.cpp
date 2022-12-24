/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:29:00 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/02 20:48:19 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::add_contact(std::string info[5])
{
    first_name = info[0];
    last_name = info[1];
    nickname = info[2];
    darkest_secret = info[3];
    phone_number = info[4];
}

void Contact::print_name(std::string name)
{
    int len;
    len = name.size();
    len = 10 - len;
    if (len >= 0)
    {
        for (int i = 0; i < len; i++)
            std::cout << " ";
        std::cout << name << "|";
    }
    else
    {
        std::string m_name = name.substr(0, 9);
        std::cout << m_name << ".";
        std::cout << "|";
    }
}

int Contact::print_info_contact(int number_contact)
{
    if (first_name.empty())
        return (1);
    std::cout << "|         " << number_contact << "|";
    print_name(first_name);
    print_name(last_name);
    print_name(nickname);
    std::cout << std::endl
              << " -------------------------------------------  "
              << std::endl;
    return (0);
}

void Contact::print_informatios()
{
    std::cout << "First_name : " << first_name << std::endl;
    std::cout << "Last_name : " << last_name << std::endl;
    std::cout << "Nickname : " << nickname << std::endl;
    std::cout << "Darkest_secret : " << darkest_secret << std::endl;
    std::cout << "Phone_number : " << phone_number << std::endl;
}

int Contact::string_empty()
{
    if (first_name.empty())
        return (1);
    return (0);
}