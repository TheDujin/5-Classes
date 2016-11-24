#include <iostream>
#include "Media.h"
//The .h file for the Music child class. It inherits Media's methods and variables and adds artist, duration, publisher, a constructor and destructor, and a different  printMedia.
class Music : public Media {
 public:
  Music(char* newTitle, int newYear, char* newArtist, char* newDuration, char* newPublisher);
  char* getArtist();
  char* getDuration();
  char* getPublisher();
  void printMedia();
  ~Music();
  
  private:
  char* artist;
  char* duration;
  char* publisher;
};
