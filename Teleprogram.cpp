#include "Teleprogram.h"

Teleprogram::Teleprogram(string name, Time_ time)
{
    this->name = name;
    this->time = time;
}

Teleprogram::~Teleprogram()
{
}

void Teleprogram::setName(string name)
{
    this->name = name;
}

void Teleprogram::setTime(Time_ time) 
{
    this->time = time;
}

string Teleprogram::getName()const&
{
    return this->name;
}

Time_ Teleprogram::getTime()const&
{
    return this->time;
}

bool Teleprogram::operator==(const Teleprogram& obj) const&
{
    return this->time == obj.time;
}

bool Teleprogram::operator >(const Teleprogram& obj) const&
{
    return this->time > obj.time;
}

bool Teleprogram::operator<(const Teleprogram& obj) const&
{
    return this->time < obj.time;
}
