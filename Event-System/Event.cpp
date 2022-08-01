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
Event::Event(string eventName, vector<Team> allTeams, Date eventDate, Time startTime, Time endTime)
{
	this->eventName = eventName;
	this->allTeams = allTeams;
	this->eventDate = eventDate;
	this->startTime = startTime;
	this->endTime = endTime;
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
void Event::printEvent()
{
	if (allTeams.empty())
	{
		cerr << "NO EVENTS YET...." << endl;
		return;
	}
	else
	{
		cout << "Event Name: " << this->eventName << endl;
		cout << "Event Date: "; this->eventDate.printDate();
		cout << "Event Start Time: "; this->startTime.printTime();
		cout << "Event End Time: "; this->endTime.printTime();

		for (int i = 0; i < allTeams.size(); i++)
		{
			allTeams[i].printTeam();
		}
	}
}
//---------------------------------------//
void Event::setStartTime(Time startTime)
{
	this->startTime = startTime;
}
void Event::setEndTime(Time endTime)
{
	this->endTime = endTime;
}
//------------------------------------//
Time Event::getStartTime() { return this->startTime; }
Time Event::getEndTime() { return this->endTime; }
//-----------------------------------//