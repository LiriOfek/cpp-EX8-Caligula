/********************************************************\
File Name: test_ids_sort.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions that test the
			functions that sort vector of arrays in ascending order and 
			descending order with and without reverse function
\********************************************************/

#pragma once

#include "sort_ids.h"

const char* const SPACE_BETWEEN_IDS = " ";
const char* const IDS_VECTOR_IN_ASCENDING_SORT_ORDER = "The ids vector in ascending sort: ";
const char* const IDS_VECTOR_ELEMENTS = "The given ids vector: ";
const char* const IDS_VECTOR_IN_DESCENDING_SORT_ORDER_USING_REVERSE = "The ids vector in descending sort after using reverse: ";
const char* const IDS_VECTOR_IN_DESCENDING_SORT_ORDER_WITHOUT_REVERSE = "The ids vector in descending sort without using reverse: ";

void test_sort_vector_of_array(std::vector<id_t>& ids);
/**
* @brief  test the functions that sort the ids vector in ascending order
*			and descending order with and without reverse functions
* @param  INOUT std::vector<id_t>& ids - the ids vector that will be sorted
*			in ascending order and in the end will be sorted in descending order
* @return this function has no return value
* @notes  the ids vector change such that it will be sorted in
*			descending order
* @author  Liri
*/

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

void test_descending_sort_ids_with_reverse(std::vector<id_t>& ids);
/**
* @brief  test the function that sort the ids vector in descending order
*			using reverse function and print the vector after the
*			descending sort
* @param  INOUT std::vector<id_t>& ids - the ids vector that will be sorted
*			in descending order
* @return this function has no return value
* @notes  the ids vector change such that it will be sorted in
*			descending order
* @author  Liri
*/

void test_descending_sort_ids_without_reverse(std::vector<id_t>& ids);
/**
* @brief  test the function that sort the ids vector in descending order
*			without using reverse function and print the vector after the
*			descending sort
* @param  INOUT std::vector<id_t>& ids - the ids vector that will be sorted
*			in descending order
* @return this function has no return value
* @notes  the ids vector change such that it will be sorted in
*			descending order
* @author  Liri
*/

void test_print_ids_vector(std::vector<id_t> ids);
/**
* @brief  test the function that print the vector of ids
* @param  INOUT std::vector<id_t> ids - the ids vector
* @return this function has no return value
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