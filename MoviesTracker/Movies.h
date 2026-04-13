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
    Movies();
    void display() const;
    void addMovie(std::string name,std::string rating,int watchedCounter);
    ~Movies();
};


#endif //CPP_PROGRAMS_MOVIES_H