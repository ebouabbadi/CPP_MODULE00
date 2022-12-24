/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:29:32 by ebouabba          #+#    #+#             */
/*   Updated: 2022/12/02 20:48:21 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
private:
    Contact contacts[8];

public:
    void go_to_contact(std::string info[5], int number_contact);
    void print_contacts();
    void go_to_print_inforamtions(int number_contact);
    int check(int i);
};
#endif