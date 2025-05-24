#include "Meat.h"

void Meat::Consume()
{
	if (isCooked)
		std::cout << "Sizzle!! Juicy and tender." << std::endl;
	else
		cout << "Raw meat! Not safe to eat." << endl;
}
