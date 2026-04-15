//
// Created by Antek on 13.04.2026.
//

#ifndef CPP_PROGRAMS_MOVIES_H
#define CPP_PROGRAMS_MOVIES_H
#include <vector>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> *movies;
public:
    Movies(std::vector<Movie> data);
    Movies(const Movies &source);
    Movies(Movies &&source) noexcept;
    void display() const;
    std::vector<Movie>* addMovie(const std::string &name,const std::string &rating,int watchedCounter);
    void incrementWatchedCounter(const std::string &name);
    ~Movies();

};


#endif //CPP_PROGRAMS_MOVIES_H