#pragma once
#include "Person.h"
class Member : public Person //Using Inheritance
{
private:
	//Private Data Members
	string Department, Designation;
public:
	//Public Member Functions
	Member();
	Member(string, int, Date, string, string);
	//Setters
	void setDepartment(string);
	void setDesignation(string);
	//Getter
	string getDepartment();
	string getDesignation();
	//Print Method
	void printMember();
};

