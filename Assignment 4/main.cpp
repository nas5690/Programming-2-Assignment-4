#include "teacher.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	Employee emp1; 

	Teacher t1;
	t1.set_age(30);
	t1.set_ID(12345);
	t1.set_name("John Smith");
	t1.set_SSN(123456789);
	t1.set_teachcourse("Computer Science");
	cout << "Age: " << t1.get_age() << endl;
	cout << "ID: " << t1.get_ID() << endl;
	cout << "SSN: " << t1.get_SSN() << endl;
	cout << "Courses Taught: " << t1.get_teach_course() << endl;
	t1.print();
	

	system("PAUSE");
	return 0;
}