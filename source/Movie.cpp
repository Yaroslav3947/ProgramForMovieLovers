#include <iostream>
#include "Movie.hpp"

Movie::Movie(std::string name, std::string rating, int watched)
    :name(name), rating(rating), watched(watched) {
}

Movie::Movie(const Movie &source)
    :Movie{source.name, source.rating,source.watched} {
}

Movie::~Movie() {
}

void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched  << std::endl;
}
