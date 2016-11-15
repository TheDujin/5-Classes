#include <iostream>
#include "Music.h"
using namespace std;

const int MUSIC = 0;
Music::Music(char* newTitle, int newYear, char* newArtist, char* newDuration, char* newPublisher) {
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
void Music::printMedia() {
  cout << "Found music!" << endl << "Title: " << title << endl << "Year: " << year << endl;
  cout << "Artist: " << artist << endl << "Duration: " << duration << endl;
  cout << "Publisher: " << publisher << endl;
}
