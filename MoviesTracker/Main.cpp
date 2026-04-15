//
// Created by Antek on 13.04.2026.
//

#include <iostream>
#include "Movies.h"

int main() {
    std::vector<Movie> movies;
    Movies myMovies(movies);

    myMovies.addMovie("Cinderella","GP",4);
    myMovies.display();
    myMovies.incrementWatchedCounter("Cinderella");
    myMovies.display();
    myMovies.incrementWatchedCounter("XXXXXXX");
    myMovies.display();
    myMovies.addMovie("Cinderella","4/10",55);
    myMovies.display();






    return 0;
}

