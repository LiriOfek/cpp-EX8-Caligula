/********************************************************\
File Name: test_is_there_even_element.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions that test functions
			that check if number is even and if there is even number in
			given vector boundaries
\********************************************************/

#pragma once

#include "is_there_even_element.h"

const char* const SPACE_BETWEEN_ELEMENTS = " ";
const char* const TRUE_OR_FALSE[] = { "False", "True" };
const char* const ELEMENTS_IN_GIVEN_VECTOR = "The given vector: ";
const char* const IS_THERE_EVEN_ELEMENT = "Is there even element in vector boundaries: ";
const char* const COMMA = ", ";
const char* const QUESTION_MARK = "? ";

void test_is_there_even_element_in_vector(std::vector<int> vec,
										  int lowerBoundary,
										  int upperBoundary);
/**
* @brief  test the function that check if there is even element in the vector
*			given boundaries and print the vector and if there is/isn't even
*			element in the vector given boundaries.
* @param  IN std::vector<int> vec - the given vector to check if there is
*			even element in it given boundaries
*		  IN int lowerBound - the given lower boundary of the vector
*		  IN int upperBound - the given upper boundary of the vector
* @return this function has no return value
* @author  Liri
*/

void print_vec(std::vector<int> vec);
/**
* @brief  print the elements that in the given ints vector
* @param  IN std::vector<int> ints - the vector of ints
* @return this function has no return value
* @author  Liri
*/
