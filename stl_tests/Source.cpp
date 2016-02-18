#include "stdafx.h"
#include "genericHeader.h"
#include <string>


class Dev
{
public:
	Dev(int iPlaceNumber, string sName) : iWorkPlace(iPlaceNumber), sDevName(sName) {};
	string GetDevName() { return sDevName; };
	int GetDevPlace() { return iWorkPlace; };
private:
	int iWorkPlace;
	string sDevName;
};

void initializerListTest()
{
	cout << "\n//initializerListTest" << endl;
	Dev Yura(5, "Yura");
	cout << "dev name: " << Yura.GetDevName() << " dev place: " << Yura.GetDevPlace() << endl;
}