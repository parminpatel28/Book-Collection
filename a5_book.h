//**************************************************************
//  Student Name: Parmin Patel && Darren Choi
//  Student Number:  20900440 && 20876806
//  SYDE 121 Lab: Assignment: #5
//  Filename: a5_book.h
//  We hereby declare that this code, submitted for credit for the course
//  SYDE121, is a product of my own efforts.  This coded solution has
//  not been plagiarized from other sources and has not been knowingly
//  plagiarized by others.
//  Project:  Library Book Insertion and Removal
//  Purpose: Defines and initializes the book class
//  Due Date:  Friday, Nov 20th, 2020
//**************************************************************

#ifndef books_hpp
#define books_hpp
#include <iostream>
#include <string>

using namespace std;
class Book {
private:
	string author;
	string publication_date;
	string title;
public:
	Book();

	Book(string new_title, string new_author, string new_date);

	Book(string new_title, string new_authour);
	
	Book(string new_title);

	string get_title();

	string get_date();
	
	string get_author();
		
	void print();
};

#endif

