#include <iostream>
#include "Movie.h"
using namespace std;

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
