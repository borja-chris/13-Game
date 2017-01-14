//CardFunc.cpp
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void CardTranslate(int card_int) {
	//Figure Card Val
	int card_rank = card_int % 4;
	//Figure Card Suit
	int card_mod;
	string card_suit;
	card_mod = card_int % 4;

	if (card_mod == 0) {
		card_suit = "Spade";
	}
	else if (card_mod == 1) {
		card_suit = "Club";
	}
	else if (card_mod == 2) {
		card_suit = "Diamond";
	}
	else {
		card_suit = "Heart";
	}
	cout << card_rank << ", " << card_suit << endl;
}