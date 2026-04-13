//
// Created by Antek on 13.04.2026.
//

#ifndef CPP_PROGRAMS_MOVIE_H
#define CPP_PROGRAMS_MOVIE_H
#include <iostream>
#include <string>


class Movie {
private:
    std::string name;
    std::string rating;
    int watchedCounter;
public:
    Movie(std::string name, std::string rating, int watchedCounter);
    std::string getName() const;
    std::string getRating() const;
    int getWatchedCounter() const;
    void incrementWatchedCounter();
    ~Movie() = default;
};


#endif //CPP_PROGRAMS_MOVIE_H