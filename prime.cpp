// C++ implementation to find sum of largest prime factor 
// of each number less than equal to n 
#include <bits/stdc++.h> 

using namespace std; 

// function to find sum of largest prime factor 
// of each number less than equal to n 
int sumOfLargePrimeFactor(int n) 
{ 
	// Create an integer array "prime[0..n]" and initialize 
	// all entries of it as 0. A value in prime[i] will 
	// finally be 0 if 'i' is a prime, else it will 
	// contain the largest prime factor of 'i'. 
	int prime[n+1], sum = 0; 
	memset(prime, 0, sizeof(prime)); 
	int max = n / 2; 

	for (int p=2; p<=max; p++) 
	{ 
		// If prime[p] is '0', then it is a 
		// prime number 
		if (prime[p] == 0) 
		{ 
			// Update all multiples of p 
			for (int i=p*2; i<=n; i += p) 
				prime[i] = p; 
		} 
	} 

	// Sum up the largest prime factor of all 
	// the numbers 
	for (int p=2; p<=n; p++) 
	{ 
		// if 'p' is a non- prime number then 
		// prime[p] gives its largesr prime 
		// factor 
		if (prime[p]) 
			sum += prime[p]; 
			
		// 'p' is a prime number		 
		else
			sum += p; 
	} 
	
	// required sum 
	return sum;	 
} 

// Driver program to test above 
int main() 
{ 
	int n = 12; 
	cout << "Sum = "
		<< sumOfLargePrimeFactor(n); 
	return 0;		 
} 
