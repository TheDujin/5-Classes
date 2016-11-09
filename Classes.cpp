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

const int MOVIE = -1;
const int MUSIC = 0;
const int VIDEOGAME = 1;
int main() {
  vector <Media*> mediaList;
  vector <Media*>* listPtr;
  listPtr = &mediaList;
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
      for (int i = 0; i < mediaList.size(); i++) {
	cout << mediaList.at(i)->getTitle();
	cout << mediaList.at(i)->getYear();
      }
    }
    else if (strcmp(input, search) == 0) {
      searchMedia(listPtr);
      
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
  char input[81];
  bool valid = false;
  const char movie[] = "MOVIE";
  const char music[] = "MUSIC";
  const char videogame[] = "VIDEOGAME";
  while (!valid) {
    for (int i = 0; i < 81; i++)
      input[i] = '\0';
    cout << "Would you like to add a MOVIE, MUSIC, or a VIDEOGAME?" << endl << "?: ";
    cin >> input;
    cin.ignore();
    if (strcmp(input, movie) == 0) {
      int year;
      char* title = new char[81];
      char* director = new char[81];
      char* duration = new char[81];
      char* rating = new char[81];
      cout << "Adding..." << endl;
      valid = true;
      cout << "Please enter the title of the movie." << endl << "Title: ";
      cin >> title;
      cin.ignore();
      cout << title;
      cout << "Please enter the year of the movie." << endl << "Year: ";
      cin >> year;
      cin.ignore();
      cout << year;
      cout << "Please enter the director of the movie." << endl << "Director: ";
      cin.get(director, 80);
      cin.ignore();
      cout << director;
      cout << "Please enter the duration of the movie in the format \"HH:MM\"." << endl << "Duration: ";
      cin >> duration;
      cin.ignore();
      cout << duration;
      cout << "Please enter the rating of the movie." << endl << "Rating: ";
      cin.get(rating, 80);
      cin.ignore();
      cout << rating;
      
      Media* newMedia = new Movie(title, year, director, duration, rating);
      return newMedia;
      
    }
    else if (strcmp(input, music) == 0) {
      valid = true;
      cout << "Please enter the year, in format YYYY" << endl << "\
Year: ";
      int intInput = 0;
      cin >> intInput;
      cin.ignore();
      cout << "Searching..." << endl;
    }
    else if (strcmp(input, videogame) == 0) {
      valid = true;
      cout << "Placeholder";
    }
    else {
      cout << "That doesn't seem to be \"MOVIE\", \"MUSIC\", or \"YEAR\". Please check your capitalization and spelling and try again." << endl;
    }
  }
  
  
  //Media* newMedia = new Music("Test", 2000, "Autistic Beiber", "69:69", "Autistic Guy");
  //return newMedia;
}

void searchMedia(vector <Media*> * listPtr) {
  char input[81];
  bool valid = false;
  const char title[] = "TITLE";
  const char year[] = "YEAR";
  while (!valid) {
    for (int i = 0; i < 81; i++)
      input[i] = '\0';
    cout << "Would you like to search by TITLE or YEAR?" << endl << "?: ";
    cin >> input;
    cin.ignore();
    if (strcmp(input, title) == 0) {
      valid = true;
      cout << "Please enter the title. Be careful about capitals!" << endl << "Title: ";
      for (int i = 0; i < 81; i++)
	input[i] = '\0';
      cin >> input;
      cin.ignore();
      cout << "Searching..." << endl;
      for (int i = 0; i < listPtr->size(); i++) {
	if (strcmp(listPtr->at(i)->getTitle(), input) == 0)
	  cout << "Found one! (DEBUG title)" << endl;
      }
    }
    else if (strcmp(input, year) == 0) {
      valid = true;
      cout << "Please enter the year, in format YYYY" << endl << "\
Year: ";
      int intInput = 0;
      cin >> intInput;
      cin.ignore();
      cout << "Searching..." << endl;
      for (int i = 0; i < listPtr->size(); i++) {
	if (listPtr->at(i)->getYear() == intInput)
	  cout << "Found one! (DEBUG year)" << endl;
      }
    }
    else {
      cout << "That doesn't seem to be \"TITLE\" or \"YEAR\". Please check your capitalization and spelling and try again." << endl;
    }
  }
  return;
}
