#include <iostream>

using namespace std;

void swap(int* a, int* b) {

	int t = *a;
	*a = *b;
	*b = t;
}

int* test1() {//incorrect
	int a = 10;
	return &a;
}

int* test2() {//correct
	int* a = new int;
	*a = 10;
	return a;
}

int* test3() {//correct
	static int a = 10;
	return &a;
}

int main() {

	int* t1 = test1();
	cout << "Value 1 before : " << *t1;
	int* t2 = test2();
	cout << "\nValue 2 before : " << *t2;
	int* t3 = test3();
	cout << "\nValue 3 before : " << *t3;

	int size;
	cout << "\nInput array size : ";
	cin >> size;

	int* pArray = new int[size];

	for (int i = 0; i < size; i++)
	{
		pArray[i] = (i + 1) * 10;
		cout << pArray[i] << " ";
	}

	cout << "\nValue 1 after : " << *t1;
	cout << "\nValue 2 after : " << *t2;
	cout << "\nValue 3 after : " << *t3;

	int c = 10;
	int b = 20;
	swap(&c, &b);
	cout << "\nc = " << c << " b = " << b;

	return 0;
}