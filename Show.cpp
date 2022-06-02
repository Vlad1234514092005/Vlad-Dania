#include "Show.h"

Show::Show(string theme, string name, Time_ time):Teleprogram(name, time)
{
    this->theme = theme; 
}

Show::~Show()
{
}

void Show::setTheme(string theme)
{
    this->theme = theme;
}

string Show::getTheme() const&
{
    return this->theme;
}

void Show::show() const&
{
    cout << "Program type: " << "\t Show";
    cout << "Program name: " << this->getName();
    cout << "Program time: " << this->getTime();
    cout << "Program theme: " << this->getTheme();
}
