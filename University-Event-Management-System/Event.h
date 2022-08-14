#pragma once
#include"Team.h" // Including Header
#include"Time.h"
class Event // Event Class 
{
private:
	//Private Data Members
	string eventName; // For Storing Event Name
	vector<Team> allTeams; // Array For Storing Teams
	Date eventDate; // For Event Date
	Time startTime, endTime;
public:
	//-- Public Member Function Proototypes ---//
	//--- CONSTRUCTORS --//
	Event();
	Event(string, Date);
	Event(string, Date, Time, Time);
	Event(string, vector<Team>, Date);
	Event(string, vector<Team>, Date, Time, Time);

	//---- Setters and Getters ---//
	void setEventName(string);

	//....
	void setStartTime(Time);
	void setEndTime(Time);
	//...
	string getEventName();
	//...
	Time getStartTime();
	Time getEndTime();
	//....
	void setEventDate(Date);
	Date getEventDate();

	//-- Print Method --//
	void printEvent();
};
