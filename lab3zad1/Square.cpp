#include "Square.h"
#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

Square::Square(string name, double width):Rectangle(name, width, width){
	cout << "konstruktor Square" << endl;
}


Square::~Square(){
	cout << "dekonstruktor Square" << endl;
}

double Square::area(){
	return width*width;
}