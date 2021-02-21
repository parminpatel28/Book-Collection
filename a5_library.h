//**************************************************************
//  Student Name: Parmin Patel && Darren Choi
//  Student Number:  20900440 && 20876806
//  SYDE 121 Lab: Assignment: #5
//  Filename: a5_library.h
//  We hereby declare that this code, submitted for credit for the course
//  SYDE121, is a product of my own efforts.  This coded solution has
//  not been plagiarized from other sources and has not been knowingly
//  plagiarized by others.
//  Project:  Library Book Insertion and Removal
//  Purpose: Initializes the library class
//  Due Date:  Friday, Nov 6th, 2020
//**************************************************************

#ifndef library_hpp
#define library_hpp

#include <vector>
#include <string>
#include "a5_book.h"
class Library {
private:
	vector<Book> book_catalogue;
public:
	Library();

	void add_books(vector<Book> new_books);

	void print_library();
	
	bool erase_book(string title, string author, string publication_date);
	
	bool erase_book(Book erase_book);

	bool insert_book(string title, string author, string publication_date);

	bool insert_book(Book insert_book);
};
#endif

