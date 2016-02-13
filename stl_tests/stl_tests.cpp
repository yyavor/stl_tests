// stl_tests.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"

#include <string>
#include <algorithm>

#include <map>
#include "typeinfo"
#include "genericHeader.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char str[] = "abcabcabc";
	int n = strlen(str);
	replace(str, str + n, 'b', 'q');
	cout << str << endl;

	autoKeyword();
	testFunctionTemplate();

	char a[] = "";
	cin >> a;
	return 0;
}

void autoKeyword()
{
	cout << "\n//auto keyword" << endl;

	auto var = 10;
	cout << typeid(var).name() << endl;

	map<string, int> devPlace;
	devPlace["Yura"] = 4;
	devPlace["Misha"] = 5;
	devPlace["Andriy"] = 10;

	for (auto dev = devPlace.rbegin(); dev != devPlace.rend(); dev++)
	{
		cout << dev->first << ": " << dev->second << endl;
	}
}

void rvalueReference()
{
	
}

