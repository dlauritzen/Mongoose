#ifndef Mongoose_IO_h
#define Mongoose_IO_h

// Read from an I/O port
unsigned char inportb(unsigned short _port);

// Write to an I/O port
void outportb(unsigned short _port, unsigned char _data);

#endif
