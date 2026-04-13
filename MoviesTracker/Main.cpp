//
// Created by Antek on 13.04.2026.
//

#include <iostream>
#include "Movies.h"

int main() {
    Movies obj;
    obj.display();
    obj.addMovie("Cinderella","4/10",5);
    obj.display();
    obj.incrementWatchedCounter("Cinderella");
    obj.display();
    return 0;
}

