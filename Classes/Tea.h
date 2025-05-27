#pragma once
#include "Beverage.h"
class Tea : public Beverage
{
public:
	eType GetType() override { return eType::TEA; }
	void Read(ostream& ostream, istream& istream) override;
	void Write(ostream& ostream) override;
protected:
	bool m_hasMilk = false;
};