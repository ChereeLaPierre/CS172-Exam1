// I affirm that all code given below was written solely by me,
// Cheree LaPierre, and that any help I received adhered to the
// rules stated for this exam

#ifndef Theater_hpp
#define Theater_hpp

#include <stdio.h>
#include "Movie.hpp"
#include <string>
using namespace std;

class Theater
{
private:
    int popcornPrice = 3;
    int popPrice = 2;
    
public:
    // Theater name and phone number
    Theater(string Name, string Phone);
    // Add a movie at a specific time
    void AddMovie(Movie &Movie);
    // Return the movie shown at or after the given hour
    // Return "" if none are upcoming
    string GetMovieForHour(int Hour);
    
    // When will the movie of the the given genre be sown
    // Return -1 if none exist
    int GetShowTimeForGenre(string Genre);
    
    // Cost of popcorn
    int GetPopcornPrice();
    // Cost of coke
    int GetCokePrice();
};


#endif /* Theater_hpp */
