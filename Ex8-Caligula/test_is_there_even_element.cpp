/********************************************************\
File Name: test_is_there_even_element.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that test functions that check if number
			is even and if there is even number in given vector boundaries
\********************************************************/

#include "test_is_there_even_element.h"

void print_vec(std::vector<int> vec) {
	for (int element : vec) {
		std::cout << element << SPACE_BETWEEN_ELEMENTS;
	}
	std::cout << std::endl;
}