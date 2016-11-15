#ifndef mediaDef
#define mediaDef
#include <iostream>
#include <string.h>

using namespace std;

class Media {
 public:
  char* getTitle();
  int getYear();
  char* getDirector();
  char* getDuration();
  char* getRating();
  char* getArtist();
  char* getPublisher();
  int getID();
  void printMedia();
 protected:
  char* title;
  int year;
  int ID;
};

#endif
