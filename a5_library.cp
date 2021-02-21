//**************************************************************
//  Student Name: Parmin Patel && Darren Choi
//  Student Number:  20900440 && 20876806
//  SYDE 121 Lab: Assignment: #5
//  Filename: a5_main
//  We hereby declare that this code, submitted for credit for the course
//  SYDE121, is a product of my own efforts.  This coded solution has
//  not been plagiarized from other sources and has not been knowingly
//  plagiarized by others.
//  Project:  Library Book Insertion and Removal
//  Purpose: Defines the public member functions for the library class
//  Due Date:  Friday, Nov 6th, 2020
//**************************************************************
#include "a5_library.h"

//initializes a library object with a empty book catalogue when a library initialized
Library::Library():
	book_catalogue() {}
    
//when given a vector, the for loop iterates through the book vector and puts it into the book catalogue vector in the library
void Library::add_books(vector<Book> new_books){

	//iterates through the call by value vector and puts it into the function
	for (vector<Book>::iterator i = new_books.begin(); i != new_books.end(); i++) {
		book_catalogue.push_back(*i);
    }
  }

// this funciton iterates through the book catalogue vector and prints out the details of each book on the inside with an index number to keep track of the location of each book
void Library::print_library() {

	int index_number = 1;
	for (vector<Book>::iterator i = book_catalogue.begin(); i != book_catalogue.end(); i++, index_number++) {
		Book b = *i;
		cout << index_number << endl;
		b.print();
	}
}

// this function takes a book given data strings and makes a book, then compares if any of the books inside the vector match the entered details, and deletes any that it finds.
bool Library::erase_book(string title, string author, string publication_date) {
	//creates a book of the strings given
	Book erase_book(title, author, publication_date);

	//iterates and checks through the book catalogue vector and erases the instance that matches the details given.
	for (int i = 0; i < book_catalogue.size(); i++) {
		if (book_catalogue[i].get_title() == erase_book.get_title() && book_catalogue[i].get_author() == erase_book.get_author() && book_catalogue[i].get_date() == erase_book.get_date()) {
			book_catalogue.erase(book_catalogue.begin() + i);
			return true;
		}
	}
	return false;
}

//takes a book instance and compares if any of the books inside the vector match the book instnace, and deletes any that it finds.
bool Library::erase_book(Book erase_book) {

	//iterates and checks through the book catalogue vector and erases the instance that matches the details given.
	for (int i = 0; i < book_catalogue.size(); i++) {
		if (book_catalogue[i].get_title() == erase_book.get_title() && book_catalogue[i].get_author() == erase_book.get_author() && book_catalogue[i].get_date() == erase_book.get_date()) {
			book_catalogue.erase(book_catalogue.begin() + i);
			return true;
		}
	}
	return false;
}

//takes data strings and makes a book, then checks whether another book already exists that matches the data strings, and then inputs it into the vector if it can't find any matches
bool Library::insert_book(string title, string author, string publication_date) {
	Book insert_book(title, author, publication_date);

	//iterates through the vector and checks whether or not it exists, if it does exist, it returns false, and if it doesn't exist, it continues past the for loop and adds the inputted book into the book catalogue vector
	for (int i = 0; i < book_catalogue.size(); i++) {
		if (book_catalogue[i].get_title() == insert_book.get_title() && book_catalogue[i].get_author() == insert_book.get_author() && book_catalogue[i].get_date() == insert_book.get_date()) {
			return false;
		}
	}
	book_catalogue.push_back(insert_book);
	return true;
}

//takes a book instance and checks whether another book already exists that matches the book instance, and then inputs it into the vector if there is no match
bool Library::insert_book(Book insert_book) {

	//iterates through the vector and checks whether or not the book already exists, returns false if exists, returns true after inserting the book into the book catalogue vector.
	for (int i = 0; i < book_catalogue.size(); i++) {
		if(book_catalogue[i].get_title() == insert_book.get_title() && book_catalogue[i].get_author() == insert_book.get_author() && book_catalogue[i].get_date() == insert_book.get_date()){
		return false;
	}
	}
	book_catalogue.push_back(insert_book);
	return true;

}

