#include <iostream>
#include "Music.h"
using namespace std;

const int MUSIC = 0;
Music::Music(char* newTitle, int newYear, char* newArtist, char* newDuration, char* newPublisher) {
  cout << "Music constructor called" << endl;
  title = newTitle;
  year = newYear;
  artist = newArtist;
  duration = newDuration;
  publisher = newPublisher;
  ID = MUSIC;
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
