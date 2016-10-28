#include <iostream>
#include "Media.h"

class Music : public Media {
 public:
  Music();
  char* getArtist();
  char* getDuration();
  char* getPublisher();
  
  private:
  char* artist;
  char* duration;
  char* publisher;
};
