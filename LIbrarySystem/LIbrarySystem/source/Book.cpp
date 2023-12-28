#include "Book.h"

Book::Book(const std::string& title, const std::string& author, int id, double value)
	: title(title), author(author), id(id), value(value)
{
}

std::string Book::getTitle() const noexcept
{
	return title;
}

int Book::getUniqueId() const noexcept
{
	return id;
}

double Book::calculateLateFee(int days) const noexcept
{
	return BOOK_rate * days;
}

double Book::getValue() const noexcept
{
	return value;
}

std::string Book::getAuthor() const noexcept
{
	return this->author;
}


