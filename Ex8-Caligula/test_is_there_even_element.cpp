/********************************************************\
File Name: test_is_there_even_element.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that test functions that check if number
			is even and if there is even number in given vector boundaries
\********************************************************/

#include "test_is_there_even_element.h"

void test_is_there_even_element_in_vector(std::vector<int> vec,
										  int lowerBoundary,
										  int upperBoundary) {
	bool is_there_even_elemnt;

	std::cout << ELEMENTS_IN_GIVEN_VECTOR << std::endl;
	print_vec(vec);

	is_there_even_elemnt = is_there_even_element_in_vector_boundaries(vec,
		lowerBoundary,
		upperBoundary);
	std::cout << IS_THERE_EVEN_ELEMENT
			  << lowerBoundary
			  << COMMA
			  << upperBoundary
			  << QUESTION_MARK
			  << TRUE_OR_FALSE[is_there_even_elemnt]
			  << std::endl
			  << std::endl;
}

void print_vec(std::vector<int> vec) {
	for (int element : vec) {
		std::cout << element << SPACE_BETWEEN_ELEMENTS;
	}
	std::cout << std::endl;
}