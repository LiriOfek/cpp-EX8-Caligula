/********************************************************\
File Name: sort_ids.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions that sort
			vector of arrays in ascending order and descending order
			using reverse function
\********************************************************/

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <array>

const int ID_LENGTH = 8;

using id_t = std::array<char, ID_LENGTH>;

void ascending_sort_ids_vector(std::vector<id_t> &ids);
/**
* @brief  sort the ids vector in ascending order of the ascii value of
*			the chars in the ids
* @param  INOUT std::vector<id_t> &ids - the vector of ids, that
*				in the function changed such that the ids will be sort
*				in ascending order of the chars in the ids
* @return this function has no return value
* @notes  ids change in the function such it will be sort in ascending
*			order of the chars in the ids
* @author  Liri
*/

void descending_sort_ids_vector_with_reverse(std::vector<id_t> &ids);
/**
* @brief  sort the ids vector in descending order of the ascii value of
*			the chars in the ids, by using reverse function
* @param  INOUT std::vector<id_t> &ids - the vector of ids, that
*				in the function changed such that the ids will be sort
*				in descending order of the chars in the ids, by using
*				reverse function
* @return this function has no return value
* @notes  ids change in the function such it will be sort in descending
*			order of the chars in the ids
* @author  Liri
*/

void descending_sort_ids_vector_without_reverse(std::vector<id_t> &ids);
/**
* @brief  sort the ids vector in descending order of the ascii value of
*			the chars in the ids, without using reverse function
* @param  INOUT std::vector<id_t> &ids - the vector of ids, that
*				in the function changed such that the ids will be sort
*				in descending order of the chars in the ids, without using
*				reverse function
* @return this function has no return value
* @notes  ids change in the function such it will be sort in descending
*			order of the chars in the ids
* @author  Liri
*/