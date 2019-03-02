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