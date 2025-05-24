#pragma once
#include "Beverage.h"
#include <vector>
using namespace std;

class Database
{
public: 
	~Database();
	void Create(Beverage::eType type);
	void DisplayAll();
	void Display(const string& name);
	void Display(Beverage::eType type);

private:
	vector<Beverage*> m_beverage;
};

