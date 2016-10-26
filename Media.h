#ifndef mediaDef
#define mediaDef
#include <iostream>
#include <string.h>

using namespace std;

class Media {
 public:
  char* getTitle();
  char* getYear();
 protected:
  char* title;
  char* year;
};

#endif
