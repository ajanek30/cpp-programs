//
// Created by Antek on 13.04.2026.
//

#include "Movies.h"


void Movies::display() const {
    for (const auto &movie: movies) {
        std::cout << movie.getName() << " " << movie.getRating() << " " << movie.getWatchedCounter() << " " << std::endl;
    }

}
void Movies::addMovie(const std::string &name, std::string rating, int watchedCounter) {
    Movie movie(name,rating,watchedCounter);
    movies.push_back(movie);
}
void Movies::incrementWatchedCounter(const std::string &name) {
    for (auto &movie: movies) {
        if (movie.getName() == name) {
            movie.incrementWatchedCounter();
        }
        else {
            std::cout << "No movie in the database" << std::endl;
        }
    }

}
