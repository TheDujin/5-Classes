#include <iostream>
#include "Videogame.h"
using namespace std;

const int VIDEOGAME = 1;
Videogame::Videogame(char* newTitle, int newYear, char* newPublisher, char* newRating) {
  title = newTitle;
  year = newYear;
  publisher = newPublisher;
  rating = newRating;
  ID = VIDEOGAME;
}

char* Videogame::getPublisher() {
  return publisher;
}
char* Videogame::getRating() {
  return rating;
}

void Videogame::printMedia() {
  cout << endl << "Found videogame!" << endl << "Title: " << title << endl << "Year: " << year << endl;
  cout << "Publisher: " << publisher << endl << "Rating: " << rating << endl;
}
