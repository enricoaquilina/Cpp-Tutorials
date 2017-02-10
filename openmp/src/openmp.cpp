//============================================================================
// Name        : openmp.cpp
// Author      : Enrico Aquilina
// Version     :
// Copyright   : Enrico 2017
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "omp.h"
using namespace std;

int main() {
	double A[1000];
	//create a 4 thread parallel region in the next parallel region
	//i.e. pragma omp parallel

//	omp_set_num_threads(4);
	long num_steps = 10000000;
	double step;
	int i;
	double x, pi, sum, aux = 0.0;

	step = 1.0/(double)num_steps;
	#pragma omp parallel num_threads(8) private(i,x,aux) shared(sum)
	{
	#pragma omp for schedule(static)
//		int cur_id = omp_get_thread_num();
//		printf("\ncur id(%d)",cur_id);
//		printf("\ni->(%d)",i);

		for(i=0;i<num_steps;i++){
			x=(i+0.5)*step;
			aux = 4.0/(1.0+x*x);

	//you can have multple critical regions
	//these allow just 1 thread at a time
	#pragma omp critical nameofcriticalregion
			sum += aux;
			printf("\nsum is %f", sum);
		}
	}
	pi=step*sum;
	cout<<"\nValue of PI is "<<pi<<endl;
}
