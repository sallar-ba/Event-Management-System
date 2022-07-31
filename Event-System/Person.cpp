#include "Person.h"
//-----------------//
Person::Person()
{
	this->Name = " ";
	this->Age = 0;
	this->DOB = { 0,0,0 };
}
Person::Person(string Name, int Age, Date DOB)
{
	this->Name = Name;
	this->Age = Age;
	this->DOB = DOB;
}
//----------------//
void Person::setName(string Name) { this->Name = Name; }
void Person::setAge(int Age) { this->Age = Age; }
void Person::setDOB(Date DOB) { this->DOB = DOB; }
//--------------//
string Person::getName() { return this->Name; }
int Person::getAge() { return this->Age; }
Date Person::getDOB() { return DOB; }
//-------------//
void Person::printPerson()
{
	cout << "Name: " << this->Name << endl;
	cout << "Age:  " << this->Age << endl;
	cout << "DOB:  "; this->DOB.printDate(); cout << endl;
}
//--------------//
