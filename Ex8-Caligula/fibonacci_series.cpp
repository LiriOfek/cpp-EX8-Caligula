/********************************************************\
File Name: fibonacci_series.cpp
Author: Liri (28/4/2020)
Purpose: this file contain functions that calculate n's element in fibonacci
			series and function that fill vector of fibonacci series in
			given size
\********************************************************/

#include "fibonacci_series.h"

void fill_fibonnacci_series(std::vector<int>& fib) {
	std::transform(fib.begin(),
				   fib.end(),
				   fib.begin(),
				   calculate_element_in_fibonacci_series);
}

int calculate_element_in_fibonacci_series(int n) {
	const double sqrt5 = std::sqrt(5);
	const double phi = (1 + sqrt5) / 2;
	return (int)(std::pow(phi, n + 1) / sqrt5 + 0.5);
}