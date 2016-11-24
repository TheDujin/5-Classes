#include <iostream>
#include <string.h>
#include "Media.h"
//The .cpp file for the Media parent class. All other media types inherit this class's methods and variables.
using namespace std;

char* Media::getTitle() {
  return title;
}
int Media::getYear() {
  return year;
}
int Media::getID() {
  return ID;
}
void Media::printMedia() {
  return;
}
