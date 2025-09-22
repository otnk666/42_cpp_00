/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 02:10:38 by skomatsu          #+#    #+#             */
/*   Updated: 2025/09/23 03:54:29 by skomatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name()
{
    return (this->_first_name);
}

std::string Contact::get_last_name()
{
    return (this->_last_name);
}

std::string Contact::get_nickname()
{
    return (this->_nickname);
}

std::string Contact::get_phone_number()
{
    return (this->_phone_number);
}

std::string Contact::get_secret()
{
    return (this->_secret);
}

int Contact::set_first_name(std::string first_name)
{   
    if (first_name == "")
        return (1);
    for(size_t i = 0; i < first_name.size(); i++)
    {
        if (!std::isalpha(first_name[i]))
        {
            if (std::isspace(first_name[i]))
                continue;
            else
                return (1);
        }
    }

    this->_first_name = first_name;
    return (0);
}

int Contact::set_last_name(std::string last_name)
{
    if (last_name == "")
        return (1);
    for(size_t i = 0; i < last_name.size(); i++)
    {
        if (!std::isalpha(last_name[i]))
        {
            if (std::isspace(last_name[i]))
                continue;
            else
                return (1);
        }
    }
    this->_last_name = last_name;
    return (0);
}

int Contact::set_nickname(std::string nickname)
{
    if (nickname == "")
        return (1);
    for(size_t i = 0; i < nickname.size(); i++)
    {
        if (!std::isalpha(nickname[i]))
        {
            if (std::isspace(nickname[i]))
                continue;
            else
                return (1);
        }
    }
    this->_nickname = nickname;
    return (0);
}

int Contact::set_phone_number(std::string phone_number)
{
    if (phone_number.size() > 15 || phone_number == "")
        return (1);
    for(size_t i = 0; i < phone_number.size(); i++)
    {
        if (!std::isdigit(phone_number[i]))
            return (1);
    }
    this->_phone_number = phone_number;
    return (0);
}

int Contact::set_secret(std::string secret)
{
    if (secret == "")
        return (1);
    this->_secret = secret;
    return (0);
}
