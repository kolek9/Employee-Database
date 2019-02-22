// Kole Keeney
// Assignment 3
// 2/27/2018
// Due 3/4/18

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>
#include "members.h"
using namespace std;

class Student : public Members {
//new private major variable
private:
	string major;
//class member functions and constructors
public:
	Student();
	Student(const string & firstname, const string & lastname, int idnum, string themajor);
	void printMember() const;
	void readWriteMembers(ifstream& instream, ofstream & outstream);
	string getMajor();
	void setMajor(string major);
};


#endif
