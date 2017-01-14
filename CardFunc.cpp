//CardFunc.cpp
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void CardSuit (int card_int) {
	//Figure Card Suit
	int card_suit_int;
	string card_suit;
	card_suit_int = card_int / 13;

	if (card_suit_int == 0) {
		card_suit = "Spade";
	}
	else if (card_suit_int == 1) {
		card_suit = "Club";
	}
	else if (card_suit_int == 2) {
		card_suit = "Diamond";
	}
	else {
		card_suit = "Heart";
	}
	cout << "Card Suit: " << card_suit << endl;
}

void CardRank(int card_int) {
	int card_rank_int;
	string card_rank;
	card_rank_int = card_int % 13;
}

int CardCompare(int card_1, int card_2) {
	int ret_card = -1;
	//turn cards to Rank

	if (card_1 % 13 == card_2 % 13) {
		//Compare suits
		if((card_1 / 13) > (card_2 / 13)) {
			ret_card = card_1;
		}
		else {
			ret_card = card_2;
		}
	}
	else if (card_1 % 13 > card_2 % 13) {
		ret_card = card_1;
	}
	else {
		ret_card = card_2;
	}

	return ret_card;
}