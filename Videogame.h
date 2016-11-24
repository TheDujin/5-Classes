#include <iostream>
#include "Media.h"

//The .h file for the Videogame child class. It inherits Media's methods and variables and adds publisher, rating, a constructor and destructor, and a different  printMedia.
class Videogame : public Media {
 public:
  Videogame(char* newTitle, int newYear, char* newPublisher, char* newRating);
  char* getPublisher();
  char* getRating();
  void printMedia();
  ~Videogame();
  
  
 private:
  char* publisher;
  char* rating;
};
