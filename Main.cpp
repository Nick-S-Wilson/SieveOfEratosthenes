#include "Header.h"
#include <iostream>

using namespace std;

int main()
{
	// declarations
	bool * testArr[100];
	int * testArr2[100];
	int * testArr3[100];


	arrayClass Mainarr; // creates new array and sets it to false

	Mainarr.input(); // user sets max


	Mainarr.prime(testArr[100]); // finds all of the primes

	Mainarr.outPrime(testArr2[100]); // moves primes into second array

	Mainarr.output(testArr3[100]); // outputs the primes stored in the second array

	system("pause");
	return 0;

}