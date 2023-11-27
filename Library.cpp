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

bool Library::addBook(int bookName) {
    if (bookName < 0 || bookName > 9) {
        return false;
    }
    if (books[bookName] != "") {
        return false;
    }
    books[bookName] = bookName;
    return true;
}

bool Library::removeBook(int bookName) {
    if (bookName < 0 || bookName > 9) {
        return false;
    }
    if (books[bookName] == "") {
        return false;
    }
    books[bookName] = "";
    return true;
}

void Library::print() {
    for (int i = 0; i < 10; i++) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}

