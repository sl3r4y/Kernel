#ifndef __IO_H__
#define __IO_H__

void outb(unsigned short port, unsigned char val);

unsigned char inb(unsigned short port);
#endif