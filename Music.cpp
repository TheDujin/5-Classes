#include <iostream>
#include "Music.h"

Music::Music() {
  cout << "Music constructor called" << endl;

  year = "1960's";
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
