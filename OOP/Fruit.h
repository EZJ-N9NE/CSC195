#pragma once
#include "Food.h"

class Fruit : public Food
{
public:
	Fruit(int numSeeds) {
		numOfSeeds = numSeeds;
	}
    void Consume() override;
protected:
    int numOfSeeds;
};

