/********************************************************\
File Name: is_there_even_element.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that check if number is even
			and if there is even number in given vector boundaries
\********************************************************/

#include "is_there_even_element.h"

bool is_there_even_element_in_vector_boundaries(std::vector<int>& vec,
												int lowerBound,
												int upperBound) {
	std::vector<int>::iterator lower_boundary, upper_boundary;
	int position_of_upper_boundary;

	lower_boundary = std::lower_bound(vec.begin(), vec.end(), lowerBound);
	upper_boundary = std::upper_bound(vec.begin(), vec.end(), upperBound);
	position_of_upper_boundary = upper_boundary - vec.begin();

	return(std::any_of(lower_boundary,
					   vec.begin() + position_of_upper_boundary + NEXT_ELEMENT,
					   even));
}

bool even(int element) {
	return (element % EVEN == 0);
}