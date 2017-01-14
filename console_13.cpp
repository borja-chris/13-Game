// console_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CardFunc.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;


int main()
{
	srand(unsigned(time(0)));
	vector<int> Deck;

	int user_in = -1;
	int user_in2 = -1;
	

	//Incorporate section in new func in future.
	//populate deck
	for (int i = 0; i < 52; i++) {
		Deck.push_back(i);
	}

	//shuffle deck
	random_shuffle(Deck.begin(), Deck.end());

	for (int i = 0; i < 52; i++) {
		cout << Deck[i] << ", ";
	}

	cout << endl;

	while (user_in != 52) {  //running indefintely, exit on 52
		//get user input
		cout << "Enter numbers : ";

		//sanitize input
		cin >> user_in;
		cin >> user_in2;
		cout << "User input:: " << user_in << endl;
		cout << "Generating Card: ";

		CardSuit(user_in);
		CardRank(user_in);
		cout << "comparing " << user_in << " and " << user_in2 << endl;
		cout << CardCompare(user_in, user_in2) << " is the highest" << endl;
	}

    return 0;
}