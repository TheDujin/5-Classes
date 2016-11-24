#ifndef mediaDef
#define mediaDef
#include <iostream>
#include <string.h>

//The .h file for the Media parent class. It outlines all the common methods and variables for all the media types.
using namespace std;

class Media {
 public:
  char* getTitle();
  int getYear();
  int getID();
  void printMedia();
 protected:
  char* title;
  int year;
  int ID;
};

#endif
