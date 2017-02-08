//============================================================================
// Name        : openmp.cpp
// Author      : Enrico Aquilina
// Version     :
// Copyright   : Enrico 2017
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "omp.h"
using namespace std;

int main() {

	#pragma omp parallel
	{
		int ID = omp_get_thread_num();
		printf("hello(%d)", ID);
		cout<<"world"<<ID<<endl;
	}
}
