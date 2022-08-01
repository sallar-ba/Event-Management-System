#include"Event.h"
#include<conio.h>
class Time
{
private:
	int Hrs, Min, Sec;
public:
	Time();
	Time(int, int, int);
	//---- Setters ---//
	void setHrs(int);
	void setMins(int);
	void setSecs(int);

	//---- Getters ---//
	int getHrs();
	int getMins();
	int getSecs();
	
	void printTime();	//Print Method
};
string Login()
{
	cout << "\nEnter Password (4 Digit): ";
	string PASS = "";
	char S;
	for (int index = 1; index <= 4; index++)
	{
		S = _getch();
		PASS += S;
		cout << "*";
	}
	cout << endl;
	return PASS;
}

int main()
{
	//Declaring Var.
START:
	int Choice = 1;
	string password = "1234";

	cout << "1. FOR LOGIN" << endl;
	cout << "2. FOR EXIT " << endl;
	do 
	{
		cout << "\nChoice: ";	cin >> Choice;
		if (Choice == 1)
		{
			if (Login() == password)
			{
				int L_choice = 0;
				do
				{
					cout << "\nChoice: ";
					cin >> L_choice;
					if (L_choice == 1)
					{
						cout << "1. Press For Event Details..." << endl;
					}
					else
					{
						exit(1);
					}
				} while (L_choice != 1 && L_choice != 2);
			}
		}
		else if (Choice == 2)
		{
			cout << "\nThank You For Using the Program..." << endl;
			exit(0);
		}		
	} while (Choice != 1 && Choice != 2);
	
	
	//TESTING
	/*Member A1("CCC", 20, { 16, 9, 2002 },1, "CS", "Head");
	Member A2("CCC", 20, { 16, 9, 2002 },2, "CS", "Head");
	Member A3("CCC", 20, { 16, 9, 2002 },3, "CS", "Head");
	
	Member A4("EEE", 20, { 16, 9, 2002 },9, "CS", "Head");
	Member A5("EEE", 20, { 16, 9, 2002 },1, "CS", "Head");
	Member A6("EEE", 20, { 16, 9, 2002 },6, "CS", "Head");
	
	Member A7("AAA", 20, { 16, 9, 2002 },0, "CS", "Head");
	Member A8("AAA", 20, { 16, 9, 2002 },11, "CS", "Head");
	Member A9("AAA", 20, { 16, 9, 2002 },31, "CS", "Head");

	vector<Member> Arr;
	vector<Member> Arr1;
	vector<Member> Arr2;
	
	Arr.push_back(A1);
	Arr.push_back(A2);
	Arr.push_back(A3);

	Arr1.push_back(A4);
	Arr1.push_back(A5);
	Arr1.push_back(A6);
	
	Arr2.push_back(A7);
	Arr2.push_back(A8);
	Arr2.push_back(A9);

	Team S1("Core-Team", Arr);
	Team S2("Core-Team", Arr1);
	Team S3("Core-Team", Arr2);

	vector<Team> OO;
	OO.push_back(S1);
	OO.push_back(S2);
	OO.push_back(S3);

	Event E("CODEFEST",OO, { 1,1,1999});

	E.printEvent();*/

	system("PAUSE>0");
	return 0;
}