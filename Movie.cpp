#include <iostream>
#include "Movie.h"
using namespace std;
//The .cpp for the Movie child class. It defines the new methods and variables that Movie adds to the ones it inherits from Media.
const int MOVIE = -1;
Movie::Movie(char* newTitle, int newYear, char* newDirector, char* newDuration, char* newRating) {
  title = newTitle;
  year = newYear;
  director = newDirector;
  duration = newDuration;
  rating = newRating;
  ID = MOVIE;
}

char* Movie::getDirector() {
  return director;
}
char* Movie::getDuration() {
  return duration;
}
char* Movie::getRating() {
  return rating;
}
void Movie::printMedia() {
  cout << endl << "Found movie!" << endl << "Title: " << title << endl << "Year: " << year << endl;
  cout << "Director: " << director << endl << "Duration: " << duration << endl;
  cout << "Rating: " << rating << endl;
}
Movie::~Movie() {
  delete[] title;
  delete[] director;
  delete[] duration;
  delete[] rating;
}
