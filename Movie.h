#include <iostream>
#include "Media.h"

class Movie : public Media {
 public:
  Movie(char* newTitle, int newYear, char* newDirector, char* newDuration, char* newRating);
  char* getDirector();
  char* getDuration();
  char* getRating();
  void printMedia();

 private:
  char* director;
  char* duration;
  char* rating;
};
