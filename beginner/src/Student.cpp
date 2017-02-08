/*
 * Student.cpp
 *
 *  Created on: Feb 7, 2017
 *      Author: psycheyyy
 */
#include "Student.h"

Student::Student()
{
	firstname = "";
	lastname = "";
	age = 0;
	profession = "";
}

//Student::Student(string fname, string lname, int datewhenborn, string job)
//{
//	firstname = fname;
//	lastname = lname;
//	age = datewhenborn;
//	profession = job;
//}
//the above can also be done using member initializers as well
Student::Student(string fname, string lname, int datewhenborn, string job)
:firstname(fname),
 lastname(lname),
 age(datewhenborn),
 profession(job)
{

}

Student::~Student()
{
//	cout<<"Deconstructing the object now!"<<endl;
}

string Student::getfname() const
{
	return firstname;
}
string Student::getlname() const
{
	return lastname;
}
int Student::getage() const
{
	return age;
}
string Student::getprofession() const
{
	return profession;
}

void Student::setfname(string fname)
{
	firstname = fname;
}
void Student::setlname(string lname)
{
	lastname = lname;
}
void Student::setage(int datewhenborn)
{
	age = datewhenborn;
}
void Student::setprofession(string job)
{
	profession = job;
}
void Student::printstuff()
{
	cout<<getfname()<<" "<<getlname()<<" of age "
			<<getage()<<" is a "<<getprofession()<<endl;
}




