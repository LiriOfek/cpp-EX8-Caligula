/********************************************************\
File Name: test_remove_elements.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that test the functions that remove
			elements that equal to given value
\********************************************************/

#include "test_remove_elements.h"

void print_ints_vector(std::vector<int> ints) {
	for (int element : ints) {
		std::cout << element << SPACE;
	}
	std::cout << std::endl;
}