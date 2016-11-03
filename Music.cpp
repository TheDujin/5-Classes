#include <iostream>
#include "Music.h"

Music::Music(char* newTitle, int newYear, char* newArtist, char* newDuration, char* newPublisher) {
  cout << "Music constructor called" << endl;
  title = newTitle;
  year = newYear;
  artist = newArtist;
  duration = newDuration;
  publisher = newPublisher;
}

char* Music::getArtist() {
  return artist;
}
char* Music::getDuration() {
  return duration;
}
char* Music::getPublisher() {
  return publisher;
}
