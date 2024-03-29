/*
person.h
author: M00774667
Created: 26/12/2023
Updated: 30/12/2023
*/
#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <string>
#include <regex>
class Person{
    private:
        std::string name;
        std::string email;
        std::string address;
    public: 
        std::string getName();
        void setName(std::string name);
        std::string getAddress();
        void setAddress(std::string address);
        std::string getEmail();
        void setEmail(std::string email);
};
#endif