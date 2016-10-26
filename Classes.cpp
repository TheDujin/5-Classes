#include <iostream>
#include <vector>
#include <string.h>
#include "Media.h"
#include "Movie.h"


using namespace std;

int main() {
  vector <Media*> mediaList;
  Media* movie = new Movie();
  cout << movie->getYear();

  
  return 0;
}
