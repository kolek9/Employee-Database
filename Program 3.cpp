// Kole Keeney
// Assignment 3
// 2/27/2018
// Due 3/4/18

#include "stdafx.h"
#include "student.h"
#include "faculty.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	//variables to read and write files
	ifstream fin("input.txt");
	ifstream fin2("input.txt");
	ofstream fout("FacultyOutput.txt");
	ofstream fout2("StudentOutput.txt");

	//If file won't open, display an error message
	if (!fin)
	{
		cout << "Input file not opened!" << endl;
		exit(1);
	}

	//faculty member object which then calls member function to output all of the faculty to a new file
	Faculty f;
	f.readWriteMembers(fin, fout);
	//student member object which then calls member function to output all of the students to a new file
	Student s;
	s.readWriteMembers(fin2, fout2);
	
	//pauses the console
	system("PAUSE");
}

