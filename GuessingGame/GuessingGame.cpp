#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "Welcome to the Guessing Game! Please choose diffuclty: Easy, Medium, Hard" << endl;
	string difficulty;
	cin >> difficulty;
	int randomNumber;
	int maxNumber;
	if (difficulty == "Easy")
	{
		srand(time(0));
		randomNumber = rand() % 10 + 1;
		maxNumber = 10;
	}
	else if (difficulty == "Medium")
	{
		srand(time(0));
		randomNumber = rand() % 30 + 1;
		maxNumber = 30;
	}
	else if (difficulty == "Hard")
	{
		srand(time(0));
		randomNumber = rand() % 50 + 1;
		maxNumber = 50;
	}
	else
	{
		cout << "Invalid difficulty level. Please enter Easy, Medium, or Hard." << endl;
		return 1;
	}
    int number;
   
	for (int i = 0; i < 3; i++) {
		cout << "Enter a number between 1 and " << maxNumber << ": ";
		cin >> number;
		if (number == randomNumber) {
			cout << "Congratulations! You guessed the correct number!" << endl;
			return 0;
		}
		else if (number > randomNumber) {
			cout << "Sorry, too high" << endl;
		}
		else {
			cout << "Sorry, too low" << endl;
		}
	}
	cout << "Sorry, you've used all your attempts. The correct number was " << randomNumber << "." << endl;
	cout << "Thanks for playing!" << endl;
	return 0;
}
