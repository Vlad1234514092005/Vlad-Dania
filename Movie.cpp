#include "Movie.h"

Movie::Movie(string directBox, int year, string name, Time_ time):Teleprogram(name, time)
{
    this->directBox = directBox;
    this->year = year;
}

Movie::~Movie()
{
}

void Movie::setDirectBox(string directBox)
{
    this->directBox = directBox;
}

void Movie::setYear(int year)
{
    this->year = year;
}

string Movie::getDirectBox() const&
{
    return this->directBox;
}

int Movie::getYear() const&
{
    return this->year;
}

void Movie::show() const&
{
    cout << "Program type: " << "\t Show";
    cout << "Program name: " << this->getName();
    cout << "Program time: " << this->getTime();
    cout << "Direct box: " << this->directBox;
    cout << "Year: " << this->year;
}
