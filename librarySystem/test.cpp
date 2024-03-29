/*
test.cpp
author: M00774667
Created: 10/12/2023
Updated: 12/1/2024
*/
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "person.h"
#include "member.h"
#include "book.h"
#include "librarian.h"
// Test case for Person class.
TEST_CASE("Person functionality", "[Person]"){
    Person person;
    person.setName("M00774667");
    person.setAddress("Somewhere");
    person.setEmail("test@hotmail.com");
    REQUIRE(person.getName() == "M00774667");
    REQUIRE(person.getAddress() == "Somewhere");
    REQUIRE(person.getEmail() == "test@hotmail.com");
}
// Test case for Member class.
TEST_CASE("Member functionality", "[Member]"){
    Member member(0, "M00774667", "Somewhere", "test@hotmail.com");
    REQUIRE(member.getMemberID() == "0");
    REQUIRE(member.getName() == "M00774667");
    REQUIRE(member.getAddress() == "Somewhere");
    REQUIRE(member.getEmail() == "test@hotmail.com");
}
// Test case for Book class.
TEST_CASE("Book functionality", "[Book]"){
    Book book(0, "X book", "Xname", "Xsurname");
    REQUIRE(book.getBookID() == "0");
    REQUIRE(book.getBookName() == "X book");
    REQUIRE(book.getAuthorFirstName() == "Xname");
    REQUIRE(book.getAuthorLastName() == "Xsurname");
}
// Test case for Librarian class.
TEST_CASE("librarian functionality", "[Librarian]"){
    Librarian librarian(0, "Librarian", "Book St.", "librarian@library.com", 10000);
    REQUIRE(librarian.getStaffID() == 0);
    REQUIRE(librarian.getSalary() == 10000);
    REQUIRE(librarian.getName() == "Librarian");
    REQUIRE(librarian.getAddress() == "Book St.");
    REQUIRE(librarian.getEmail() == "librarian@library.com");
}