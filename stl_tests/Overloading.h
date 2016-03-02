#pragma once

class Employee
{
public:
	int age = 100;
	int id;
	Employee();
	Employee(int);
	Employee(int, int);
	Employee operator+(Employee);
};