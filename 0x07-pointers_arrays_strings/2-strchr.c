#include "main.h"

char *_strchr(char *s, char c)
{
  char *s;
  char buf [] = "This is a test";

  s = strchr (buf, 't');

  if (s != NULL)
    printf ("found a 't' at %s\n", s);

  return 0;
}
