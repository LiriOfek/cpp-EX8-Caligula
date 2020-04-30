/********************************************************\
File Name: test_ids_sort.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that test the functions that sort vector
			of arrays in ascending order and descending order with and without
			reverse function
\********************************************************/

#include "test_ids_sort.h"

void test_sort_vector_of_array(std::vector<id_t>& ids) {

	test_print_ids_vector(ids);

	test_ascending_sort_ids(ids);

	test_descending_sort_ids_with_reverse(ids);

	test_descending_sort_ids_without_reverse(ids);
}

void test_ascending_sort_ids(std::vector<id_t>& ids) {
	std::cout << IDS_VECTOR_IN_ASCENDING_SORT_ORDER << std::endl;
	ascending_sort_ids_vector(ids);
	print_ids_vector(ids);
}

void test_descending_sort_ids_with_reverse(std::vector<id_t>& ids) {
	std::cout << IDS_VECTOR_IN_DESCENDING_SORT_ORDER_USING_REVERSE
		<< std::endl;
	descending_sort_ids_vector_with_reverse(ids);
	print_ids_vector(ids);
}

void test_descending_sort_ids_without_reverse(std::vector<id_t>& ids) {

	std::cout << IDS_VECTOR_IN_DESCENDING_SORT_ORDER_WITHOUT_REVERSE
			  << std::endl;
	descending_sort_ids_vector_without_reverse(ids);
	print_ids_vector(ids);
}

void test_print_ids_vector(std::vector<id_t> ids) {

	std::cout << std::endl
			  << IDS_VECTOR_ELEMENTS
			  << std::endl;
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