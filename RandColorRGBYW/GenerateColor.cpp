#include "GenerateColor.h"

using namespace std;


int a = 1;



int CRand()
{
	//srand(time(NULL));

	a = rand() % 7;	// [0-7)
	

	return a;
}