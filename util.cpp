#include <iostream>
#include <string>
using namespace std;

void swap_s(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void random_init(int* array, int size, int start) {
	int n = start;

	for (int i = 0; i < size; i++)
	{
		*(array + i) = n;
		n++;
	}

	for (int i = 0; i < size; i++)
	{
		int first = rand() % size;
		int second = rand() % size;

		swap_s((array + first), (array + second));
	}
}

string output(int* array, int size) {
	string msg = "";
	
	for (int i = 0; i < size; i++)
	{
		msg +=  to_string(*(array + i)) + " ";
	}

	return msg;
}