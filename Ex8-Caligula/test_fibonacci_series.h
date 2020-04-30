/********************************************************\
File Name: fibonacci_series.h
Author: Liri (28/4/2020)
Purpose: this header file contain declaration of functions that
			calculate n's element in fibonacci series and function that
			fill vector of fibonacci series in given size
\********************************************************/


#pragma once

#include "fibonacci_series.h"

const char* const SPACE_BETWEEN_ELEMENTS_IN_SERIES = " ";
const char* const FIBONACCI_SERIES_IN_GIVEN_SIZE = "Fibonacci series in size ";
const char* const COLONS = ":";

void test_fibonacci(std::vector<int>& fib, int size_of_fibonacci_serius);
/**
* @brief  test functions that resize the vector to the given size, fill
*			it with the fibonacci elements according to the size, and
*			print the vector of fibonacci elements
* @param  IN std::vector<int>& fib - the vector that will be in the given
*			size with fibonacci elements
*		  IN int size_of_fibonacci_serius - the given size of the fibonacci
*		  series vector
* @return this function has no return value
* @notes  the fibonacci vector change such that it will be in the given size
*			contain the elements of fibonacci series
* @author  Liri
*/

void init_vector_with_elements_equals_to_indexes(std::vector<int>& fib);
/**
* @brief  initialize the given vector - that its elements will be equal
*		   to their indexes
* @param  IN std::vector<int>& fib - the vector of ints that will initate with
*			the indexes of each element
* @return this function has no return value
* @notes  the given vector change in the function such that each element
*			will be the index in the vector
* @author  Liri
*/

void print_fibonacci_vector(std::vector<int> fibonacci_vector);
/**
* @brief  print the elements that in the given ints vector
* @param  IN std::vector<int> ints - the vector of ints
* @return this function has no return value
* @author  Liri
*/

