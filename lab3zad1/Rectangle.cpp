#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

Rectangle::Rectangle(string name, double width, double height):Shape(name),width(width),height(height){
	cout << "konstruktor Rectangle" << endl;
}


Rectangle::~Rectangle(){
	cout << "dekontruktor Rectangle" << endl;
}

double Rectangle::area(){
	return width*height;
}