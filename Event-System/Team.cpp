#include "Team.h"
//---------------------------------//
Team::Team(string teamName, vector<Member> eventTeam)
{
	this->teamName = teamName;
	this->eventTeam = eventTeam;
}
Team::Team(string teamName)
{
	this->teamName = teamName;
}
//-----------------------------------//
bool Team::searchMember(int ID)
{
	for (int i = 0; i < eventTeam.size(); i++)
	{
		if (eventTeam[i].getID() == ID)
		{
			return true;
		}
	}
	return false;
}
//-------------------------------------//
void Team::addMember()
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
	eventTeam.push_back(newMember); // Storing Member in Array
}
//--------------------------------------------------------------//
void Team::deleteMember(int Key)
{
	if (eventTeam.empty())
	{
		//If There are No Members
		cerr << "No Members..." << endl;
		exit(1);
	}
	else
	{
		for (int i = 0; i < eventTeam.size(); i++)
		{
			if (eventTeam[i].getID() == Key)
			{
				//Deleting a Member
				eventTeam.erase(eventTeam.begin() + i);
				return;
			}
		}
		cerr << "Member Not Found..." << endl;
		exit(1);
	}	
}
//--------------------------------------------------------------//
void Team::setTeamName(string teamName)
{
	this->teamName = teamName;
}
string Team::getTeamName() { return this->teamName; }
//--------------------------------------------------------------//
void Team::printTeam()
{
	cout << "\nTeam Name: " << this->teamName << endl;
	if (eventTeam.empty())
	{
		//If There are No Members
		cerr << "No Members..." << endl;
		exit(1);
	}
	else
	{
		//Printing Members
		for (int i = 0; i < eventTeam.size(); i++)
		{
			eventTeam[i].printMember();
			cout << endl;
		}
	}
}