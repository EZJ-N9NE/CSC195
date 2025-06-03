#include <iostream>
using namespace std;
#include "Point.h"

void print(int x) { cout << x << endl; }
void print(float x) { cout << x << endl; }
void print(bool x) { cout << x << endl; }

void operator << (ostream& ostream, ost::Point& point)
{
	ostream << point.x << " : " << point.y << endl;
};

int main()
{
	cout << "--------------------Funtion Overloads--------------------" << endl;
	print(1);
	print(1.0f);
	print(true);

	cout << "--------------------Operator Overloads--------------------" << endl;
	ost::Point point1(10, 14);
	ost::Point point2(5, 8);

	ost::Point point3;
	point3 = (point2 + point1) / point1;

	cout << point1;
	cout << point2;
	cout << point3;
}