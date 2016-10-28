#ifndef mediaDef
#define mediaDef
#include <iostream>
#include <string.h>

using namespace std;

class Media {
 public:
  char* getTitle();
  char* getYear();
  char* getDirector();
  char* getDuration();
  char* getRating();
  char* getArtist();
  char* getPublisher();
 protected:
  char* title;
  char* year;
};

#endif
