#include "Member.h"
#include"Team.h"
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
Member Member::addMember()
{
	Member newMember;
	// Initializing Variables
	int ID = -1, Age = -1;
	Date DOB = { 1, 1, 1999 }; // Object of Date Class
	string Name = " ", Dep = " ", Des = " ";
	//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	cout << "Enter New Member ID: "; cin >> ID;
	newMember.setID(ID);
	cout << "Enter New Member Name: "; cin >> Name;
	newMember.setName(Name);
	cout << "Enter New Member Age: "; cin >> Age;
	newMember.setAge(Age);
	cout << "Enter New Member Date of Birth: ";
	DOB.setDate(); newMember.setDOB(DOB);
	cout << "Enter New Member Department: "; cin >> Dep;
	newMember.setDepartment(Dep);
	cout << "Enter New Member Designation: "; cin >> Des;
	newMember.setDesignation(Des);
	//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	return newMember;
}