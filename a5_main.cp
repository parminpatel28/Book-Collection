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
//  Purpose: Creates books based off of entered information, and then inserts, and can erase book objects
//  Due Date:  Friday, Nov 20th, 2020
//**************************************************************

#include <iostream>
#include <string>
#include <vector>
#include "a5_book.h"
#include "a5_library.h"
#include <cassert>
#include <assert.h> 
using namespace std;
    
// this function tests the insertion of the books given an book instance and given strings.
void test_book_insertion() {
    // create a library instance that allows us to insert books into
    Library our_library_insertion;

    // book instances pre-coded so we can enter a book instance, and creates books based off of incomplete information, making the author and date N/A
    Book book1("SYDE 121", "Igor", "January 20");
    Book book2("SYDE 101L", "Igor", "January 21");
    Book book3("SYDE 181", "Heppler", "October 21");
    Book book4("SYDE 121", "Igor");
    Book book5("SYDE 101L");
    
    //this asserts if it's able to do it
    assert(our_library_insertion.insert_book(book1));
    assert(our_library_insertion.insert_book(book2));
    assert(our_library_insertion.insert_book(book3));
    assert(our_library_insertion.insert_book(book4));
    assert(our_library_insertion.insert_book(book5));

    // when not commented out, this assertion fails, because book 1 matches the details entered
    //assert(our_library_insertion.insert_book("SYDE 121", "Igor", "January 20"));
    
    // a visual representation that the code works properly
    our_library_insertion.print_library();

}   

// tests whether or not we can remove a book
void test_book_removal(){
    // creates a library separate from the one above, and we can input books and then remove a book instance.
    Library our_library_erase;

    //creates book instances that we can input first, because we need to have something to erase before we can actually erase something from the vector.
    Book book1("SYDE 111", "Sean", "May 20");
    Book book2("SYDE 113", "Scott", "April 1");
    Book book3("SYDE 101", "Roufail", "August 5");

    //adds the books into the library for the erase_book function to interact with
    our_library_erase.insert_book(book1);
    our_library_erase.insert_book(book2);
    our_library_erase.insert_book(book3);

    //allows user to see that the books have been inputted before erasing the books.
    cout << "before erase" << endl;
    our_library_erase.print_library();

    //asserts that the erase_book function can take both strings and book instances and erase books from the library.
    assert(our_library_erase.erase_book(book1));
    assert(our_library_erase.erase_book("SYDE 113", "Scott", "April 1"));

    //another visual representation that the book erase actually works.
    cout << "after erase" << endl;
    our_library_erase.print_library();
    
}

//function executes both tests at once.
void execute_tests() {
    test_book_insertion();
    test_book_removal();
}
int main() {
   
    execute_tests();


}

