#include "Event.h"
Event::Event(string eventName, Date eventDate)
{
	this->eventName = eventName;
	this->eventDate = eventDate;
}
//----------------------------------------//
Event::Event(string eventName, vector<Team> allTeams, Date eventDate)
{
	this->eventName = eventName;
	this->allTeams = allTeams;
	this->eventDate = eventDate;
}
//----------------------------------------//
void Event::setEventDate(Date eventDate)
{
	eventDate.setDate();
	this->eventDate = eventDate;
}
//---------------------------------------//
void Event::setEventName(string eventName)
{
	this->eventName = eventName;
}
//---------------------------------------//
Date Event::getEventDate() { return eventDate; }
string Event::getEventName() { return eventName; }
//---------------------------------------//
void Event::addTeam()
{
	string teamName = " ";
	int TeamNumber = 0;
	cout << "Enter Team Name: "; cin >> teamName;
	cout << "How Many Members You Want to Add to The Team?: ";
	cin >> TeamNumber;
	
	Team T(teamName);
	for (int i = 0; i < TeamNumber; i++)
	{
		T.addMember();
	}

	allTeams.push_back(T);
}
//---------------------------------------//
void Event::deleteTeam(string teamName)
{
	if (allTeams.empty())
	{
		cerr << "No Teams..." << endl;
		exit(1);
	}
	else
	{
		for (int i = 0; i < allTeams.size(); i++)
		{
			if (allTeams[i].getTeamName() == teamName)
			{
				allTeams.erase(allTeams.begin() + i);
			}
		}
	}
	cerr << "Team Not Found..." << endl;
	exit(1);
}
//---------------------------------------//
void Event::printEvent()
{
	cout << "Event Name: " << this->eventName << endl;
	cout << "Event Date: "; this->eventDate.printDate();
	for (int i = 0; i < allTeams.size(); i++)
	{
		allTeams[i].printTeam();
	}
}
//---------------------------------------//