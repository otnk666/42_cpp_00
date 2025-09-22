#pragma once

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

#include "Contact.hpp"

class   PhoneBook
{
    private:
        Contact _contact[8];
        int _index;
        int _count;
    public:
        PhoneBook() : _index(0), _count(0){}

        void	display_phonebook(void);
        void    search_contact(void);
        void    add_contact(void);

};
