#include <iostream>
#include "Library.h"

void Library::addLibraryItem(LibraryItem& item)
{
	items.push_back(item); 
}

void Library::addLibraryItem(LibraryItem&& item)
{
	items.push_back(item);   
}

double Library::calculateTotalValue() const
{
	double totalValue = 0; 
	for (RefLibraryItem item : items) {
		totalValue += item.get().getValue(); 
	}

	return totalValue ; 
}

void Library::checkOut(const LibraryItem& item) const
{
	std::cout << "Book is checkout to you " << std::endl; 
}
