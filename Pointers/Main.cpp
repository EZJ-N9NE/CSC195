#include <iostream>
#define _CRT  DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
using namespace std;

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };

	int* p = a; // Pointer to the first element of the array

	cout << p << endl;

	p++;
	p++;
	p--;

	cout << *p << endl;

	int* ptHeap = new int;

	cout << "===============================================" << endl;
	cout << ptHeap << endl;
	cout << *ptHeap << endl;

	_CrtDumpMemoryLeaks();
}