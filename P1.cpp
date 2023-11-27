//include headers and libraries
#include "Library.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    Library library;
    string command;
    string bookName;
    int bookNameInt;
    bool success;
    while(true){
        cout << "Enter command: ";
        cin >> command;
        if(command == "a"){
            cin >> bookName;
            success = library.addBook(bookName);
            if(success){
                cout << "Book added" << endl;
            }else{
                cout << "Book not added" << endl;
            }
        }else if(command == "r"){
            cin >> bookName;
            success = library.removeBook(bookName);
            if(success){
                cout << "Book removed" << endl;
            }else{
                cout << "Book not removed" << endl;
            }
        }else if(command == "p"){
            library.print();
        }else if(command == "q"){
            break;
        }else{
            cout << "Invalid command" << endl;
        }
    }
    
    //ask for commands and execute

}
