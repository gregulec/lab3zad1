#pragma once
#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

class Square:public Rectangle{
public:
	Square(string name, double width);
	~Square();
	virtual double area();
};

