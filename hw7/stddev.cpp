// ********************************************************************
// File: stddev.cpp
// Author: Kirk Saunders, ks825016@ohio.edu
// School: Ohio University EECS
// Last modified: 3/4/2019
// File description: This file implements the stddev function that
//                   takes a variable number of integers and calculates
//                   their standard deviation from.
// ********************************************************************
#include "stddev.hpp"

#include <cmath>
#include <cstdarg>

double stddev(unsigned int count, ...) {
	if (count == 0) {
		throw "Unable to calculate standard deviation, count=0 results in divide by zero";
	}

	va_list args;
	va_start(args, count);
	// create copy so we can use it down below
	va_list args_copy;
	va_copy(args_copy, args);

	int sum = 0;
	for (unsigned int i = 0; i < count; ++i) {
		sum += va_arg(args, int);
	}

	va_end(args);

	double mean = static_cast<double>(sum) / count;
	double dev = 0;
	for (unsigned int i = 0; i < count; i++) {
		double dif = va_arg(args_copy, int) - mean;
		dev += dif * dif;
	}

	va_end(args_copy);

	return sqrt(dev / count);
}