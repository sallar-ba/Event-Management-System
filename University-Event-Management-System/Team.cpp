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
	int noOfMembers = 0;
	cout << "Enter Number of Members: "; cin >> noOfMembers;
	//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
	for (int i = 0; i < noOfMembers; i++)
	{
		eventTeam.push_back(newMember.addMember()); // Storing Member in Array
	}
}
//--------------------------------------------------------------//
void Team::deleteMember(int Key)
{
	if (eventTeam.empty())
	{
		//If There are No Members
		cerr << "No Members..." << endl;
		exit(1);// Exiting With Error
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
	cout << "\nTeam Name: \"" << getTeamName() << "\"" << endl;
	if (eventTeam.empty() && teamName == "" || teamName == " ")
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
//----------------------------------------//
void Team::printMemberByID(int ID)
{
	for (int i = 0; i < eventTeam.size(); i++)
	{
		if (eventTeam[i].getID() == ID)
		{
			eventTeam[i].printMember();
			return;
		}
	}
	cout << "MEMBER NOT FOUND..." << endl;
}