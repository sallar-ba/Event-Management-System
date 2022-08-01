#pragma once
#include"Member.h" // including Member Header File
#include<vector>//Including Vector Class
class Team //Creating a Team Class
{
private:
	//Private Data Member
	string teamName;
	vector<Member> eventTeam; // A Modifiable Array of Members
public:
	//-- Public Member Function Proototypes ---//
	//--- CONSTRUCTORS --//
	Team(string);
	Team(string, vector<Member>);

	//-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-0-
	void setTeamName(string);
	string getTeamName();
	//--- Other Funcs... ---//
	bool searchMember(int);
	void addMember();
	void deleteMember(int);
	// ---- Print Method ---//
	void printTeam();
};
//----------------------------//