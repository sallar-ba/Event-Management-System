#include "Member.h"
Member::Member()
{
	this->Department = " ";
	this->Designation = " ";
}
Member::Member(string Name, int Age, Date DOB, string Department, string Designation)
{
	setName(Name);
	setAge(Age);
	setDOB(DOB);
	this->Department = Department;
	this->Designation = Designation;
}
//-------------------------//
void Member::setDepartment(string Department)
{
	this->Department = Department;
}
void Member::setDesignation(string Designation)
{
	this->Designation = Designation;
}
//------------------------//
string Member::getDepartment() { return Department; }
string Member::getDesignation() { return Designation; }
//-----------------------//
void Member::printMember()
{
	printPerson();
	cout << "Department: " << this->Department << endl;
	cout << "Designation: " << this->Designation << endl;
}