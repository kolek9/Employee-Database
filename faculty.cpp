// Kole Keeney
// Assignment 3
// 2/27/2018
// Due 3/4/18

#include "stdafx.h"
#include "faculty.h"
#include <iostream>
using namespace std;

//Faculty default constructor implementation which sets the names, ID, and salary to zero or an empty string
Faculty::Faculty() {
	firstName = "";
	lastName = "";
	idNum = 0;
	salary = 0.0;
}
//Faculty constructor which calls Members constructor to set the first name, last name, and ID and then sets the salary based on parameters
Faculty::Faculty(const string & firstname, const string & lastname, int idnum, double thesalary) : Members(firstname, lastname, idnum)
{
	salary = thesalary;
}
//function that outputs the names, ID and salary of a faculty object
void Faculty::printMember() const {
	cout << "The faculty name is: " << firstName << " " << lastName << ". ID is: " << idNum << ". Salary is: " << salary << endl;
}
//Function that writes all the faculty and their info to a new file
void Faculty::readWriteMembers(ifstream& instream, ofstream & outstream) {
	string a;
	//loop that reads to end of file and only outputs faculty
	while (!instream.eof()) {
		instream >> a;
		if (a == "f") {
			instream >> firstName >> lastName >> idNum >> salary;
			outstream << "Faculty name is: " << firstName << " " << lastName << ". ID is: " << idNum << ". Salary is: " << salary << endl;
		}
	}
}
//getter for the salary
double Faculty::getSalary() {
	return salary;
}
//setter for the salary
void Faculty::setSalary(double thesalary) {
	salary = thesalary;
}