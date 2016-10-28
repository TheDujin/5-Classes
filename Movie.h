#include <iostream>
#include "Media.h"

class Movie : public Media {
 public:
  Movie();
  char* getDirector();
  char* getDuration();
  char* getRating();

 private:
  char* director;
  char* duration;
  char* rating;
};
