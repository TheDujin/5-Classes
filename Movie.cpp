#include <iostream>
#include "Movie.h"
using namespace std;

Movie::Movie() {
  cout << "Movie constructor called" << endl;
  
  year = 1918;
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
