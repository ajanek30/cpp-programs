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
    ////
    Mystring antek{"Antek"};
    Mystring kuba{"kuba"};
    std::cout << std::boolalpha;
    std::cout << (antek == kuba) << std::endl;
    ////
    Mystring antek2 = -antek;
    antek2.display();
    ///
    Mystring piotrek{"piotrek"};
    Mystring zdanie = piotrek + " to człowiek";
    zdanie.display();

    return 0;
};
