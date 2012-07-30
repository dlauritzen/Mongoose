#ifndef Mongoose_Memory_h
#define Mongoose_Memory_h

#include "system.h"

unsigned char * memcpy(const unsigned char * src, unsigned char * dest, size_t count);
unsigned char * memset(unsigned char * dest, unsigned char val, size_t count);
unsigned short * memsetw(unsigned short * dest, unsigned short val, size_t count);

#endif
