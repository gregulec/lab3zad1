#include "Shape.h"
#include <iostream>
#include <string>
using namespace std;

Shape::Shape(){
	cout << "konstrukor dymyslny Shape" << endl;
}

Shape::Shape(string name): name(name){
	cout << "konstruktor Shape" << endl;
}

Shape::~Shape(){
	cout << "dekontruktor Shape" << endl;
}

void Shape::setName(string name){
	cout << "Podaj name: ";
	cin >> name;
	Shape::name = name;
}
string Shape::getname(){
	return name;
}