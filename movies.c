#define _POSIX_C_SOURCE 200809L // needed for strdup extension

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "movies.h"

// Given a string (possibly read-only) of IMDB movie data
// (formatted as "Title,Rating,Runtime,Year,Genre,OscarNominated"),
// create a movie_t object based on the appropriate fields.
// Start by duplicating the string (to make it editable) and
// set the movie_t fields to point to substrings as necessary.
// Convert numeric values to float or int as appropriate.
movie_t
split_data (char *csv)
{
  movie_t movie;
  char *token = strtok (csv, ",");

  movie.title = strdup (token); // copy the first token as the title

  // use strtof() to parse the next token as a float for the rating

  // use strtol() to get the next two tokens as runtime and year

  // copy the token as the movie's genre field

  // if the last token is equal to "true", set the nominated field to true

  return movie;
}

// Build a dynamically allocated string from a movie_t object as follows:
// "[Year] Title - Runtime minutes"
// Rather than allocating all of the space ahead of time, use realloc()
// to grow the string at different stages as needed.
char *
merge_data (movie_t movie)
{
  // Initially an empty string with just enough space for [Year] 
  char *result = calloc (8, sizeof (char *));

  // Start by writing the year and brackets into the given result space.
  // You should use snprintf() for this.

  // Now, use realloc() to grow the string with enough space for the
  // title, then copy the title into the new space.

  // Finally, allocate enough space for the rest of the line and write
  // it in. You may assume the runtime is at most 3 characters long.
  return result;
}
