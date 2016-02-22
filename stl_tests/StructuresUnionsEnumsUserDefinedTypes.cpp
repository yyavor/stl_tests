#include "stdafx.h"
#include "genericHeader.h"
#include <string>
#include "typeinfo"

struct devPerson
{
	string sName;
	int iAge;
	double fSalary;
	int iWorkPlace;
};

union myUnion
{
	short someShortVal;
	char someChar;
};

void testStructcETC()
{
	cout << "\n//testStructcETC" << endl;

	devPerson Yura { "Yura", 24, 100.00, 4 };
	cout << "Struct test:\n" 
		<< "Name: " << Yura.sName
		<< "\nAge: " << Yura.iAge
		<< "\nWork place: " << Yura.iWorkPlace
		<< "\nSalary: " << Yura.fSalary
		<< endl;

	cout << "\n\nUnion test:\n" << endl;
	myUnion unionTest;
	unionTest.someShortVal = 0;
	unionTest.someChar = 'y';
	cout << unionTest.someChar << endl;
	cout << unionTest.someShortVal << endl;

	unionTest.someChar = 'j';
	unionTest.someShortVal = 20;
	cout << unionTest.someChar << endl;
	cout << unionTest.someShortVal << endl;

	cout << "\n\nEnum test:\n" << endl;
	enum programLanguages
	{
		cplusplus = 9,
		python,
		php = 1,
		java,
		simplec
	};
	cout << "cplusplus: " << programLanguages::cplusplus << endl;
	cout << "python: " << programLanguages::python << endl;
	cout << "php: " << programLanguages::php << endl;
	cout << "java: " << programLanguages::java << endl;
	cout << "simplec: " << programLanguages::simplec << endl;

	cout << "\n\User defined types test:\n" << endl;
	typedef int CUSTOMUSERTTYPE;
	CUSTOMUSERTTYPE someValue;
	cout << typeid(someValue).name() << endl; //output int

	cout << "\n\nStrongly typed enums test:\n" << endl;
	enum class Enumeration 
	{
		someVal1,
		someVal2,
		someVal3
	};
	cout << typeid(Enumeration::someVal1).name() << endl;
	enum class EnumCust : unsigned int {val1, val2};
	cout << typeid(EnumCust::val1).name() << endl;
}