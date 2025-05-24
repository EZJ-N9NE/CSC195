#pragma once
#include <iostream>
using namespace std;

class Beverage
{
public:
	enum class eType
	{
		COFFEE = 1,
		TEA
	};

	string GetName() { return m_name; }
	virtual eType GetType() = 0;

	virtual void Read(ostream& ostream, istream& istream);
	virtual void Write(ostream& ostream);



protected:
	string m_name;
	double m_temperature;
};