#pragma once
#include <string>
#include "LateFeeCalculatable.h"

/*
* This LibraryItem class only contains 
* information about the item
* i.e Single Information 
* 
* Single Responsibility Principle (SRP)
*/

class LibraryItem : public LateFeeCalculatable //(Interface)
{
public:
    virtual std::string getTitle()const noexcept = 0; 

    virtual int getUniqueId()const noexcept = 0; 

    virtual double getValue()const noexcept = 0; 
};

/*
* Wrapper class for Reference of Library Itme
*/

class RefLibraryItem
{
public:
	RefLibraryItem(LibraryItem& libItem) : libraryItem(libItem) {  } // Lvalue ref 
	RefLibraryItem(LibraryItem&& libItem) : libraryItem(libItem) {  } // Rvalue ref

	LibraryItem& get() { return libraryItem; }

private:
	LibraryItem& libraryItem;
};