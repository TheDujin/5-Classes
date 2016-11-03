#include <iostream>
#include "Movie.h"
using namespace std;

Movie::Movie(char* newTitle, int newYear, char* newDirector, char* newDuration, char* newRating) {
  cout << "Movie constructor called" << endl;
  title = newTitle;
  year = newYear;
  director = newDirector;
  duration = newDuration;
  rating = newRating;
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
