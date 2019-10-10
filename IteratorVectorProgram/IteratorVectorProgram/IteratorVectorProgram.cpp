// IteratorVectorProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Iterator and Vector program to demostrate the use of vectors and iterators in a cpp environment
// James O' Neill K00226160
// 12 Septemember 2019 09.39 a.m.


#include "pch.h"
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string>gameInventory; // Favourite games inventory vector
string userin;  // user input

void loop()
{
	// iterator for the games list of his or hers
	for (unsigned int i = 0; i < gameInventory.size(); i++)
	{

		cout << "Your favourite games are: " << gameInventory[i] << endl;

	}
}

void del()
{
	
}

int main()
{
	while (true)
	{
		cout << "\nEnter in your favourite Game" << endl; // prompts the user to add to the list
		cin >> userin;  // user's input to the list 
		gameInventory.push_back(userin);
		sort(gameInventory.begin(), gameInventory.end());
		loop();
	}
		

	
}

