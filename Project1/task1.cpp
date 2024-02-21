#include <iostream>
#include <string>

using namespace std;

void random(int* pArray, int size, int start) {


	for (int i = 0; i < size; i++)
	{
		pArray[i] = rand() % (size + 1) + start;
	}
}

string convert_string(int* array, int size) {

	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(array[i]) + " ";
	}
	return msg;
}

int  main() {

	int size = 10;
	int start = 20;
	int* array = new int[size];

	random(array, size, start);

	cout << convert_string;

	return 0;
}