/********************************************************\
File Name: test_remove_elements.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that test the functions that remove
			elements that equal or bigger than given value
\********************************************************/

#include "test_remove_elements.h"

void test_remove_elements_from_vector(std::vector<int>& ints,
									  int number_that_elements_equal_to_it_will_remove) {
	std::cout << ELEMENTS_IN_VECTOR
			  << std::endl;
	print_ints_vector(ints);

	test_remove_elements_equal_to_number(ints,
										 number_that_elements_equal_to_it_will_remove);
}

void test_remove_elements_equal_to_number(std::vector<int>& ints,
										  int number_that_elements_equal_to_it_will_remove) {
	std::cout << VECTOR_AFTER_REMOVE_ELEMENTS_EQUAL_TO_NUMBER
			  << number_that_elements_equal_to_it_will_remove
			  << COLON
			  << std::endl;
	remove_elements_equal_to_value(ints,
								   number_that_elements_equal_to_it_will_remove);
	print_ints_vector(ints);
}

void test_remove_elements_bigger_than_number(std::vector<int>& ints,
											 int number_that_elements_bigger_than_it_will_remove) {
	std::cout << VECTOR_AFTER_REMOVE_ELEMENTS_BIGGER_THAN_NUMBER
			  << number_that_elements_bigger_than_it_will_remove
			  << COLON
			  << std::endl;
	remove_elements_bigger_than_value(ints,
									  number_that_elements_bigger_than_it_will_remove);
	print_ints_vector(ints);
}

void print_ints_vector(std::vector<int> ints) {
	for (int element : ints) {
		std::cout << element << SPACE;
	}
	std::cout << std::endl;
}
