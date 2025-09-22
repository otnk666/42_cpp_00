/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:51:56 by skomatsu          #+#    #+#             */
/*   Updated: 2025/09/23 04:18:50 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void    command_add(PhoneBook& phonebook)
{
    phonebook.add_contact();
}

void    command_search(PhoneBook& phonebook)
{
    phonebook.search_contact();
}

int main(void)
{
    PhoneBook phonebook;
    std::string content;

    std::cout << "Input <ADD>, <SEARCH>, <EXIT>" << std::endl;
    while (1)
    {
        std::cout << "PhoneBook >";
        std::getline(std::cin, content);
        if (content == "ADD")
            command_add(phonebook);
        else if (content == "SEARCH")
            command_search(phonebook);
        else if (content == "EXIT")
        {
            std::cout << "EXIT" << std::endl;
            break;
        }
        else    
            std::cout << "Input <ADD>, <SEARCH>, <EXIT>" << std::endl;
    }   
    return (0);
}