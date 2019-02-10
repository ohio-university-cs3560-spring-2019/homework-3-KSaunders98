/// \file
#include <iostream>
#include <cmath>

/// \brief Calculate the standard deviation of a set of numbers
/// \param a - The array of numbers to calculate the standard deviation of
/// \param n - The size of the set of numbers
/// \return A double precision number of the standard deviation
double deviation( int* a, int n )
{
	int sum = 0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	} 

	double mean = static_cast<double>(sum) / n;
	double stddev = 0;
	for(size_t i = 0; i < n; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean); 
	}

	stddev /= n;
	if(stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
        
	return sqrt(stddev);
}
