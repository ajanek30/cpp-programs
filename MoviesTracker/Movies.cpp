//
// Created by Antek on 13.04.2026.
//

#include "Movies.h"

Movies::Movies() {

}
void Movies::display() const {
    for (auto movie: movies) {
        std::cout << movie.getName() << movie.getRating() << movie.getWatchedCounter() << std::endl;
    }
}
void Movies::addMovie(std::string name, std::string rating, int watchedCounter) {
    Movie movie(name,rating,watchedCounter);
    movies.push_back(movie);
}
Movies::~Movies(){}