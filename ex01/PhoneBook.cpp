/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 19:47:22 by skomatsu          #+#    #+#             */
/*   Updated: 2025/09/23 04:51:23 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string trim_for_display(std::string elem)
{
    if (elem.size() > 10)
    {
        elem[9] = '.';
        elem.erase(10, elem.size() - 10);
    }
    return (elem);
}

void PhoneBook::add_contact() 
{
    Contact new_contact;
    std::string input;
    
    // First Name
    while (1) {
        std::cout << "First Name: ";
        std::getline(std::cin, input);
        if (!input.empty() && new_contact.set_first_name(input) == 0)
            break;
        std::cout << "INVALID INPUT" << std::endl;
    }
    
    // Last Name
    while (1) {
        std::cout << "Last Name: ";
        std::getline(std::cin, input);
        if (!input.empty() && new_contact.set_last_name(input) == 0)
            break;
        std::cout << "INVALID INPUT" << std::endl;
    }
    
    // Nickname
    while (1) {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
        if (!input.empty() && new_contact.set_nickname(input) == 0)
            break;
        std::cout << "INVALID INPUT" << std::endl;
    }
    
    // Phone Number
    while (1) {
        std::cout << "Phone Number: ";
        std::getline(std::cin, input);
        if (!input.empty() && new_contact.set_phone_number(input) == 0)
            break;
        std::cout << "INVALID INPUT" << std::endl;
    }
    
    // Darkest Secret
    while (1) {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, input);
        if (!input.empty() && new_contact.set_secret(input) == 0)
            break;
        std::cout << "INVALID INPUT" << std::endl;
    }
    
    _contact[_index] = new_contact;
    _index = (_index + 1) % 8;
    if (_count < 8)
        _count++;
    std::cout << "Registration complete!" << std::endl;
}

void PhoneBook::search_contact()
{
    std::string input;
    int index;
    
    if (_count == 0) {
        std::cout << "No contacts saved" << std::endl;
        return;
    }
    
    display_phonebook();
    
    std::cout << "Enter index for searching" << std::endl;
    std::getline(std::cin, input);
    if (input.length() != 1 || !std::isdigit(input[0])) 
    {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    index = input[0] - '0';
    if (index < 0 || index >= _count)
    {
        std::cout << "Index out of range" << std::endl;
        return;
    }
    
    std::cout << "First Name :" <<  _contact[index].get_first_name() << std::endl;
    std::cout << "Last Name :" << _contact[index].get_last_name() << std::endl;
    std::cout << "Nickname :" << _contact[index].get_nickname() << std::endl; 
    std::cout << "Phone Number :" << _contact[index].get_phone_number() << std::endl;
    std::cout << "Secret :" << _contact[index].get_secret() << std::endl;
}

void PhoneBook::display_phonebook()
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    for (size_t i = 0; i < 8; i++)
    {
        std::cout << "|" << std::setw(10) << i ;
        std::cout << "|" << std::setw(10) << trim_for_display(_contact[i].get_first_name());
        std::cout << "|" << std::setw(10) << trim_for_display(_contact[i].get_last_name());
        std::cout << "|" << std::setw(10) << trim_for_display(_contact[i].get_nickname()) << "|"<< std::endl;
    }
}