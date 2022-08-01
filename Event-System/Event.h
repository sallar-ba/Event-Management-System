#pragma once
#include"Team.h" // Including Header
class Event // Event Class 
{
private:
	//Private Data Members
	string eventName; // For Storing Event Name
	vector<Team> allTeams; // Array For Storing Teams
	Date eventDate; // For Event Date
public:
	//-- Public Member Function Proototypes ---//
	//--- CONSTRUCTORS --//
	Event(string, Date);
	Event(string, vector<Team>, Date);

	//---- Setters and Getters ---//
	void setEventName(string);
	string getEventName();
	void setEventDate(Date);
	Date getEventDate();

	//--- Other Funcs ---//
	void addTeam();
	void deleteTeam(string);

	//-- Print Method --//
	void printEvent();
};

