#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Write(string& text, ostream& ostream)
{
	ostream << text;
}

int main()
{
	string text = "Hello World\n";
	cout << text;

	//cin >> text;

	getline(cin, text);
	//cout << text;

	/*time_t start = time(NULL);

	for (int i = 0; 1 < 10; i++)
	{
		Write(text, cout);
	}

	time_t end = time(NULL);

	cout << "Total time for pass-by-value method call:" << end - start << endl;*/

	// output to file
	ofstream output("data.txt");
	//output << text;
	Write(text, output);
	output.close();

	text = "";
	string text2 = "";
	//Input froim file
	ifstream input("data.txt");
	//input >> text;
	getline(input, text);
	getline(input, text2);
	input.close();

	cout << "Read from file: " << text << endl;
	cout << "Read from file: " << text2 << endl;

}