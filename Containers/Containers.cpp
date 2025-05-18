#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;

// Function to demonstrate std::array usage
void arrayExample() {
    cout << "--- Array Example ---" << endl;

    // Initialize array with days of the week
    array<string, 7> days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    // Print number of elements
    cout << "Number of elements in array: " << days.size() << endl;

    // Print each day
    for (const string& day : days) {
        cout << day << endl;
    }

    cout << endl;
}

// Function to demonstrate std::vector usage
void vectorExample() {
    cout << "--- Vector Example ---" << endl;

    // Initialize vector with five integer values
    vector<int> numbers = { 1, 2, 3, 4, 5 };

    // Add two more integers
    numbers.push_back(6);
    numbers.push_back(7);

    // Remove the last element
    numbers.pop_back();

    // Print contents of the vector
    for (int num : numbers) {
        cout << num << " ";
    }

    cout << endl << endl;
}

// Function to demonstrate std::list usage
void listExample() {
    cout << "--- List Example ---" << endl;

    // Initialize list with three fruit names
    list<string> fruits = { "Apple", "Banana", "Cherry" };

    // Add to front and back
    fruits.push_front("Mango");
    fruits.push_back("Peach");

    // Remove a specific item
    fruits.remove("Banana");

    // Iterate and print using iterator
    for (auto it = fruits.begin(); it != fruits.end(); ++it) {
        cout << *it << endl;
    }

    cout << endl;
}

// Function to demonstrate std::map usage
void mapExample() {
    cout << "--- Map Example ---" << endl;

    // Create map with items and stock
    map<string, int> stock = {
        {"Apples", 10},
        {"Bananas", 5},
        {"Oranges", 8}
    };

    // Update value for one of the keys
    stock["Bananas"] = 7;

    // Print each key-value pair
    for (const auto& pair : stock) {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << endl;
}

int main() {
    arrayExample();
    vectorExample();
    listExample();
    mapExample();

    return 0;
}
