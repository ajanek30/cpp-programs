//
// Created by anton on 16.04.2026.
//

#include "Main.h"
#include <cstring>
#include "Mystring.h"
#include <iostream>
using namespace std;
int main() {
    //test cases to do

    Mystring adam{"adam"};
    Mystring piotr{"Piotr"};
    cout << ("Piotr" == piotr) << endl; // == operator
    //
    Mystring piotrus = -piotr; // -(make lowercase) operator
    cout << piotrus << endl;
    //
    Mystring slowo{"slowo"};
    //
    cout << "kolejne " + slowo << endl; // + (concatenation operator)
    cout << "fiutek " << slowo << endl;
    //
    cout << (adam != piotr) << endl; // != operator
    //
    cout << (adam < piotr) << endl; // <operator
    cout << (adam > piotr) << endl; // >operator
    //
    cout << (adam+=piotr) << endl; // += operator
    //
    cout << "* operator: " << (adam*4) << endl; // * operator
    cout << "original adam: " << adam << endl;
    adam*=3;
    cout <<" *= operator applied: " <<  adam << endl;
    //
    cout << (++adam) << endl; // pre-increment
    cout << (adam++) << endl; // post-increment
    cout << (--adam) << endl; // pre-decrement
    cout << (adam--) << endl; // post-decrement

    return 0;
};
