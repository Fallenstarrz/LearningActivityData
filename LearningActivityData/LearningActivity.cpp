#include "pch.h"
#include <string>
#include "LearningActivity.h"

using namespace std;

// Constructor
LearningActivity::LearningActivity()
{

}

// Methods (Getters and Setters)
string LearningActivity::get_courseName()
{
	return courseName;
}

void LearningActivity::set_courseName(string m_courseName)
{
	courseName = m_courseName;
}

string LearningActivity::get_description()
{
	return description;
}

void LearningActivity::set_description(string m_description)
{
	description = m_description;
}

string LearningActivity::get_title()
{
	return title;
}

void LearningActivity::set_title(string m_title)
{
	title = m_title;
}

bool LearningActivity::get_isGraded()
{
	return isGraded;
}

void LearningActivity::set_isGraded(bool m_isGraded)
{
	isGraded = m_isGraded;
}

float LearningActivity::get_itemGrade()
{
	return itemGrade;
}

void LearningActivity::set_itemGrade(float m_itemGrade)
{
	itemGrade = m_itemGrade;
}