// Problem6-3_MaximumOfIntegers.c : Defines the entry point for the console application.
//

#include "stdafx.h"


int main( void )
{
	size_t count;
	scanf_s( "%zu", &count );
	int maximum = _find_maximum_int( stdin, count );
	printf( "%d", maximum );
    return 0;
}

