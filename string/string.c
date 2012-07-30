#include "string.h"

size_t strlen(const char * str)
{
  size_t len;
  char * p;

  p = str;
  len = 0;
  while (*p != '\0')
  {
    ++len;
    ++p;
  }
  
  return len;
}
