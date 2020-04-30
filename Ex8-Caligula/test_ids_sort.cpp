/********************************************************\
File Name: test_ids_sort.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that test the functions that sort vector
			of array in ascending and descending order, with and without
			using reverse function
\********************************************************/

#include "test_ids_sort.h"

void print_id(id_t id) {
	for (unsigned int index_in_id = 0; index_in_id < id.size(); index_in_id++)
	{
		std::cout << id[index_in_id];
	}
}