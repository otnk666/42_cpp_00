#pragma once

#include <iostream>
#include <cctype>
#include <string>

class   Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _secret;

    public:
        Contact() {}
        
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_secret();

        int     set_first_name(std::string first_name);
        int     set_last_name(std::string last_name);
        int     set_nickname(std::string nickname);
        int     set_phone_number(std::string phone_number);
        int     set_secret(std::string secret);
};