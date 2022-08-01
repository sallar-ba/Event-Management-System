#pragma once
#include"Member.h" // including Member Header File
#include<vector>//Including Vector Class
class Team //Creating a Team Class
{
private:
	//Private Data Member
	vector<Member> eventTeam; // A Modifiable Array of Members
public:
	//-- Public Member Function Proototypes ---//
	//--- CONSTRUCTOR --//
	Team(vector<Member>);
	//--- Other Funcs... ---//
	bool searchMember(int);
	void addMember();
	void deleteMember(int);
	// ---- Print Method ---//
	void printTeam();
};
//----------------------------//