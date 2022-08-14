#pragma once
#include "Person.h"
class Member : public Person //Using Inheritance
{
private:
	//Private Data Members
	int ID;
	string Department, Designation;
public:
	//Public Member Functions
	Member();
	Member(string, int, Date, int, string, string);
	//Setters
	void setID(int);
	void setDepartment(string);
	void setDesignation(string);
	//Getter
	int getID();
	string getDepartment();
	string getDesignation();
	//Print Method
	void printMember();
	//Other Funcs..
};
