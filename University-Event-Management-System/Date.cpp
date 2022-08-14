#include "Date.h"
//-------------------------------//
Date::Date()
{
	this->Day = 1;
	this->Month = 1;
	this->Year = 1999;
}
//-------------------------------//
Date::Date(int Day, int Month, int Year)
{
	this->Day = Day;
	this->Month = Month;
	this->Year = Year;
}
//--------------------------------//
void Date::setDay(int Day) { this->Day = Day; }
void Date::setMonth(int Month) { this->Month = Month; }
void Date::setYear(int Year) { this->Year = Year; }
void Date::setDate()
{
	//Taking Input From User
	cout << "Enter Day: "; cin >> this->Day; setDay(Day);
	cout << "Enter Month: "; cin >> this->Month; setMonth(Month);
	cout << "Enter Year: "; cin >> this->Year; setYear(Year);
}
//---------------------------------//
int Date::getDay() { return this->Day; }
int Date::getMonth() { return this->Month; }
int Date::getYear() { return this->Year; }
//----------------------------------//
void Date::printDate()
{
	cout << this->Day << "/" << this->Month << "/" << this->Year << endl;
}