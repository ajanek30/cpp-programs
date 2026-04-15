//
// Created by Antek on 13.04.2026.
//

#include <iostream>
#include "Movies.h"

int main() {
    Movies obj;
    obj.display();
    obj.addMovie("Cinderella","4/10",5);
    obj.addMovie("Cindella","5/10",6);
    obj.addMovie("Cindellinia","6/10",7);

    obj.display();
    obj.incrementWatchedCounter("Cinderella");
    obj.display();
    obj.addMovie("Cinderella","4/10",5);
    obj.incrementWatchedCounter("Cinderelffla");

    obj.display();
    return 0;
}

