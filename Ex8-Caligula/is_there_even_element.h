/********************************************************\
File Name: is_there_even_element.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions
			that check if number is even and if there is even number in
			given vector boundaries
\********************************************************/

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

const int EVEN = 2;

bool even(int element);
/**
* @brief  check if the given element is even
* @param  IN int element - the given element, to check if is even
*		   OUT bool true - if the elemnt is even,
*					false - otherwise
* @return true - if the element is even,
*		   false - otherwise
* @author  Liri
*/