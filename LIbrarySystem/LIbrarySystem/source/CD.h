#pragma once
#include "LibraryItem.h"

/*
	Derived from LibraryItem
*/

class CD : public LibraryItem
{
public: 
	CD(const std::string& title, const std::string& artist, int id, double value);

	std::string getTitle() const noexcept override;

	int getUniqueId() const noexcept override;

	double calculateLateFee(int days) const noexcept override;

	double getValue() const noexcept override;

	std::string getArtist()const noexcept; 

private: 
	std::string title; 
	std::string artist; 
	int id; 
	double value;

#define CD_rate 9.50
};

