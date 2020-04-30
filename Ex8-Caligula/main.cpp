/********************************************************\
File Name: main.cpp
Author: Liri (28/4/2020)
Purpose: This file initiate vectors and call to the function that test the
			function that remove elements from the vector that equal or bigger
			than given number, sort vector of arrays in ascending order 
			and descending order with and without reverse function, check
			if given vector has even element in given boundaries, and fill
			vector with elements of fibonacci elements in given size
\********************************************************/

#include "test_remove_elements.h"
#include "test_ids_sort.h"
#include "test_is_there_even_element.h"
#include "test_fibonacci_series.h"

int main() {
	/**
	* @brief  test functions that remove elements from vector that equal or
	*			bigger than given number, sort vector of arrays in ascending
	*			order and descending order with and without reverse function,
	*			function that check if given vector has even element in given
	*			boundaries and function that fill fibonacci vector in given size
	* @return this function has no return value
	* @notes  the ints vector change such that all the elements than equal to 1 
	*			or bigger than 5 are removed  from the vector, the vector of ids 
	*			changed such that it will be sort in descending oeder, fibonacci 
	*			vector will fill to contain 12 elements of fibinacci series
	* @author  Liri
	*/
	std::vector<int> ints({ 1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10 });
	int number_that_elements_equal_to_it_will_remove = 1;
	int number_that_elements_bigger_than_it_will_remove = 5;

	std::vector<id_t> ids({ { '1', '6', '1', '4', '5', '3', '3', '3' },
		{ '1', '5', '2', '2', '2', '1', '1', '1' },
		{ '3', '7', '3', '2', '2', '2', '2', '2' } });

	std::vector<int> vec({ 1, 9, 15, 23, 101, 200 });
	int lowerBoundary = 4;
	int upperBoundary = 90;

	std::vector<int> fib{ 1, 1 };
	int size_of_fibonacci_serius = 12;

	test_remove_elements_from_vector(ints,
									 number_that_elements_equal_to_it_will_remove,
								     number_that_elements_bigger_than_it_will_remove);

	test_sort_vector_of_array(ids);

	test_is_there_even_element_in_vector(vec,
										 lowerBoundary,
										 upperBoundary);
	test_fibonacci(fib, size_of_fibonacci_serius);

	return 0;
}