#pragma once
#include "Food.h"
class Meat : public Food
{
public:
	Meat() {
		isCooked = false;
	}
	void Consume() override;
protected:
	bool isCooked;
};

