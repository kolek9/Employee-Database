// Kole Keeney
// Assignment 3
// 2/27/2018
// Due 3/4/18

#ifndef MEMBERS_H
#define MEMBERS_H

#include <string>
#include <fstream>
using namespace std;
class Members{
//protected variables since this is the base class
protected:
	string firstName;
	string lastName;
	int idNum;
//constructors and member functions
public:
	Members();
	Members(const string & firstname, const string & lastname, int idnum);
	virtual void printMember() const;
	virtual void readWriteMembers(ifstream& instream, ofstream & outstream);
	string getFirstName();
	string getLastName();
	int getIdNum();
	void setFirstName(string first);
	void setLastName(string last);
	void setIdNum(int id);
};

#endif
