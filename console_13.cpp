// console_13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CardFunc.h"

#include <iostream>
using namespace std;


int main()
{
	int user_in = -1;
	while (user_in != 52) {  //running indefintely, exit on 52
		//get user input
		cout << "Enter number : ";

		//sanitize input
		cin >> user_in;
		cout << "User input:: " << user_in << endl;
		cout << "Generating Card: ";

		CardTranslate(user_in);
	}

    return 0;
}