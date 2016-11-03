#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;

char* Media::getTitle() {
  return title;
}
int Media::getYear() {
  return year;
}
char* Media::getDirector() {
  return "none";
}
char* Media::getDuration() {
  return "none";
}
char* Media::getRating() {
  return "none";
}
char* Media::getArtist() {
  return "none";
}
char* Media::getPublisher() {
  return "none";
}
