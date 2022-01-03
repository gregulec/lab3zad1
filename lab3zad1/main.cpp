#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include <string>
using namespace std;

int main(){
	{
		Rectangle rectangle("prostokat", 7.0, 2.0);
		cout << rectangle.area() << " " << rectangle.getname() << endl;
		Square square("kwadrat", 2.0);
		cout << square.area() << " " << square.getname() << endl;
		Rectangle& rectangle2 = square;
		cout << rectangle2.area() << " " << rectangle2.getname() << endl;
		Shape *shape;
		shape = &square;
		cout << shape->area() << " " << shape->getname() << endl;
		shape = &rectangle;
		cout << shape->area() << " " << shape->getname() << endl;
		square = (Square*)rectangle;
	}
}