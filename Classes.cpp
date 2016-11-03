#include <iostream>
#include <vector>
#include <string.h>
#include "Media.h"
#include "Movie.h"
#include "Music.h"
#include "Videogame.h"

using namespace std;
Media* addMedia();
void searchMedia(vector <Media*>* listPtr);

int main() {
  vector <Media*> mediaList;
  vector <Media*>* listPtr;
  //Media* movie = new Movie();
  //cout << movie->getYear();
  bool isRunning = true;
  cout << "Welcome to Media Database!" << endl;
  const char add[] = "ADD";
  const char search[] = "SEARCH";
  const char quit[] = "QUIT";
  char input[81];
  while (isRunning) {
    for (int i = 0; i < 81; i++)
      input[i] = '\0';
    cout << "Please use the commands ADD, SEARCH, and QUIT." << endl << "Input: ";
    cin >> input;
    cin.ignore();
    if (strcmp(input, add) == 0) {
      cout << "Adding..." << endl;
      mediaList.push_back(addMedia());
    }
    else if (strcmp(input, search) == 0) {
      cout << "Searching..." << endl;
      
    }
    else if (strcmp(input, quit) == 0) {
      cout << "Quitting..." << endl;
      cout << "Program terminated. Thanks for your time." << endl;
      isRunning = false;
    }
    
    else {
      cout << "That command does not seem to be valid. Please check your capitalization and spelling." << endl;
    }

  }
  return 0;
}


Media* addMedia() {
  Media* newMedia = new Music("Test", 2000, "Autistic Beiber", "69:69", "Autistic Guy");
  return newMedia;
}

void searchMedia(vector <Media*> *) {

  return;
}
