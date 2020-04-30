/********************************************************\
File Name: remove_elements_from_int_vector.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that remove elements that
			equal to given value using algorithm
\********************************************************/

#include "remove_elements_from_ints_vector.h"

void remove_elements_equal_to_value(std::vector<int>&ints, int value) {
	ints.erase(std::remove(ints.begin(),
						   ints.end(),
						   value),
			   ints.end());
}