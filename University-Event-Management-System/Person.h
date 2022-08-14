#pragma once
#include"Date.h" // Including Date Lib
class Person // Person Class
{
protected:
	//Private Data Members
	string Name;
	int Age;
	Date DOB; // Object of Class Date
public:
	//Constructors
	Person();
	Person(string, int, Date);
	// Setters
	void setName(string);
	void setAge(int);
	void setDOB(Date);
	//Getters
	string getName();
	int getAge();
	Date getDOB();
	//Print Method
	void printPerson();
};
