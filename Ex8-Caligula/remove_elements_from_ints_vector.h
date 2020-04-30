/********************************************************\
File Name: remove_elements_from_int_vector.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions that remove
			elements that equal or biggrt than given value using
			algorithm
\********************************************************/

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void remove_elements_equal_to_value(std::vector<int>&ints, int value);
/**
* @brief  remove all elements from ints vector that equals to
*			the given value
* @param  INOUT std::vector<int>&ints - the vector of ints, that
*				in the function changed such that all the elements that
*				equals to value are removed
*		   IN int value - the given value that all the elements that equals
*			to it are removed from ints
* @return this function has no return value
* @notes  ints change in the function such that all the elements
*			that equals to the given value are removed
* @author  Liri
*/

bool is_bigger_than_value(int element, int value);
/**
* @brief  remove all elements from ints vector that bigger than
*			the given value
* @param  INOUT std::vector<int>&ints - the vector of ints, that
*				in the function changed such that all the elements that
*				bigger than the given value are removed
*		   IN int value - the given value that all the elements that bigger
*			than it are removed from ints
* @return this function has no return value
* @notes  ints change in the function such that all the elements
*			that bigger than the given value are removed
* @author  Liri
*/