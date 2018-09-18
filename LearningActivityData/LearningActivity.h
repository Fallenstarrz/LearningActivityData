#pragma once

#include "pch.h"
#include <string>

using namespace std;

class LearningActivity
{
private:
	string courseName;
	string description;
	string title;
	bool isGraded;
	float itemGrade;
protected:

public:
	// Constructor
	LearningActivity();

	string get_courseName ();
	void set_courseName (string m_courseName);
	string get_description ();
	void set_description (string m_description);
	string get_title ();
	void set_title (string m_title);
	bool get_isGraded ();
	void set_isGraded (bool m_isGraded);
	float get_itemGrade ();
	void set_itemGrade (float m_itemGrade);

};