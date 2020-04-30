/********************************************************\
File Name: main.cpp
Author: Liri (28/4/2020)
Purpose: This file initiate vectors and call to the function that test the
			function that remove elements from the vector that equal to given 
			number
\********************************************************/

#include "test_remove_elements.h"

int main() {
	/**
	* @brief  test functions that remove elements from vector that equal or
	*			bigger than given number, sort vector of arrays in ascending
	*			and descending order, check if there is even element in vector
	*			and calculate fibonacci serius in given size
	* @param  IN std::vector<int>& fib - the vector that will be in the given
	*			size with fibonacci elements
	*		  IN int size_of_fibonacci_serius - the given size of the fibonacci
	*		  series vector
	* @return this function has no return value
	* @notes  the fibonacci vector change such that it will be in the given size
	*			contain the elements of fibonacci series
	* @author  Liri
	*/
	std::vector<int> ints({ 1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10 });
	int number_that_elements_equal_to_it_will_remove = 1;

	test_remove_elements_from_vector(ints,
									 number_that_elements_equal_to_it_will_remove);

}