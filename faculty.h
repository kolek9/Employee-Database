// Kole Keeney
// Assignment 3
// 2/27/2018
// Due 3/4/18

#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include <fstream>
#include "members.h"
using namespace std;

class Faculty: public Members{
//new private salary variable
private:
	double salary;
//faculty member functions and constructors
public:
	Faculty();
	Faculty(const string & firstname, const string & lastname, int idnum, double thesalary);
	void printMember() const;
	void readWriteMembers(ifstream& instream, ofstream & outstream);
	double getSalary();
	void setSalary(double thesalary);
};

#endif
