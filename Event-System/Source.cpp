#include"Event.h"
#include<conio.h>

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
	int Choice = 1;
	string password = "1234"; // Password

	cout << "1. FOR LOGIN" << endl; 
	cout << "2. FOR EXIT " << endl;
	do 
	{
		cout << "\nChoice: ";	cin >> Choice; // Input
		if (Choice == 1)
		{
			if (Login() == password) // Checking Password
			{
				int L_choice = 0;
				cout << "\n1. Press For Event Details..." << endl;
				cout << "2. Press For Event Planning..." << endl;
				do
				{
					cout << "\nChoice: ";	cin >> L_choice; // Input
					if (L_choice == 1)
					{
						Event E; // Creating an Object
						E.printEvent(); // Calling Function
					}
					else if (L_choice == 2)
					{
						system("CLS");	//Clearing Screen
						cout << "**** Welcome to Event Planning *****" << endl;
						//Creating Object
						Time startTime, endTime;
						string eventName;
						Date eventDate;
						cout << "Enter Event Name: "; cin >> eventName; // Input Name
						cout << "Enter Event Date: "; eventDate.setDate();
						cout << "Enter Event Start Time: "; startTime.setTime(); // Calling Function
						cout << "Enter Event End Time: "; endTime.setTime(); // Calling 
						//------------------------------//
						Event E(eventName, eventDate);
						E.setStartTime(startTime);
						E.setEndTime(endTime);
						//------------------------------//
						cout << "\n1. Press to Add Teams" << endl;
						cout << "2. Press to Change Event Date" << endl;
						int E_choice = 0;
						do
						{
							cout << "Enter Choice: "; cin >> E_choice;
							if (E_choice == 1)
							{
								string teamName = " ";
								cout << "\nEnter Team Name: "; cin >> teamName;
								Team T(teamName); // Creating Team Obj.
								START:
								cout << "\n\n1. Press to Add Member" << endl;
								cout << "2. Press to Delete Member" << endl;
								cout << "3. Press to Search Member" << endl;
								cout << "4. Press to Display Team" << endl;
								cout << "5. Press to Exit" << endl;
								int M_choice = 0;
								do
								{
									cout << "Choice: "; cin >> M_choice;
									if (M_choice == 1)
									{
										int n = 0;
										cout << "\nHow Many Members You Want To Add?: "; cin >> n;
										for (int i = 0; i < n; i++)
										{
											T.addMember();
										}
										goto START;
									}
									else if (M_choice == 2)
									{
										int ID = 0;
										cout << "\nEnter ID of the Member You Want to Delete: "; cin >> ID;
										T.deleteMember(ID);
										goto START;
									}
									else if (M_choice == 3)
									{
										int ID = 0;
										cout << "\nEnter ID of the Member You Want to Search: "; cin >> ID;
										T.printMemberByID(ID); // Using Search Algo.
										goto START;
									}
									else if (M_choice == 4)
									{
										T.printTeam();
										goto START;
									}
									else if (M_choice == 5)
									{
										cout << "\nThank You...." << endl;
										exit(0);
									}

								} while (M_choice != 1 && M_choice != 2 && M_choice != 3 && M_choice != 4);
								
							}
							else if (E_choice == 2)
							{
								eventDate.setDate();
								cout << "Date Changed...." << endl;
							}
						} while (E_choice != 1 && E_choice != 2);
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

	system("PAUSE>0");
	return 0;
}