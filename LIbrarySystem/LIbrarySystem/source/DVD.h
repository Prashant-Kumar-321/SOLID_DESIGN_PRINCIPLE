#pragma once
#include "LibraryItem.h"

/*
    Derived from LibrayItem
*/
class DVD :public LibraryItem
{
public: 
    DVD(const std::string& title, const std::string& artist, int id, double value); 

    std::string getArtist() const noexcept; 

    // Inherited via LibraryItem
    std::string getTitle() const noexcept override;

    int getUniqueId() const noexcept override;

    double calculateLateFee(int days) const noexcept override;

    double getValue() const noexcept override;

private:
    std::string title;
    std::string artist;
    int id;
    double value;

#define DVD_rate 5.89

};

