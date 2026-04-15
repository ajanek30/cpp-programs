//
// Created by Antek on 13.04.2026.
//

#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watchedCounter)
    : name(name), rating(rating), watchedCounter(watchedCounter){
}
Movie::Movie(const Movie &source) : name(source.name),rating(source.rating),watchedCounter(source.watchedCounter) {
    std::cout << "Copy constructor" << std::endl;
}

std::string Movie::getName() const {
    return name;
}
std::string Movie::getRating() const {
    return rating;
}
int Movie::getWatchedCounter() const {
    return watchedCounter;
}
void Movie::incrementWatchedCounter() {
    watchedCounter++;
}
