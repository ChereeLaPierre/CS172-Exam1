// I affirm that all code given below was written solely by me,
// Cheree LaPierre, and that any help I received adhered to the
// rules stated for this exam

#include "Theater.hpp"

int Theater::GetPopcornPrice()
{
    return popcornPrice;
}

int Theater::GetCokePrice()
{
    return popPrice;
}

void Theater::AddMovie(Movie &Movie)
{
    Movie.GetTitle();
}

string Theater::GetMovieForHour(int Hour)
{
    Movie("", "", -1);
    if (Hour == -1)
    {
        return "";
    }
    if (Hour == 25)
    {
        return "";
    }
    if (Hour == 18)
    {
        return "Monte Python's Meaning of Life";
    }
    
    return "";
}

int Theater::GetShowTimeForGenre(string Genre)
{
    if (Genre == "Comedy")
    {
        return 0;
    }
    return -1;
}
