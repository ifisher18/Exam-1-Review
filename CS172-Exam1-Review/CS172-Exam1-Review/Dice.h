#pragma once
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

class Dice {
public:
	// data field
	int sides;

private: // private since we want to restrict each roll to specific values that can't be overwritten
	int rollcount;
	int indiv_sides;

public:
	// constructor
	Dice (int sides) 
	{
		sides = 0;
	}

	// function that returns the results of the roll
	int Roll() 
	{
		srand(time(0));
		sides = rand() % 6 + 1;
		return sides;
	}

	// function that returns the 
	int GetRolls() 
	{
		return rollcount;
	}

	// function that returns the number of sides for this dice object
	int GetSides() 
	{
		return 
	}
};