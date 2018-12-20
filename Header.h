#pragma once
#ifndef _arrayClass
#define _arrayClass



class arrayClass
{
private:
	bool arr[100] = { false };
	int outArr[100];
	int max;

public:
	arrayClass();

	void input();
	void prime(bool arrPrime[100]);
	void outPrime(int arrOut[100]);
	void output(int arrOutput[100]);


};

#endif
