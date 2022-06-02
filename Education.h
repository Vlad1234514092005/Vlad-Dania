#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Teleprogram.h"
#include"Time_.h"
#include"Date.h"
class Education :
    public Teleprogram
{
private:
    string scienceName;
public:
    Education(string scienceName, string name, Time_ time);
    ~Education();

    void setScienceName(string science);
    string getScienceName()const&;

    void show()const&;
};

