#pragma once
#include <iostream>
using namespace std;

namespace ost
{
	class Point
	{
	public:
		float x, y;

	public:
		//Point() { x = 0; y = 0; }
		Point() : x{ 0 }, y{ 0 } {} //single step process
		Point(float x, float y) : x{ x }, y{ y } {} //member initializer list

		void Write(ostream& ostream);
		void Add(Point& point);

		Point operator + (Point& p2);
		Point operator / (Point point);
	};
}
