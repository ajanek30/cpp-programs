//
// Created by Antek on 13.04.2026.
//

#include "Movies.h"


Movies::Movies(std::vector<Movie> data) {
    movies = new std::vector<Movie>();
}
//copy deep
Movies::Movies(const Movies &source) : Movies(*source.movies) {
    std::cout << "Copy DEEP constructor" << std::endl;
}
//move constructor
Movies::Movies(Movies &&source) noexcept : movies(source.movies) {
    movies = nullptr;
}

void Movies::display() const {
    if (movies == nullptr) {
        std::cout << "No movies in the database" << std::endl;
        return;
    }
    for (const auto &movie: *movies) {
        std::cout << movie.getName() << " " << movie.getRating() << " " << movie.getWatchedCounter() << " " << std::endl;
    }

}
Movies::addMovie(const std::string &name, const std::string &rating, int watchedCounter) {
    for (const auto &movie : *movies) {
        if (movie.getName() == name) {
            std::cout << "Movie already in the database" << std::endl;
            return;
        }
    }
    Movie movie(name,rating,watchedCounter);
    movies->push_back(movie);
    std::cout << movie.getName() << " added" << std::endl;
    return movies;
}
void Movies::incrementWatchedCounter(const std::string &name) {
    for (auto &movie: *movies) {
        if (movie.getName() == name) {
            movie.incrementWatchedCounter();
            std::cout << name << " incremented" << std::endl;
            return;
        }
        }
    std::cout << "No movie in the database" << std::endl;
    }


