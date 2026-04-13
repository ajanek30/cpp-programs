//
// Created by Antek on 13.04.2026.
//

#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watchedCounter)
    : name(name), rating(rating), watchedCounter(watchedCounter){
    std::cout << "Constructor executed";
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
Movie::~Movie() {
    std::cout << "Destructor executed";
}