// Colin Klimowski
// INFO 450
// ATM Withdrawal - Project 1
// Feb 9 2018

#include "stdafx.h"
#include <iostream>
using namespace std;


int main() // For the purposes of this ATM program, we are assuming that the user only has access to a numerical keypad for entry.
{
	int withdrawAmount; //User entered amount.
	int continueCheck; // Used to determine if user wants to make an additional withdrawal. INT because the user only has a numerical keypad at the ATM.
	int amountFifties; // Variables assigned to keep track of the amount of bills of different denominations.
	int amountTwenties;
	int amountTens;
	int amountFives;
	int amountOnes;

		do // Loop to allow the user to make multiple withdrawals. "Do" will make sure the loop always runs at least once.
		{
			cout << "Please enter the amount you want to withdraw below 300." << endl; // Prompt for user input.
			cin >> withdrawAmount; // Taking in the withdrawal amount from the user.

			while (withdrawAmount > 300 || withdrawAmount < 1) // Loop to make sure the user enters a valid number.
			{
				cout << "You have entered an invalid amount. Please enter a valid number." << endl;
				cin >> withdrawAmount;
				continue;
			}

			// Calculations to determine amount of bills needed:

			amountFifties = withdrawAmount / 50;
			if (amountFifties != 0) // Loop that will only the display the output if there is a corresponding bill being returned. Repeat this for all bills.
			{
				cout << "You get " << amountFifties << " $50.00 Dollar Bills." << endl;
			}
			withdrawAmount -= (amountFifties * 50);

			amountTwenties = withdrawAmount / 20;
			if (amountTwenties != 0)
			{
				cout << "You get " << amountTwenties << " $20.00 Dollar Bills." << endl;
			}
			withdrawAmount -= (amountTwenties * 20);

			amountTens = withdrawAmount / 10;
			if (amountTens != 0)
			{
				cout << "You get " << amountTens << " $10.00 Dollar Bills." << endl;
			}
			withdrawAmount -= (amountTens * 10);

			amountFives = withdrawAmount / 5;
			if (amountFives != 0)
			{
				cout << "You get " << amountFives << " $5.00 Dollar Bills." << endl;
			}
			withdrawAmount -= (amountFives * 5);

			amountOnes = withdrawAmount / 1;
			if (amountOnes != 0)
			{
				cout << "You get " << amountOnes << " $1.00 Dollar Bills." << endl;
			}

			cout << "Press any key to make another withdrawal. Press 0 to quit." << endl; // Prompting user for how to continue.
			cin >> continueCheck; // User input to make another withdrawal or quit the program
	
		} while (continueCheck != 0); // Checks the user input to see if another withdrawal is to be made.
	
    return 0;
}

