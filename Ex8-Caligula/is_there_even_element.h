/********************************************************\
File Name: is_there_even_element.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions
			that check if number is even and if there is even number in
			given vector boundaries
\********************************************************/

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

const int EVEN = 2;
const int NEXT_ELEMENT = 1;

bool is_there_even_element_in_vector_boundaries(std::vector<int>& vec,
												int lowerBound,
												int upperBound);
/**
* @brief  check if there is even element in the vector elements boundarirs
*			that start in the first element that bigger or equal to lowerBound,
*			and end in the first element that bigger than upperBound
* @param  IN std::vector<int>&ints - the vector of ints, that
*				in the function check if there is even element in its
*				given boundaries
*		   IN int lowerBound - the given lower boundary of the vector
*		   IN int upperBound - the given upper boundary of the vector
*		   OUT true - if there is even element in the vector elements boundaries
*					that start in the first element that bigger or equal to lowerBound,
*					and end in the first elemnt that bigger than upperBound
*		   false - otherwise
* @return true - if there is even element in the vector elements boundaries
*					that start in the first element that bigger or equal to lowerBound,
*					and end in the first elemnt that bigger than upperBound
*		   false - otherwise
* @author  Liri
*/

bool even(int element);
/**
* @brief  check if the given element is even
* @param  IN int element - the given element, to check if is even
*		   OUT bool true - if the elemnt is even,
*					false - otherwise
* @return true - if the element is even,
*		   false - otherwise
* @author  Liri
*/