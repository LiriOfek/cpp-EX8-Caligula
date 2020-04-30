/********************************************************\
File Name: test_ids_sort.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions that test the
			functions that sort vector of array in ascending and descending
			order, with and without using reverse function
\********************************************************/

#pragma once

#include "sort_ids.h"

const char* const SPACE_BETWEEN_IDS = " ";
const char* const IDS_VECTOR_IN_ASCENDING_SORT_ORDER = "The ids vector in ascending sort: ";

void test_ascending_sort_ids(std::vector<id_t>& ids);
/**
* @brief  test the function that sort the ids vector in ascending order
*			and print the vector after the ascending sort
* @param  INOUT std::vector<id_t>& ids - the ids vector that will be sorted
*			in ascending order
* @return this function has no return value
* @notes  the ids vector change such that it will be sorted in
*			ascending order
* @author  Liri
*/

void print_ids_vector(std::vector<id_t> ids);
/**
* @brief  print the ids in the ids vector
* @param  IN id_t id - the given id that will be prints
* @return this function has no return value
* @notes  call function print_id() for each id in ids vector
* @author  Liri
*/

void print_id(id_t id);
/**
* @brief  print the chars in the given id, without seperating them
* @param  IN id_t id - the given id that will be prints
* @return this function has no return value
* @author  Liri
*/