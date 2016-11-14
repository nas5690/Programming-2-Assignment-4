#pragma once
#include "employee.h"
#include <iostream>

#define NO_OF_TEACHERS 3

using namespace std;

class Teacher : public Employee
{
private: 
	int ID = 0; 

public: 
	string teach_course = " ";
	Teacher();
	Teacher(int I, string tc);
	void print();
	void set_teachcourse(string tc);
	void set_ID(int I);
	string get_teach_course();
	int get_ID();
};

Teacher::Teacher()
{}

Teacher::Teacher(int I, string tc)
{
	ID = I;
	teach_course = tc;
}

void Teacher::print()
{
	Employee::print(); //will print Name, Age, SSN
	cout << "ID: " << ID << endl;
	cout << "Teacher Course: " << teach_course << endl;
}

void Teacher::set_teachcourse(string tc)
{
	teach_course = tc;
}

void Teacher::set_ID(int I)
{
	ID = I;
}

string Teacher::get_teach_course()
{
	return this->teach_course;
}

int  Teacher::get_ID()
{
	return this->ID;
}


