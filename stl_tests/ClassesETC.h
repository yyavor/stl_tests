#pragma once

class FirstParentClass
{
private:
	int m_iSomeVal;
	int m_iSomeVal2;
public:
	FirstParentClass();
	void SetValues();
	void PrintValues();
};

class ClassSecondParent
{
public:
	ClassSecondParent();

private:
	int m_privateVariable = 100;
protected:
	int m_protectedVariable = 1000;
public:
	int m_publicVariable = 0;
};

class ClassChild : public FirstParentClass, protected ClassSecondParent
{
public:
	ClassChild();
};