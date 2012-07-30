#include "string.h"
#include "memory.h"

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

char * strcpy(const char * str, char * dest)
{
  size_t len;

  len = strlen(str);
  memcpy(str, dest, len);
  dest[len] = '\0';

  return dest;
}
