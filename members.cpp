// Kole Keeney
// Assignment 3
// 2/27/2018
// Due 3/4/18

#include "stdafx.h"
#include "members.h"
#include <iostream>
using namespace std;

//default constructor implementation
Members::Members() {
	firstName = "";
	lastName = "";
	idNum = 0;
}
//constructor with parameters implementation
Members::Members(const string & firstname, const string & lastname, int idnum)
{
	firstName = firstname;
	lastName = lastname;
	idNum = idnum;
}
//function that outputs name and ID of member object
void Members::printMember() const
{
	cout << "Name is " << firstName << " " << lastName << ". ID is " << idNum << endl;
}
//readWrite members function, implementation not importatnt since child classes handle it
void Members::readWriteMembers(ifstream & instream, ofstream & outstream)
{
}
//getter for first name
string Members::getFirstName()
{
	return firstName;
}
//setter for first name
void Members::setFirstName(string first)
{
	firstName = first;
}
//getter for last name
string Members::getLastName()
{
	return lastName;
}
//setter for last name
void Members::setLastName(string last)
{
	lastName = last;
}
//getter for ID
int Members::getIdNum()
{
	return idNum;
}
//setter for ID
void Members::setIdNum(int id)
{
	idNum = id;
}

