//============================================================================
// Name        : C++.cpp
// Author      : Enrico Aquilina
// Version     :
// Copyright   : Enrico 2017
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Student.h"
#include "omp.h"
using namespace std;

int sum(int a, int b) {
	return (a+b);
}

void swapbyval(int a, int b) {
	int temp;

	temp = a;
	a=b;
	b=temp;
}

void swapbyref(int &a, int &b) {
	int temp;

	temp = a;
	a=b;
	b=temp;
}

int main() {
	//////////////////////////////////////////////////////////////////////////
	//Addition of 2 integers
	/*int n1, n2;

	cout<<"Enter 2 numbers:";
	cin>>n1>>n2;

	int n3 = n1 + n2;

	cout<<"\nSum of the 2 numbers is "<<n3;*/
	//////////////////////////////////////////////////////////////////////////
	//Average movie rating
	/*char movie1[20], movie2[20], movie3[20];
	int rating1, rating2, rating3;

	cout<<"Enter three movies:";
	cin>>movie1>>movie2>>movie3;
	cout<<"Now please enter their ratings:";
	cin>>rating1>>rating2>>rating3;

	int tot = rating1 + rating2 + rating3;
	float average_rating = tot / 3.0;

	cout<<"The average rating of the movies you provided is "<<average_rating;*/
	//////////////////////////////////////////////////////////////////////////
	//For loop fun
	/*for(int i=1;i<=10;i++)
	{
		cout<<i<<endl;
	}*/
	//////////////////////////////////////////////////////////////////////////
	//More random for loop fun
	/*for(int i=1;i<=10;i++){
		cout<<"\n";
		for(int j=1;j<=i;j++){
			cout<<" * ";
		}
	}*/
	//////////////////////////////////////////////////////////////////////////
	//Functions in C++
/*	int n1, n2;

	cout<<"Enter 2 numbers:";
	cin>>n1>>n2;

	int n3 = sum(n1, n2);

	cout<<"\nSum of the 2 numbers is "<<n3;*/
	//////////////////////////////////////////////////////////////////////////
	//Passing by value and by reference
	/*int n1, n2;

	cout<<"Enter 2 numbers:";
	cin>>n1>>n2;

	cout<<"Before swapping"<<endl;
	cout<<"First number is "<<n1<<" and second number is "<<n2<<endl;

	swapbyval(n1,n2);
	cout<<"After swapping by value"<<endl;
	cout<<"First number is "<<n1<<" and second number is "<<n2<<endl;

	swapbyref(n1, n2);
	cout<<"After swapping by reference"<<endl;
	cout<<"First number is "<<n1<<" and second number is "<<n2<<endl;*/
	//////////////////////////////////////////////////////////////////////////
	//Dynamic memory allocation for arrays
	/*int *array, size;
	cout<<"Enter size for array"<<endl;
	cin>>size;

	array = new int[size];
	//fill the array in
	cout<<"Please fill in the array with "<<size<<" elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>array[i];
	}

	cout<<"Elements of array are: "<<endl;
	for(int i=0;i<size;i++){
		if(i!=size-1)
			cout<<array[i]<<",";
		else
			cout<<array[i]<<endl;
	}

	cout<<"Elements of array in reverse are: "<<endl;
	for(int j=size-1;j>=0;j--){
		if(j!=0)
			cout<<array[j]<<",";
		else
			cout<<array[j];
	}
	delete array;*/
	//////////////////////////////////////////////////////////////////////////
	//Classes examples
	//Student stud;
	/*Student stud("Enrico", "Aquilina", 24, "Developer");
	Student *pointer = &stud;
	//arrow member selection operator to select functions from custom object in mem
	pointer->printstuff();*/
	//////////////////////////////////////////////////////////////////////////
	return 0;
}
