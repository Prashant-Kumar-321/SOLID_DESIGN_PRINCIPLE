#include "CD.h"

CD::CD(const std::string& title, const std::string& artist, int id, double value)
    : title(title), artist(artist), id(id), value(value)
{
}

std::string CD::getTitle() const noexcept
{
    return this->title ;
}

int CD::getUniqueId() const noexcept
{
    return this->id ;
}

double CD::calculateLateFee(int days) const noexcept
{
    return CD_rate * days;
}

double CD::getValue() const noexcept
{
    return this->value ;
}

std::string CD::getArtist() const noexcept
{
    return this->artist ;
}


