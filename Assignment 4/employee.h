#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private: 
	string name = " ";
	int SSN = 0; 

protected: 
	int age = 0;

public: 
	Employee();
	Employee(string na, int S, int ag);
	void print();
	void set_name(string na);
	void set_age(int ag);
	void set_SSN(int S);
	string get_name();
	int get_age();
	int get_SSN();
};

Employee::Employee()
{}

Employee::Employee(string na, int S, int ag)
{
	name = na;
	SSN = S;
	age = ag;
}

void Employee::print()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "SSN: " << SSN << endl;
}

void Employee::set_name(string na)
{
	name = na;
}

void Employee::set_age(int ag)
{
	age = ag;
}

void Employee::set_SSN(int S)
{
	SSN = S;
}

string Employee::get_name()
{
	return this-> name;
}

int Employee::get_age()
{
	return this->age;
}

int Employee::get_SSN()
{
	return this->SSN;
}
