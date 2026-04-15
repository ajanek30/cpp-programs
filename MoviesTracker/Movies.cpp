//
// Created by Antek on 13.04.2026.
//

#include "Movies.h"


Movies::Movies(std::vector<Movie> data) {
    movies = new std::vector<Movie>();
    *movies = data;
}
//copy deep
Movies::Movies(const Movies &source) : Movies(*source.movies) {
    std::cout << "Copy DEEP constructor" << std::endl;
}
//move constructor
Movies::Movies(Movies &&source) noexcept : movies(source.movies) {
    source.movies = nullptr;
    std::cout << "Move constructor" << std::endl;
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
std::vector<Movie> *Movies::addMovie(const std::string &name, const std::string &rating, int watchedCounter) {
    for (const auto &movie : *movies) {
        if (movie.getName() == name) {
            std::cout << "Movie already in the database" << std::endl;
            return nullptr;
        }
    }
    movies->emplace_back(name,rating,watchedCounter);
    std::cout << name << " added" << std::endl;
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
Movies::~Movies() {
    if (movies != nullptr) {
        delete movies;
    }
}


