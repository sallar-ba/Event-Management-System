#include "Time.h"
#include<iomanip> // Input/Output Manipulation
//---------------------------------//
Time::Time()
{
	this->Hrs = this->Min = this->Sec = 0;
}
Time::Time(int Hrs, int Min, int Sec)
{
	this->Hrs = Hrs;
	this->Min = Min;
	this->Sec = Sec;
}
//------------------------------//
void Time::setHrs(int Hrs) { this->Hrs = Hrs; }
void Time::setMins(int Min) { this->Min = Min; }
void Time::setSecs(int Sec) { this->Sec = Sec; }
void Time::setTime()
{
	cout << "Enter Hours: "; cin >> this->Hrs;
	cout << "Enter Minutes: "; cin >> this->Min;
	cout << "Enter Seconds: "; cin >> this->Sec;
}
//-----------------------------//
int Time::getHrs() { return this->Hrs; }
int Time::getMins() { return this->Min; }
int Time::getSecs() { return this->Sec; }
//------------------------------//
void Time::printTime()
{
	cout << setw(2) << setfill('0') << this->Hrs << ":" << setw(2) << setfill('0') << this->Min << ":" << setw(2) << setfill('0') << this->Sec << endl;
}
