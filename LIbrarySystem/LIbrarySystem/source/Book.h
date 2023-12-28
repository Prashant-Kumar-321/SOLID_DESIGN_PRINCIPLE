#pragma once
#include<string>
#include "LibraryItem.h"

/*
    Derived Book class from LibraryItem 
*/

class Book : public LibraryItem
{
public: 
    Book(const std::string& title, const std::string& author, int id, double value); 

    std::string getTitle()const noexcept override; 

    int getUniqueId()const noexcept override; 

    double calculateLateFee(int days) const noexcept override; 

    double getValue()const noexcept override;

    std::string getAuthor()const noexcept; 
private: 
    std::string title; 
    std::string author; 
    int id; 
    double value;

#define BOOK_rate 10.750
};

/*
    All Sub Library Items have been derived from the same LibraryItem interface
    i.e all are implementing the LibraryItem Interface 

    IN future we can add more sub library items (such as magazine, newpaper,
    Research Paper etc...) and all will implement the same interface (LibraryItem)
    i.e It could be extended in future (System is open for extension, scale)
    MoreOver at the same time, Changes in one sub LibraryItem class not going to 
    Impact other classes i.e it is closed for modification.

    This is the 'O' part of SOLID Design Principle 
    O->Open-closed Principle (OCP)
*/

