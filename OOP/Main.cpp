#include "Food.h"
#include "Meat.h"
#include <iostream>
using namespace std;

int main()
{
	Food food;

	food.Consume();

	food.SetCalories(25);

	cout << food.GetCalories() << endl;

	Food* pFood = &food;

	(*pFood).Consume();

	cout << "Steak Instance" << endl;
	Meat steak;
	steak.Consume();

}