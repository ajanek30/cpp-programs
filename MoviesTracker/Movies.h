//
// Created by Antek on 13.04.2026.
//

#ifndef CPP_PROGRAMS_MOVIES_H
#define CPP_PROGRAMS_MOVIES_H
#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;
public:
    Movies() = default;
    void display() const;
    void addMovie(const std::string &name,const std::string &rating,int watchedCounter);
    void incrementWatchedCounter(const std::string &name);
    ~Movies() = default;
};


#endif //CPP_PROGRAMS_MOVIES_H