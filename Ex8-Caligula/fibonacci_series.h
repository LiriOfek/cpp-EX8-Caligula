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