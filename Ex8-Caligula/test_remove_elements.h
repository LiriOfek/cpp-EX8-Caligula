/********************************************************\
File Name: test_remove_elements.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions that test the
			functions that remove elements that equal to given
			value
\********************************************************/

#pragma once

#include "remove_elements_from_ints_vector.h"

const char* const SPACE = " ";
const char* const VECTOR_AFTER_REMOVE_ELEMENTS_EQUAL_TO_NUMBER = "The ints vector after remove the elements that equals to ";
const char* const COLON = ":";
const char* const ELEMENTS_IN_VECTOR = "The given ints vector:";

void print_ints_vector(std::vector<int> ints);
/**
* @brief  print the elements that in the given ints vector
* @param  IN std::vector<int> ints - the vector of ints
* @return this function has no return value
* @author  Liri
*/

void test_remove_elements_equal_to_number(std::vector<int>& ints,
										  int number_that_elements_equal_to_it_will_remove);
/**
* @brief  test the function that remove the elements that equal to the
*			given number from vector, and print the vector
* @param  INOUT std::vector<int> ints - the vector of ints, that the
*			elements equal to the given number will remove
*		  IN int number_that_elements_equal_to_it_will_remove - the number
*			that all the elements that equal to it will be removed from
*			the vector
* @return this function has no return value
* @notes  the given vector will be changed such that alll the elements
*			that equal to the given number will be removed
* @author  Liri
*/

void test_remove_elements_from_vector(std::vector<int>& ints,
									  int number_that_elements_equal_to_it_will_remove);
/**
* @brief  test the functions that remove elements that equals to given
*			number and bigger than given number
* @param  IN std::vector<int> ints - the vector of ints
* @return this function has no return value
* @notes  the given vector changes such that the elements that equal
*		  to given number or bigger than given number are removed
* @author  Liri
*/