#ifndef mediaDef
#define mediaDef
#include <iostream>
#include <string.h>

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
