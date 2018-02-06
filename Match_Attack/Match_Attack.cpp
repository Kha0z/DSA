// Match_Attack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int a;		//Random variable to freeze Terminal
	char option;
	char upper_option;
	string player1, player2;


	cout << "Welcome to Match Attack!" << endl;
	cout << "\nEnter 'P/p' to Play, Enter 'E/e' to Exit: ";
	
	cin >> option;

	upper_option = toupper(option);

	while (1)
	{
		if (upper_option == 'P' || upper_option == 'E') {
			break;
		}
		cout << "\nEnter a Valid option, please try again: ";
		cin >> option;
		upper_option = toupper(option);
	}

	if (upper_option == 'P') {
		cout << "\nEnter Player 1's Name: ";
		cin >> player1;
		cout << "\nEnter Player 2's Name: ";
		cin >> player2;
	}

	if (upper_option == 'E') {
		cout << "\nSee you next time!" << endl;
		cout << "Press any key to continue. . . " << endl;
		
		cin >> a;	//Random Input to freeze Terminal

		return 0;
	}


	cin >> a;	//Random Input to freeze Terminal

	return 0;
}

