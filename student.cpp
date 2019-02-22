// Kole Keeney
// Assignment 3
// 2/27/2018
// Due 3/4/18

#include "stdafx.h"
#include "student.h"
#include <iostream>
using namespace std;

//student constructor implementation which sets first name, last name, id, and major to zero or an empty string
Student::Student() {
	firstName = "";
	lastName = "";
	idNum = 0;
	major = "";
}
//Student constructor with parameters. Calls the Members class constructor to set the first name, last name, and ID number 
Student::Student(const string & firstname, const string & lastname, int idnum, string themajor) : Members(firstname, lastname, idnum)
{
	major = themajor;
}
//function to print the name, ID, and major of a student object
void Student::printMember() const {
	cout << "The student name is: " << firstName << " " << lastName << ". ID is: " << idNum << ". Major is: " << major << endl;
}
//function that outputs the students names, their ID, and majors to a new file
void Student::readWriteMembers(ifstream& instream, ofstream & outstream) {
	string a;
	//loop to go through file and outputs only the students
	while (!instream.eof()) {
		instream >> a;
		if (a == "s") {
			instream >> firstName >> lastName >> idNum >> major;
			outstream << "Student name is: " << firstName << " " << lastName << ". ID is: " << idNum << ". Major is: " << major << endl;
		}
	}
}
//getter for the major
string Student::getMajor() {
	return major;
}
//setter for the major
void  Student::setMajor(string themajor) {
	major = themajor;
}