#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Teleprogram.h"
#include"Time_.h"
#include"Date.h"
#include "Teleprogram.h"
class Movie :
    public Teleprogram
{
private:
    string directBox;
    int year;
public:
    Movie(string directBox, int year, string name, Time_ time);
    ~Movie();

    void setDirectBox(string directBox);
    void setYear(int year);

    string getDirectBox()const&;
    int getYear()const&;

    void show()const&;
};

