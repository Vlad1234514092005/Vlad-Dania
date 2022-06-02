#pragma once
#include<iostream>
#include<string>
#include"Time_.h"
#include"Date.h"
using namespace std;
class Teleprogram
{
private:
	string name;
	Time_ time;
public:
	Teleprogram(string name, Time_ time);
	~Teleprogram();

	void setName(string name);
	void setTime(Time_ time);

	string getName()const&;
	Time_ getTime()const&;

	bool operator == (const Teleprogram& obj)const&;
	bool operator > (const Teleprogram& obj)const&;
	bool operator < (const Teleprogram& obj)const&;

	virtual void show()const& = 0;
};

