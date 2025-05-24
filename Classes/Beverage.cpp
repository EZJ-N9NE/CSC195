#include "Beverage.h"

void Beverage::Read(ostream& ostream, istream& istream)
{
	ostream << "Enter name: ";
	istream >> m_name;

	ostream << "Enter temperature: ";
	istream >> m_temperature;
}

void Beverage::Write(ostream& ostream)
{
	ostream << "Name: " << m_name << endl;
	ostream << "Temperature: " << m_temperature << endl;
}
