#include "DVD.h"

DVD::DVD(const std::string& title, const std::string& artist, int id, double value)
    : title(title), artist(artist), id(id), value(value)
{
}

std::string DVD::getArtist() const noexcept
{
    return this->artist ; 
}

std::string DVD::getTitle() const noexcept
{
    return this->title ;
}

int DVD::getUniqueId() const noexcept
{
    return this->id ;
}

double DVD::calculateLateFee(int days) const noexcept
{
    return DVD_rate * days;
}

double DVD::getValue() const noexcept
{
    return this->value; 
}



