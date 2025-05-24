#include "Coffee.h"

void Coffee::Read(ostream& ostream, istream& istream)
{
	Beverage::Read(ostream, istream);

	ostream << "Enter caffine level in percent: ";
	istream >> m_caffineLevel;
}

void Coffee::Write(ostream& ostream)
{
	Beverage::Write(ostream);

	ostream << "Caffine level in percent: " << m_caffineLevel << endl;
}
