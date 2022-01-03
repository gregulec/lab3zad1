#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape{
protected:
	string name;
public:
	Shape();
	Shape(string name);
	~Shape();
	void setName(string name);
	string getname();
	virtual double area()=0;
};

