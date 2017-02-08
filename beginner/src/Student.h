/*
 * Student.h
 *
 *  Created on: Feb 7, 2017
 *      Author: psycheyyy
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
	public:
		//Constructor
		Student();
		//Overloaded Constructor
		Student(string, string, int, string);
		//Destructor
		~Student();

		//Mutator functions
		//const will not modify any of the member variables
		string getfname() const;
		string getlname() const;
		int getage() const;
		string getprofession() const;

		void setfname(string fname);
		void setlname(string lname);
		void setage(int age);
		void setprofession(string job);
		void printstuff();

	private:
		string firstname;
		string lastname;
		int age;
		string profession;
};

#endif /* STUDENT_H_ */
