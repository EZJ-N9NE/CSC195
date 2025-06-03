#include "Point.h"

void ost::Point::Write(ostream& ostream)
{
	ostream << x << " : " << y << endl;
}

void ost::Point::Add(Point& point)
{
	x += point.x;
	y += point.y;
}

ost::Point ost::Point::operator+(ost::Point& p2)
{
	x += p2.x;
	y += p2.y;
	return Point(x, y);
}

ost::Point ost::Point::operator/(ost::Point point)
{
	//ost::Point point3;
	//point3.x = x / point.x;
	//point3.y = y / point.y;
	//return point3;

	return Point(x - point.x, y - point.y);
}
