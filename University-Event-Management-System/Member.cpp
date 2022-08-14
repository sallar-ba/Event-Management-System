#include "Member.h"
Member::Member()
{
	this->Department = " ";
	this->Designation = " ";
}
Member::Member(string Name, int Age, Date DOB, int ID, string Department, string Designation)
{
	setName(Name);
	setAge(Age);
	setDOB(DOB);
	this->ID = ID;
	this->Department = Department;
	this->Designation = Designation;
}
//-------------------------//
void Member::setID(int ID)
{
	this->ID = ID;
}
void Member::setDepartment(string Department)
{
	this->Department = Department;
}
void Member::setDesignation(string Designation)
{
	this->Designation = Designation;
}
//------------------------//
int Member::getID() { return ID; }
string Member::getDepartment() { return Department; }
string Member::getDesignation() { return Designation; }
//-----------------------//
void Member::printMember()
{
	cout << "ID: " << this->ID << endl;
	printPerson();
	cout << "Department: " << this->Department << endl;
	cout << "Designation: " << this->Designation << endl;
}
//------------------------//