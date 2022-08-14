#include"Event.h" // Adding Event Header
#include<conio.h> //For _getch()
//------------------------------------------------------------------------------------------//
string Login()
{
	system("CLS");
	cout << "\nEnter Password (4 Digit): ";
	string PASS = "";
	char S;
	for (int index = 1; index <= 4; index++)
	{
		S = _getch(); //Getting a Character
		PASS += S;
		cout << "*"; // And Printing '*' on Each Character Input
	}
	cout << endl;
	return PASS; //Returning Password
}
//------------------------------------------------------------------------------------------//
void Styling()
{
	int MAX_Row = 7, Max_Col = 15; // Defining Max Row and Col
	cout << endl; // End line
	for (int Row = 1; Row <= MAX_Row; Row++)  // For-Loop
	{
		cout << " ";//printing Space
		for (int Col = 1; Col <= Max_Col; Col++)//For-Loop
		{
			//For Printing the Box
			if (Row == 1 || Row == MAX_Row || Col == 1 || Col == Max_Col)
			{
				//Avoiding an Extra * At Printing Data Compression
				if (Row == 4 && Col == Max_Col)
				{
					cout << " "; //Printing Nothing
				}
				else
				{
					//Printing *
					cout << " * ";
				}
			}
			//For Printing University Management System
			/*
				** Change Only This (Modify This) and use in Your Program.
			*/
			else if (Row == 4 && Col == 3)
			{
				//Printing University Management System
				cout << "University Event Management System" << "   *"; // Last *
			}
			else
			{
				cout << "   ";//Printing Spaces
			}
		}
		cout << "\n";//Next Line
	}
	cout << endl << endl;
}
//---------------------------------------------------------------------------------------------------------//

void mockEvent()
{
	/*
	Mock Objects And variables
	*/
	Time startTime(9, 0, 0), endTime(21, 0, 0);
	// Core-Team
	vector<Member> Arr;
	Arr.push_back({ "Sallar", 18, { 16, 9, 2002 }, 1, "CS", "Head of Event" });
	Arr.push_back({ "Arianna", 17, { 9, 8, 2003 }, 9, "BBA", "Accounts" });
	//--------------------------------------------------------//
	// On-Site Faculty
	vector<Member> Teachers;
	Arr.push_back({ "Kim", 19, { 19, 7, 2001 }, 2, "CS", "Production" });
	Arr.push_back({ "Alicia", 17, { 16, 4, 2003 }, 3, "Media", "Social/Graphics" });
	//--------------------------------------------------------//
	Team T("Core-Team", Arr);
	Team T1("Faculty-Team", Teachers);

	//Mock Team Object - Contains 2 Teams
	vector<Team> team;
	team.push_back(T);
	team.push_back(T1);

	// Event Object
	Event E("Christmas Celebration",team, {25, 12, 2022}, startTime, endTime);

	system("CLS");
	E.printEvent(); // Printing Mock Event
}
//---------------------------------------------------------------------------------------------------------//

void exitingProgram()
{
	system("CLS");
	Styling(); // Function Call
	cout << "\nThank You For Using The Program...\n";
	exit(0);
}
//---------------------------------------------------------------------------------------------------------//

void newEvent()
{
	string eventName; cout << "Enter Event Name: "; cin >> eventName;
	cout << "\nEnter Event Date: ";
	Date eventDate; eventDate.setDate();
	Time startTime, endTime; cout << "\nEnter Start Time: "; startTime.setTime();
	cout << "\nEnter End Time:  "; endTime.setTime();
	int teamsCount = 0;
	cout << "How Many Teams You Want to Create?: "; cin >> teamsCount;
	vector<Team> T;
	T.reserve(teamsCount);
	for (int i = 0; i < teamsCount; i++)
	{
		string teamName; cout << "Enter Team Name: "; cin >> teamName;
		Team team(teamName);
		team.addMember();
		T.push_back(team);
	}
	Event E(eventName, T, eventDate, startTime, endTime);
	system("CLS");
	E.printEvent();
}
//---------------------------------------------------------------------------------------------------------//
int main()
{
	Styling(); // Function Call
	//Declaring Var.
	int Choice;
	/*
		Set Password Below.
	*/
	string password = "1234"; // Password
	//---------------------------------------//
	cout << "1. FOR LOGIN" << endl;
	cout << "2. FOR EXIT " << endl;
	do
	{
		cout << "\nChoice: ";	cin >> Choice; // Input
		if (Choice == 1)
		{
			string Pass;
			do
			{
				Pass = Login();
				if (Pass == password) // Checking Password
				{
				LOGIN:
					system("CLS");
					Styling(); // Function Call
					cout << "\nYou've Logged In Successfully...\n";
					cout << "\nPress 1 to See any Previous Planned Event.\n";
					cout << "Press 2 to Add an Event.\n";
					cout << "Press 3 to Exit.\n";
					int LoginChoice;
					do
					{
						cout << "\nChoice: "; cin >> LoginChoice;
						if (LoginChoice == 1)
						{
							mockEvent();
							cout << "\nPress 1 to Add Another Event.\n";
							cout << "Press 2 to Exit.\n";
							int mockChoice = 1;
							do
							{
								cout << "\nChoice: "; cin >> mockChoice;
								if (mockChoice == 1)
								{
									newEvent();
									_getch();
									goto LOGIN;
								}
								else if (mockChoice == 2)
								{
									exitingProgram();
								}
							} while (mockChoice != 1 && mockChoice != 2);
						}
						else if (LoginChoice == 2)
						{
							newEvent();
							_getch();
							goto LOGIN;
						}
						else if (LoginChoice == 3)
						{
							exitingProgram();
						}
					} while (LoginChoice != 1 && LoginChoice != 2 && LoginChoice != 3);
				}
			} while (Pass != password);
		}
		else if (Choice == 2)
		{
			exitingProgram();
		}
	} while (Choice != 1 && Choice != 2);

	/*
	
	Can Add More Functionality Like
		- Adding More Members 
		- Deleting Members
		- Finding Members	

		(P.S: Not Added Here)
	*/



	system("PAUSE>0");
	return 0;
}
//---------------------------------------------------------------------------------------------------------//