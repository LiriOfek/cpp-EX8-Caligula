/********************************************************\
File Name: test_fibonacci_series.cpp
Author: Liri (28/4/2020)
Purpose: this file contain functions that test functions that calculate n's
			element in fibonacci series and function that
			fill vector of fibonacci series in given size
\********************************************************/

#include "test_fibonacci_series.h"

void init_vector_with_elements_equals_to_indexes(std::vector<int>& fib) {
	for (unsigned int index = 0; index < fib.size(); index++) {
		fib[index] = index;
	}
}

void print_fibonacci_vector(std::vector<int> fibonacci_vector) {
	for (int element : fibonacci_vector) {
		std::cout << element << SPACE_BETWEEN_ELEMENTS_IN_SERIES;
	}
	std::cout << std::endl;
}

