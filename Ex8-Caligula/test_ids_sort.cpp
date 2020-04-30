/********************************************************\
File Name: test_ids_sort.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that test the functions that sort vector
			of array in ascending and descending order, with and without
			using reverse function
\********************************************************/

#include "test_ids_sort.h"

void test_ascending_sort_ids(std::vector<id_t>& ids) {
	std::cout << IDS_VECTOR_IN_ASCENDING_SORT_ORDER << std::endl;
	ascending_sort_ids_vector(ids);
	print_ids_vector(ids);
}

void print_ids_vector(std::vector<id_t> ids) {
	for (unsigned int index_in_ids_vector = 0;
		 index_in_ids_vector < ids.size();
		 index_in_ids_vector++)
	{
		print_id(ids[index_in_ids_vector]);
		std::cout << SPACE_BETWEEN_IDS;
	}
	std::cout << std::endl;
}

void print_id(id_t id) {
	for (unsigned int index_in_id = 0; index_in_id < id.size(); index_in_id++)
	{
		std::cout << id[index_in_id];
	}
}