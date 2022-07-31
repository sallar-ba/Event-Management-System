#pragma once
#include<iostream> // Including I/O Lib.
#include<string>
#include<iomanip>
using namespace std;
//Date Class
class Date
{
private:
	//Private Data Members
	int Day, Month, Year;
public:
	//------ Constructors ----------//
	Date();
	Date(int, int, int);
	// ---- Public Member Functions ------//
	//- Setters -//
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setDate(int, int, int);
	//- Getters -//
	int getDay();
	int getMonth();
	int getYear();
	void printDate(); // Print Method
};

