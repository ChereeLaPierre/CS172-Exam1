// I affirm that all code given below was written solely by me,
// Cheree LaPierre, and that any help I received adhered to the
// rules stated for this exam

#include "Movie.hpp"
Movie::Movie(string Title, string Genre, int ShowTime)
{
    titleName = Title;
    genreType = Genre;
    time = ShowTime;
}

string Movie::GetTitle()
{
    return titleName;
}

string Movie::GetGenre()
{
    return genreType;
}

int Movie::GetShowtime()
{
    return time;
}

