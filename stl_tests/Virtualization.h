#pragma once

class Enemy 
{
public:
	virtual void attack() {};
};

class Ninja: public Enemy 
{
public:
	void attack();
};

class Monster : public Enemy 
{
public:
	void attack();
};

class Cat
{
public:
	Cat()
	{
		cout << "Cat constructor" << endl;
	}
	Cat(int new_value)
	{
		cout << "Cat int constructor" << value << endl;
	}
private:
	int value = 7;
};

class Tiger: Cat {
public:
	Tiger() 
	{
		cout << "Tiger constructor" << endl;
	}
	explicit Tiger(int new_value) : value(new_value) 
	{
		cout << "Tiger int constructor" << value << endl;
	}

private:
	int value = 5;
};
