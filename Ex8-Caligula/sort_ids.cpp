/********************************************************\
File Name: sort_ids.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that sort vector of arrays
			in ascending order and descending order using reverse function
\********************************************************/

#include "sort_ids.h"

void ascending_sort_ids_vector(std::vector<id_t> &ids) {
	std::sort(ids.begin(), ids.end());
}

void descending_sort_ids_vector_with_reverse(std::vector<id_t> &ids) {
	std::sort(ids.begin(), ids.end());
	std::reverse(ids.begin(), ids.end());
}