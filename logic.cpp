#include <iostream>

int amount_of_even_elements(int* vector, int size) {
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(vector + i) % 2 == 0) {
			count++;
		}
	}

	return count;
}

double find_avg_arithmetical(int* vector, int size) {
	double sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += *(vector + i);
	}

	return sum / size;
}

int sum_elements_below_avg(int* vector, int size, double avg) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (abs(*(vector + i)) < avg) {
			sum += *(vector + i);
		}
	}

	return sum;
}

int product_even_postition_positive_elements(int* vector, int size) {
	int product = 1;

	for (int i = 1; i < size; i += 2)
	{
		if (*(vector + i) > 0) {
			product *= *(vector + i);
		}
	}

	return product;
}