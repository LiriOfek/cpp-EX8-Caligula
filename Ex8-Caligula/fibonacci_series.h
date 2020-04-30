/********************************************************\
File Name: fibonacci_series.h
Author: Liri (28/4/2020)
Purpose: this header file contain declaration of functions that
			calculate n's element in fibonacci series and function that
			fill vector of fibonacci series in given size
\********************************************************/

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

void fill_fibonnacci_series(std::vector<int>& fib);
/**
* @brief  fill fibonacci serius in the given vector according to its
*			size
* @param  INOUT std::vector<int>& fib - the vector that will contain
*			the values of fibonacci seris, according to its size
* @return this function has no return value
* @notes  the given vector change to be the fibonacci series, according
*			to its size. this function assume that the given vector
*			init such that every elemen equals to its index
* @author  Liri
*/

int calculate_element_in_fibonacci_series(int n);
/**
* @brief  calculate the n's element in fibonacci series according
*			to formula to calculate n's element in fibonacci series
* @param  IN int n - the number of the element in fiboncci series that
*			need to be calculate
*		  OUT the value of the n's element in fibonacci serius
* @return the value of the n's element in fibonacci series
* @author  Liri
*/