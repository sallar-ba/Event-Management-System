#include"Team.h"
int main()
{
	Member A1("Sallar", 20, { 16, 9, 2002 },1, "CS", "Head");
	Member A2("Bilal", 20, { 16, 9, 2002 },2, "CS", "Head");
	Member A3("Ahmad", 20, { 16, 9, 2002 },3, "CS", "Head");

	vector<Member> Arr;
	Arr.push_back(A1);
	Arr.push_back(A2);
	Arr.push_back(A3);

	Team S1(Arr);

	S1.printTeam();


	S1.deleteMember(2);

	S1.printTeam();

	return 0;
}