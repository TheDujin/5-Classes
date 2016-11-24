#include <iostream>
#include "Music.h"
using namespace std;
//The .cpp for the Music child class. It defines the new methods and variables that Movie adds to the ones it inherits from Media.
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
  cout << endl << "Found music!" << endl << "Title: " << title << endl << "Year: " << year << endl;
  cout << "Artist: " << artist << endl << "Duration: " << duration << endl;
  cout << "Publisher: " << publisher << endl;
}
Music::~Music() {
  delete[] title;
  delete[] artist;
  delete[] duration;
  delete[] publisher;
}
