#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "Teleprogram.h"
#include"Time_.h"
#include"Date.h"
#include "Teleprogram.h"
class Show :
    public Teleprogram
{
private:
    string theme;
public:
    Show(string theme, string name, Time_ time);
    ~Show();

    void setTheme(string theme);
    string getTheme()const&;

    void show()const&;
};

