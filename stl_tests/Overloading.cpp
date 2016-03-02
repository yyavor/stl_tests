#include "stdafx.h"
#include "Overloading.h"
#include "genericHeader.h"

Employee::Employee(){}

Employee::Employee(int iAge)
{
	age = iAge;
}

Employee::Employee(int iAge, int iId)
{
	age = iAge;
	id = iId;
}

Employee Employee::operator+(Employee secondEmployee)
{
	Employee newEmployee;
	newEmployee.age = age + secondEmployee.age;
	return (newEmployee);
}

void testOverloading()
{
	cout << "\n//testOverloading" << endl;

	Employee employyeDefaultContr = Employee();
	Employee employyeCustomAgeContr = Employee(50);
	Employee employyeCustomAgeAndIdContr = Employee(20, 0);

	cout << "employyeDefaultContr" << endl;
	cout << "Age: " << employyeDefaultContr.age << " ID: " << employyeDefaultContr.id << endl;
	cout << "employyeCustomAgeContr" << endl;
	cout << "Age: " << employyeCustomAgeContr.age << " ID: " << employyeCustomAgeContr.id << endl;
	cout << "employyeCustomAgeAndIdContr" << endl;
	cout << "Age: " << employyeCustomAgeAndIdContr.age << " ID: " << employyeCustomAgeAndIdContr.id << endl;

	employyeDefaultContr = employyeCustomAgeContr + employyeCustomAgeAndIdContr;

	cout << "employyeDefaultContr operator overload" << endl;
	cout << "Age: " << employyeDefaultContr.age << " ID: " << employyeCustomAgeAndIdContr.id << endl;
}