
#include <cstring>
#include "Mystring.h"

#include <iostream>

Mystring::Mystring() : str{nullptr}{
    str = new char[1];
    *str = '\0';
}
Mystring::Mystring(const char *str) : str{nullptr} {
    str = new char[strlen(str) + 1];

}

Mystring::Mystring(const char &source) : str{nullptr}{

    str = new char[std::strlen(source.str) + 1];
    strcpy(str, &source);
    std::cout << "Copy shallow" << std::endl;


}

Mystring::~Mystring() {
    if(str != nullptr) {
        delete[] str;
    }
}
