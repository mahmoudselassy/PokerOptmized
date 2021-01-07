#include "Poker.h"
#include <string>
#include <iostream>
using namespace std;
string Numbers[13] = { "1","2","3","4","5","6","7","8","9","10","J","Q","K" };
string Type[4] = { "Diamonds","Hearts","Clubs","Spades" };
string All[52];
Poker::Poker() 
{
	for (int j = 0; j < 13 ; j++)
	{
		All[j] = Numbers[j] + Type[0];
	}
	for (int j = 13; j < 26; j++)
	{
		All[j] = Numbers[j%13] + Type[1];
	}
	for (int j = 26; j < 39; j++)
	{
		All[j] = Numbers[j%26] + Type[2];
	}
	for (int j = 39; j < 52; j++)
	{
		All[j] = Numbers[j%39] + Type[3];
	}
}

void Poker::PrintCards()
{
	for (int j = 0; j < 52; j++)
	{
		   cout<< All[j]<<endl;
	} 
}

void Poker::Mix()
{
	string temp;
	for (int j = 0; j < 52; j++)
	{
		  temp = All[j];
		  int random = rand() % 52;
		  All[j] = All[random];
		  All[random] = temp;

	}
}

void Poker::Divide()
{
	string Player1[13];
	string Player2[13];
	string Player3[13];
	string Player4[13];
	for (int i = 0; i < 13; i++)
	{
		Player1[i] = All[i];
	}
	for (int i = 13; i < 26; i++)
	{
		Player2[i%13] = All[i];
	}
	for (int i = 26; i < 39; i++)
	{
		Player3[i%26] = All[i];
	}
	for (int i = 39; i < 52; i++)
	{
		Player4[i%39] = All[i];
	}
	//printing
	cout << "Player1" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << Player1[i] << " ";
	}
	cout << endl;
	cout << "Player2" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << Player2[i] << " ";
	}
	cout << endl;
	cout << "Player3" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << Player3[i] << " ";
	}
	cout << endl;
	cout << "Player4" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << Player4[i] << " ";
	}
	cout << endl;


}