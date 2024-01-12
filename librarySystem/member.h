// Student ID# M00774667
#ifndef _MEMBER_H_
#define _MEMBER_H_
#include <iostream>
#include <vector>
// Include only the person.h file
#include "person.h"
// Forward declaration to avoid compiling errors
class Book;
class Member: public Person{
    private:
        int memberID;
        std::vector<Book*> booksLoaned;
    public:
        Member(int memberID, std::string name, std::string address, std::string email);
        std::string getMemberID();
        std::vector<Book*> getBooksBorrowed();
        std::vector<Book *>& getBooksBorrowedReference();
        void setBooksBorrowed(Book* book);
};
// External function to store all the members;
std::vector<Member> &getMemberVtr();
#endif