// stdafx.cpp : source file that includes just the standard includes
// Problem6-3_MaximumOfIntegers.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


int _find_maximum_int( FILE* _Stream, size_t const _Count )
{
	int integer;
	int maximum;
	for ( size_t i = 0; i < _Count; i++ )
	{
		fscanf_s( _Stream, "%d", &integer );
		if ( i == 0 )
		{
			maximum = integer;
		}
		else
		{
			if ( maximum < integer )
			{
				maximum = integer;
			}
		}
	}
	return maximum;
}

