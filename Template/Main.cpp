#include <iostream>
#include "TempClass.h"
using namespace std;

namespace awe
{
	/*int max(int i1, int i2)
	{
		return (i1 > i2) ? i1 : i2;
	}

	float max(float i1, float i2)
	{
		return (i1 > i2) ? i1 : i2;
	}*/

	template<typename T, typename D>
	T max(T i1, D i2)
	{
		return (i1 > i2) ? i1 : i2;
	}
}

int main()
{
	cout << awe::max(2.3f, 5.6f) << endl;
	cout << awe::max(2, 5) << endl;
	cout << awe::max(2, 5.6f) << endl;

	TempClass<float> t1(2.3f, 3.6f);

	TempArray<string, 5> strArr;

	strArr[2] = "Hello";
}