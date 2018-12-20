#include "Header.h"
#include <iostream>

using namespace std;

// default constructor
arrayClass::arrayClass()
{
	
}



//declatarions
int index;
int pivot;
int j;
int x = 0;
int counter = 0;
int outputCount;



void arrayClass::input() // user inputs the max value
{
	cout << "Enter a number less than 100: ";
	cin >> max;
	cout << endl << endl;
}


void arrayClass::prime(bool arrPrime[100]) // finds all the prime numbers
{
	for (index = 2; index < max; index++)
	{
		if (arr[index] == false) // checks if the current number has been 'turned off'
		{
			pivot = index;
			int temp = pivot;
			for (j = 0; j < max; j++)
			{
				temp = pivot*pivot + pivot*j;
				if (temp > max)
					break; // makes sure the aray doesn't go over the max value
				arr[temp] = true; // 'turns off' the numbers not prime
			}
		}
	}

}

void arrayClass::outPrime(int arrOut[100]) // moves the primes into a second array
{
	for (index = 2; index < max; index++)
	{

		if (arr[index] == false) // makes sure the current number is a prime by seeing if it is 'turned on'
		{
			outArr[counter] = index;
			counter++;
		}
	}
}

void arrayClass::output(int arrOutput[100]) // outputs the primes stored in the second array
{
	for (outputCount = 0; outputCount < counter; outputCount++)
	{
		cout << outArr[outputCount] << " ";
	}

}


