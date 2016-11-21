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
void deleteMedia();

const int MOVIE = -1;
const int MUSIC = 0;
const int VIDEOGAME = 1;
int main() {
  //Media* newMedia = new Movie("Bob", 2000, "Bob Joe", "10:10", "95%");
  //cout << ((Movie*) newMedia)->getRating();
  vector <Media*> mediaList;
  vector <Media*>* listPtr;
  listPtr = &mediaList;
  bool isRunning = true;
  cout << "Welcome to Media Database!" << endl;
  const char add[] = "ADD";
  const char search[] = "SEARCH";
  const char quit[] = "QUIT";
  const char del[] = "DELETE";
  char input[81];
  while (isRunning) {
    for (int i = 0; i < 81; i++)
      input[i] = '\0';
    cout << "Please use the commands ADD, DELETE, SEARCH, and QUIT." << endl << "Input: ";
    cin >> input;
    cin.ignore();
    if (strcmp(input, add) == 0) {
      cout << "Adding..." << endl;
      mediaList.push_back(addMedia());
    }
    else if (strcmp(input, del) == 0) {
	if (mediaList.size() < 1)
	  cout << "There isn't anything to delete. Maybe you should \"ADD\" something first?" << endl;
	else
	  deleteMedia();
      }
    else if (strcmp(input, search) == 0) {
      if (mediaList.size() < 1)
	cout << "There isn't anything to search for. Maybe you should \"ADD\" something first?" << endl;
      else
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
      cin.get(title, 80);
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
      cin.get(duration, 80);
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
      int year;
      char* title = new char[81];
      char* artist = new char[81];
      char* duration = new char[81];
      char* publisher = new char[81];
      cout << "Adding..." << endl;
      valid = true;
      cout << "Please enter the title of the music." << endl << "Title: ";
      cin.get(title, 80);
      cin.ignore();
      cout << title;
      cout << "Please enter the year of the music." << endl << "Year: ";
      cin >> year;
      cin.ignore();
      cout << year;
      cout << "Please enter the artist of the music." << endl << "Artist: ";
      cin.get(artist, 80);
      cin.ignore();
      cout << artist;
      cout << "Please enter the duration of the music in the format \"MM:SS\"." << endl << "Duration: ";
      cin.get(duration, 80);
      cin.ignore();
      cout << duration;
      cout << "Please enter the publisher of the music." << endl << "Publisher: ";
      cin.get(publisher, 80);
      cin.ignore();
      cout << publisher;

      Media* newMedia = new Music(title, year, artist, duration, publisher);
      return newMedia;
    }
    else if (strcmp(input, videogame) == 0) {
      int year;
      char* title = new char[81];
      char* publisher = new char[81];
      char* rating = new char[81];
      cout << "Adding..." << endl;
      valid = true;
      cout << "Please enter the title of the videogame." << endl << "Title: ";
      cin.get(title, 80);
      cin.ignore();
      cout << title;
      cout << "Please enter the year of the videogame." << endl << "Year: ";
      cin >> year;
      cin.ignore();
      cout << year;
      cout << "Please enter the publisher of the videogame." << endl << "Publisher: ";
      cin.get(publisher, 80);
      cin.ignore();
      cout << publisher;
      cout << "Please enter the rating of the videogame." << endl << "Rating: ";
      cin.get(rating, 80);
      cin.ignore();
      cout << rating;

      Media* newMedia = new Videogame(title, year, publisher, rating);
    }
    else {
      cout << "That doesn't seem to be \"MOVIE\", \"MUSIC\", or \"YEAR\". Please check your capitalization and spelling and try again." << endl;
    }
  }
  
}

void deleteMedia() {
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
      cin.get(input, 80);
      cin.ignore();
      cout << "Searching..." << endl;
      bool foundOne = false;
      for (int i = 0; i < listPtr->size(); i++) {
	if (strcmp(listPtr->at(i)->getTitle(), input) == 0) {
	  foundOne = true;
	  if (listPtr->at(i)->getID() == MOVIE)
	    ((Movie*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == MUSIC)
	    ((Music*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == VIDEOGAME)
	    ((Videogame*)listPtr->at(i))->printMedia();
	}
      }
      if (!foundOne) {
	cout << endl << "There were no results found." << endl;
      }
      cout << endl;
    }
    else if (strcmp(input, year) == 0) {
      valid = true;
      cout << "Please enter the year, in format YYYY" << endl << "Year: ";
      int intInput = 0;
      cin >> intInput;
      cin.ignore();
      cout << "Searching..." << endl;
      bool foundOne = false;
      for (int i = 0; i < listPtr->size(); i++) {
	if (listPtr->at(i)->getYear() == intInput) {
	  foundOne = true;
	  if (listPtr->at(i)->getID() == MOVIE)
	    ((Movie*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == MUSIC)
	    ((Music*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == VIDEOGAME)
	    ((Videogame*)listPtr->at(i))->printMedia();
	}
      }
      if (!foundOne) {
	cout << endl << "There were no results found." << endl;
      }
      cout << endl;
    }
    else {
      cout << "That doesn't seem to be \"TITLE\" or \"YEAR\". Please check your capitalization and spelling and try again." << endl;
    }
  }
  return;
  
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
      cin.get(input, 80);
      cin.ignore();
      cout << "Searching..." << endl;
      bool foundOne = false;
      for (int i = 0; i < listPtr->size(); i++) {
	if (strcmp(listPtr->at(i)->getTitle(), input) == 0) {
	  foundOne = true;
	  if (listPtr->at(i)->getID() == MOVIE)
	    ((Movie*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == MUSIC)
	    ((Music*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == VIDEOGAME)
	    ((Videogame*)listPtr->at(i))->printMedia();
	}
      }
      if (!foundOne) {
	cout << endl << "There were no results found." << endl;
      }
      cout << endl;
    }
    else if (strcmp(input, year) == 0) {
      valid = true;
      cout << "Please enter the year, in format YYYY" << endl << "Year: ";
      int intInput = 0;
      cin >> intInput;
      cin.ignore();
      cout << "Searching..." << endl;
      bool foundOne = false;
      for (int i = 0; i < listPtr->size(); i++) {
	if (listPtr->at(i)->getYear() == intInput) {
	  foundOne = true;
	  if (listPtr->at(i)->getID() == MOVIE)
	    ((Movie*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == MUSIC)
	    ((Music*)listPtr->at(i))->printMedia();
	  else if (listPtr->at(i)->getID() == VIDEOGAME)
	    ((Videogame*)listPtr->at(i))->printMedia();
	}
      }
      if (!foundOne) {
	cout << endl << "There were no results found." << endl;
      }
      cout << endl;
    }
    else {
      cout << "That doesn't seem to be \"TITLE\" or \"YEAR\". Please check your capitalization and spelling and try again." << endl;
    }
  }
  return;
}
