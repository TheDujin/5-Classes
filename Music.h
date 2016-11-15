#include <iostream>
#include "Media.h"

class Music : public Media {
 public:
  Music(char* newTitle, int newYear, char* newArtist, char* newDuration, char* newPublisher);
  char* getArtist();
  char* getDuration();
  char* getPublisher();
  void printMedia();
  
  private:
  char* artist;
  char* duration;
  char* publisher;
};
