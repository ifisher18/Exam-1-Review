#pragma once
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

class Dice {
public:
	// data field
	int dicesides;

private: // private since we want to restrict each roll to specific values that can't be overwritten
	int rollcount = 0;
	int indiv_sides;

public:
	// constructor that sets defaults for Dice
	Dice (int sides) 
	{
		dicesides = sides;
	}

	// function that returns the results of the roll
	int Roll() 
	{
		int randroll;
		randroll = rand() % 6 + 1;
		rollcount++;
		return randroll;
	}

	// function that returns the number of times dice has rolled since it has been created
	int GetRolls()
	{
		return rollcount;
	}
	// function that returns the number of sides for this dice object
	int GetSides() 
	{
		return indiv_sides;
	}


};