#include "stdafx.h"
#include "ClassesETC.h"
#include "genericHeader.h"


SomeFirstTestClass::SomeFirstTestClass()
{
}

SomeFirstTestClass::~SomeFirstTestClass()
{
}

void SomeFirstTestClass::SetValues()
{
	m_iSomeVal = 1;
	m_iSomeVal2 = 2;
}

void SomeFirstTestClass::PrintValues()
{
	cout << "\nSomeFirstTestClass::PrintValues" << endl;
	cout << "m_iSomeVal: " << m_iSomeVal << endl;
	cout << "m_iSomeVal2: " << m_iSomeVal2 << endl;
}

void testClassesETC()
{
	cout << "\n//testClassesETC" << endl;
	SomeFirstTestClass firstTestClass = SomeFirstTestClass();
	firstTestClass.SetValues();
	firstTestClass.PrintValues();
}