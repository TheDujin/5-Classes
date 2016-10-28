#include <iostream>
#include "Movie.h"
using namespace std;

Movie::Movie() {
  cout << "Movie constructor called" << endl;
  
  year = "A long time ago in a galaxy far, far away...";
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
