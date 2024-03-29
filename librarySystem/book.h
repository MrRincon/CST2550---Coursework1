/*
book.h
author: M00774667
Created: 26/12/2023
Updated: 14/1/2024
*/
#ifndef _BOOK_H_
#define _BOOK_H_
#include "member.h"
#include <ctime>
#include <fstream>
class Book{
    private:
        int bookID;
        std::string bookName;
        std::string authorFirstName;
        std::string authorLastName;
        std::string bookType;
        time_t dueDate;
        class Member* borrower = nullptr;
    public:
        Book(int bookID, std::string bookName, std::string authorFirstName, std::string authorLastName);
        std::string getBookID();
        std::string getBookName();
        std::string getAuthorFirstName();
        std::string getAuthorLastName();
        time_t getDueDate();
        void setDueDate(time_t dueDate);
        void returnBook();
        void borrowBook(Member* borrower, time_t dueDate);
        // Extra operation to check the borrower
        Member* getBorrower();
};
// External function to store all the books
std::vector<Book> &getBookVtr();
#endif