// LearningActivityData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "LearningActivity.h"

using namespace std;

int main()
{
	// Below is an example of how to create an object and use the getters and setters of the underlying class.
	LearningActivity Learning1;
	Learning1.set_courseName("Bob");
	cout << Learning1.get_courseName();
}