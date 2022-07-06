#include <iostream>
#include <algorithm>
#include <vector>
#include "Movies.hpp"

Movies::Movies() {
}
Movies::~Movies() {
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for(const Movie &mov: movies) {
        if( mov.get_name() == name) {
            return false;
        } 
    }
    movies.push_back({name,rating,watched});
    return true; 
}
bool Movies::increment_watched(std::string name) {
    for(Movie &mov: movies) {
        if( mov.get_name() == name) {
            mov.increment_watched();
            return true;
        }
    }
    return false;
}
void Movies::display() const {
    ////TODO: write func 
    if(movies.size()==0) {
        std::cout << "There no movies, try to add one " << std::endl;
    } else {
        for(Movie mov : movies) {
            std::cout << std::endl << "----------------------------------------------------" << std::endl;
            mov.display();
            std::cout << std::endl << "----------------------------------------------------" << std::endl;
        }
    }
    
    
}
