/*
librarian.h
author: M00774667
Created: 25/12/2023
Updated: 14/1/2024
*/
#ifndef _LIBRARIAN_H_
#define _LIBRARIAN_H_
#include "book.h"
class Librarian: public Person{
    private:
        int staffID;
        int salary;
    public:
        Librarian(int staffID, std::string name, std::string address, std::string email, int salary);
        void addMember();
        void issueBook(int memberID, int bookID);
        void returnBook(int memberID, int bookID);
        void displayBorrowedBooks(int memberID);
        void calcFine(int memberID, int bookID);
        int getStaffID();
        void setStaffID(int staffID);
        int getSalary();
        void setSalary(int salary);
};
#endif