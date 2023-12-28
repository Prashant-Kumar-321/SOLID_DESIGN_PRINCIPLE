#include <iostream>

#include "LateFeeCalculatable.h"
#include "LibraryItem.h"
#include "LateFeeCalculator.h"
#include "Book.h"
#include "CD.h"
#include "DVD.h"
#include "Library.h"


/**
* Already learnt two principle of solid 
* S-> singel reponsibility 
* O-> Open-Closed Principle
* /Open -> open for extension  
* closed-> closed for modification( While Scaling it should NOT modify the existing 
*			CODE /
* 
* continue the lecture and project tomorrow (26 dec)
* form 25::11 time stamp
*
*/

int main(int argc, char** agrv)
{
	DVD dvd("DVD_Title", "DVD_Artist", 1, 209.87);
	CD cd("CD_title", "CD_Artist", 2, 87.67); 
	Book book("Book_title", "Book_Author", 3, 305.98); 

	Library library("S.R Libaray");
	library.addLibraryItem(dvd);
	library.addLibraryItem(cd);
	library.addLibraryItem(book);

	double libTotalValue = library.calculateTotalValue();

	std::cout << "Library Total Value = " << libTotalValue << std::endl ; 


	std::list<RefLateFeeCalculatable> items;
	items.push_back(dvd); 
	items.push_back(cd); 
	items.push_back(book); 
	LateFeeCalculator lfcalculator;
	int days = 10; 
	double totalLateFee = lfcalculator.calculateTotalLateFees(items, days); 
	std::cout << "Total Late Fees = " << totalLateFee << "rs" << std::endl; 
	
}
