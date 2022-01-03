#pragma once
#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

class Rectangle:public Shape{
protected:
	double width;
	double height;
public:
	Rectangle(string name, double width, double height);
	~Rectangle();
	virtual double area();
};

