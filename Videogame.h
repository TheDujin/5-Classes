#include <iostream>
#include "Media.h"

class Videogame : public Media {
 public:
  Videogame();
  char* getPublisher();
  char* getRating();
  
  
 private:
  char* publisher;
  char* rating;
};
