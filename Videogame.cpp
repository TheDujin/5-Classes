#include <iostream>
#include "Videogame.h"

Videogame::Videogame(char* newTitle, int newYear, char* newPublisher, char* newRating) {
  cout << "Videogame constructor called" << endl;
  title = newTitle;
  year = newYear;
  publisher = newPublisher;
  rating = newRating;
}

char* Videogame::getPublisher() {
  return publisher;
}
char* Videogame::getRating() {
  return rating;
}

