// I affirm that all code given below was written solely by me,
// Cheree LaPierre, and that any help I received adhered to the
// rules stated for this exam

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Movie
{
private:
    string titleName;
    string genreType;
    int time;
    
public:
    // Default movie
    Movie();
    
    Movie(string Title, string Genre, int ShowTime);
    
    // Returns the movie title
    string GetTitle();
    // Returns the movie genre
    string GetGenre();
    // Movie showtime
    int GetShowtime();
};

#endif /* Movie_hpp */
