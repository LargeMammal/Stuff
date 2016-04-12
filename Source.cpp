#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	clock_t t;
	t = clock();
	printf("Hit any key to get time.");
	cin.ignore();
	t = clock() - t;
	printf("Time passed: %d clicks (%f seconds).", t, ((float)t)/CLOCKS_PER_SEC);
	cin.ignore();
}