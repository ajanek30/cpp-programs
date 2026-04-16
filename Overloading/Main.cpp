//
// Created by anton on 16.04.2026.
//

#include "Main.h"

#include <cstring>

#include "Mystring.h"
#include <iostream>

int main() {
    char *word = new char[3];
    std::strcpy(word,"hujek");

    Mystring obj2(word);
    Mystring obj;
    obj = obj2;
    obj.display();

    return 0;
};
