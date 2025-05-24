#pragma once
#include "Beverage.h"
class Coffee : public Beverage
{
public:
	eType GetType() override { return eType::COFFEE; }

	void Read(ostream& ostream, istream& istream) override;
	void Write(ostream& ostream) override;

protected:
	float m_caffineLevel = 2.2f;
};

