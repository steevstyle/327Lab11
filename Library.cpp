//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>
using namespace std;

//implement class funct
//constructor
Library::Library(){
    for(int i = 0; i < 10; i++){
        books[i] = "";
    }
}

bool Library::addBook(string bookName) {
    //Adds the given book to the library and returns zero
    //returns false if the book already exists or if the library
    //  already has 10 books

//check if book already exists
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            return false;
        }
    }
    //check if library has 10 books
    for(int i = 0; i < 10; i++){
        if(books[i] == ""){
            books[i] = bookName;
            return true;
        }
    }
    return false;


}

bool Library::removeBook(string bookName) {
    //Removes the given book name from the library by setting the
    //  corresponding string to "", and returns true
    //returns false if the library does not have the given book
    for(int i = 0; i < 10; i++){
        if(books[i] == bookName){
            books[i] = "";
            return true;
        }
    }
    return false;
}


void Library::print() {
    cout<<"Books in library:"<<endl;
    int c = 0;
    while(books[c] != ""){
        cout << books[c++] << endl;
    }
}

