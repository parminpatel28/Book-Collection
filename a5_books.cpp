//**************************************************************
//  Student Name: Parmin Patel && Darren Choi
//  Student Number:  20900440 && 20876806
//  SYDE 121 Lab: Assignment: #5
//  Filename: a5_books.cpp
//  We hereby declare that this code, submitted for credit for the course
//  SYDE121, is a product of my own efforts.  This coded solution has
//  not been plagiarized from other sources and has not been knowingly
//  plagiarized by others.
//  Project:  Library Book Insertion and Removal
//  Purpose: defining public member functions of the book class
//  Due Date:  Friday, Nov 20th, 2020
//**************************************************************
#include "a5_book.h"
#include <string>
#include <iostream>

//for if a book is initialized without any details given
Book::Book() :
	title("N/A"),
	publication_date("N/A"),
	author("N/A")
	{}

//setter for a book object given all three data strings
Book::Book(string new_title, string new_author, string new_date):
	title(new_title),
	publication_date(new_date),
	author(new_author){}

//setter for a book object given a title and author, sets date to N/A
Book::Book(string new_title, string new_author) :
	author(new_author),
	title(new_title),
	publication_date("N/A"){}

// setter for a book object given just a title, sets author and date to n/a
Book::Book(string new_title) :
	title(new_title),
	author("N/A"),
	publication_date("N/A") {}

//gets the title of a book object
string Book::get_title() {
	return title;
}

//gets the date of a book object
string Book::get_date() {
	return publication_date;
}

//gets the author of a book object
string Book::get_author() {
	return author;
}

// prints the details of the book
void Book::print() {
	cout << "Title: " << title << "| Author: " << author << "| Publication Date: " << publication_date << endl;
}
