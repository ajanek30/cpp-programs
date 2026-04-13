//
// Created by Antek on 13.04.2026.
//

#include <iostream>
#include "Movies.h"
void addMovies(Movies &movies,std::string name, std::string rating,int watchedCounter)
{
    movies.addMovie(name,rating,watchedCounter);
}
int main() {
    Movies obj;
    obj.display();
    addMovies(obj,"Cinderella","4/10",5);
    obj.display();
    return 0;
}

