#include <iostream>
#include <string.h>

class Media {
 public:
  char[] getTitle();
  char[] getYear();
 private:
  char title[81];
  char year[5];
};
