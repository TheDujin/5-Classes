#include <iostream>
#include "Media.h"

class Videogame : public Media {
 public:
  Videogame(char* newTitle, int newYear, char* newPublisher, char* newRating);
  char* getPublisher();
  char* getRating();
  void printMedia();
  
  
 private:
  char* publisher;
  char* rating;
};
