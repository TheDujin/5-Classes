#include <iostream>
#include "Videogame.h"

Videogame::Videogame() {
  cout << "Videogame constructor called" << endl;

  year = 1965;
}

char* Videogame::getPublisher() {
  return publisher;
}
char* Videogame::getRating() {
  return rating;
}

