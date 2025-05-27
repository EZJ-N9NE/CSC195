#include "Tea.h"

void Tea::Read(ostream& ostream, istream& istream)
{
	Beverage::Read(ostream, istream);

	ostream << "Does it have milk? (0 for No, 1 for Yes): ";
	istream >> m_hasMilk;
}

void Tea::Write(ostream& ostream)
{
	Beverage::Write(ostream);

	ostream << "Has milk: " << m_hasMilk << endl;
}
