//
// Created by Antek on 13.04.2026.
//

#include <iostream>
#include "Movies.h"

int main() {
    std::vector<Movie> movie;
    Movies myMovies(movie);
    myMovies.addMovie("Cinderella","4/10",5);
    myMovies.display();




    return 0;
}

