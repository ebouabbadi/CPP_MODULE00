/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:29:13 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/02 20:48:15 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <cstdlib>

int if_work(std::string s5)
{
    for (size_t i = 0; s5[i]; i++)
    {
        if (!isdigit(s5[i]))
            return (1);
    }
    return (0);
}

int informations(Phonebook &ph_book, int number_contact)
{
    std::string info[5];
    std::cout << "First name: ";
    getline(std::cin, info[0]);
    if (std::cin.eof())
    {
        std::cout << "\nEXIT.." << std::endl;
        exit(1);
    }
    std::cout << "Last name: ";
    getline(std::cin, info[1]);
    if (std::cin.eof())
    {
        std::cout << "\nEXIT.." << std::endl;
        exit(1);
    }
    std::cout << "Nickname: ";
    getline(std::cin, info[2]);
    if (std::cin.eof())
    {
        std::cout << "\nEXIT.." << std::endl;
        exit(1);
    }
    std::cout << "Darkest_secret: ";
    getline(std::cin, info[3]);
    if (std::cin.eof())
    {
        std::cout << "\nEXIT.." << std::endl;
        exit(1);
    }
    std::cout << "Phone_number: ";
    while (1)
    {
        getline(std::cin, info[4]);
        if (std::cin.eof())
        {
            std::cout << "\nEXIT.." << std::endl;
            exit(1);
        }
        if (!if_work(info[4]))
            break;
        std::cout << "Please Enter Phone_number: ";
    }
    for (int i = 0; i < 5; i++)
    {
        if (info[i].empty())
            return (std::cout << "\nContact[" << number_contact << "]"
                              << " is Not Create <STRING EMPTY>\n"
                              << std::endl,
                    0);
    }
    ph_book.go_to_contact(info, number_contact);
    std::cout << "\nContact[" << number_contact << "]"
              << " is Create\n";

    return (1);
}

int search(Phonebook ph_book)
{
    ph_book.print_contacts();
    int index;
    while (true)
    {
        std::string s;
        std::cout << "index : ";
        getline(std::cin, s);
        if (std::cin.eof())
        {
            std::cout << "\nEXIT.." << std::endl;
            exit(1);
        }
        if (s.size() != 1)
            std::cout << "\nPlease Enter index <0 ... 7>\n";
        else
        {
            index = s[0] - 48;
            if (isdigit(s[0]) && !ph_book.check(index) && index <= 7)
            {
                ph_book.go_to_print_inforamtions(index);
                return (1);
            }
            else if (index > 7 || index < 0)
                std::cout << "\nPlease Enter index <0 ... 7>\n";
            else
                return (std::cout << "Contact[" << index << "]"
                                  << " Not Found\n",
                        0);
        }
    }
    return (0);
}

int main()
{

    int number_contact = 0;
    Phonebook ph_book;
    std::cout << "\nPermitted Commands : EXIT or ADD or SEARCH\n\n";
    while (true)
    {
        std::string cmd;
        std::cout << "PHONEBOOK$ ";
        getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
        {
            std::cout << "\n";
            if (!informations(ph_book, number_contact))
                continue;
            number_contact++;
            if (number_contact == 8)
                number_contact = 0;
            std::cout << "\n";
        }
        else if (!cmd.compare("SEARCH"))
        {
            std::cout << "\n";
            if (!search(ph_book))
                continue;
        }
        else if (!cmd.compare("EXIT") || std::cin.eof())
        {
            std::cout << "\nEXIT.." << std::endl;
            exit(1);
        }
        else
            std::cout << "\nPermitted Commands : EXIT or ADD or SEARCH\n\n";
    }
}