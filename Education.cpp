#include "Education.h"

Education::Education(string scienceName, string name, Time_ time):Teleprogram(name, time)
{
    this->scienceName = scienceName;
}

Education::~Education()
{
}

void Education::setScienceName(string science)
{
    this->scienceName = scienceName;
}

string Education::getScienceName()const&
{
    return this->scienceName;
}

void Education::show()const&
{
    cout << "Program type: " << "\t Education";
    cout << "Program name: " << this->getName();
    cout << "Program time: " << this->getTime();
}
