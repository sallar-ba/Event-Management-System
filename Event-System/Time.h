#pragma once
#include<iostream>
using namespace std;
class Time
{
private:
	int Hrs, Min, Sec;
public:
	Time();
	Time(int, int, int);
	//---- Setters ---//
	void setHrs(int);
	void setMins(int);
	void setSecs(int);

	void setTime();

	//---- Getters ---//
	int getHrs();
	int getMins();
	int getSecs();

	void printTime();	//Print Method
};