#pragma once

#include <list>
#include "LibraryItem.h"


class Library
{
public:
	Library(const std::string name) : name(name) { }

	void addLibraryItem(LibraryItem& item);

	void addLibraryItem(LibraryItem&& item);

	double calculateTotalValue() const; 

	void checkOut(const LibraryItem& item) const;
	
private: 
	std::string name; 
	std::list<RefLibraryItem> items ; 
};

