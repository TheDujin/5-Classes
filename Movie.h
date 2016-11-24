#include <iostream>
#include "Media.h"

//The .h file for the Movie child class. It inherits Media's methods and variables and adds director, duration, rating, a constructor and destructor, and a different  printMedia.
class Movie : public Media {
 public:
  Movie(char* newTitle, int newYear, char* newDirector, char* newDuration, char* newRating);
  char* getDirector();
  char* getDuration();
  char* getRating();
  void printMedia();
  ~Movie();

 private:
  char* director;
  char* duration;
  char* rating;
};
