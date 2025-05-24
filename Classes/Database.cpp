#include "Database.h"
#include "Beverage.h"
#include "Coffee.h"
#include "Tea.h"

Database::~Database()
{
	for (auto animal : m_beverage) {
		delete animal;
	}
}

void Database::Create(Beverage::eType type)
{
	Beverage* beverage = nullptr;
	switch (type)
	{
	case Beverage::eType::COFFEE:
		beverage = new Coffee;
		break;
	case Beverage::eType::TEA:
		beverage = new Tea;
		break;
	default:
		break;
	}

	beverage->Read(cout, cin);

	m_beverage.push_back(beverage);
}

void Database::DisplayAll()
{
	for (auto beverage : m_beverage) {
		beverage->Write(cout);
	}
}

void Database::Display(const std::string& name)
{
	for (auto beverage : m_beverage) {
		if (beverage->GetName() == name) {
			beverage->Write(cout);
			return;
		}
	}
	cout << "Beverage not found." << endl;
}

void Database::Display(Beverage::eType type)
{
	for (auto beverage : m_beverage) {
		if (beverage->GetType() == type) {
			beverage->Write(cout);
			return;
		}
	}
	cout << "Beverage not found." << endl;
}
