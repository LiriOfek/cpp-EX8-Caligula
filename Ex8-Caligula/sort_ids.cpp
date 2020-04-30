/********************************************************\
File Name: sort_ids.cpp
Author: Liri (28/4/2020)
Purpose: This file contain functions that sort vector of arrays
			in ascending order
\********************************************************/

#include "sort_ids.h"

void ascending_sort_ids_vector(std::vector<id_t> &ids) {
	std::sort(ids.begin(), ids.end());
}