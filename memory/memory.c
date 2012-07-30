#include "memory.h"

// Copy count bytes of data from src to dest. Return dest
unsigned char * memcpy(const unsigned char * src, unsigned char * dest, size_t count)
{
  size_t i;
  unsigned char * p, * q;

  p = src;
  q = dest;

  for (i = 0; i < count; ++i)
  {
    *q = *p;
    ++q;
    ++p;
  }

  return dest;
}

// Set count bytes in dest to val. Return dest
unsigned char * memset(unsigned char * dest, unsigned char val, size_t count)
{
  size_t i;
  unsigned char * p;

  for (i = 0; i < count; ++i)
  {
    *p = val;
    ++p;
  }

  return dest;
}

// Same as memset, but with 16-bit values
unsigned short * memsetw(unsigned short * dest, unsigned short val, size_t count)
{
  size_t i;
  unsigned short * p;

  for (i = 0; i < count; ++i)
  {
    *p = val;
    ++p;
  }

  return dest;
}
