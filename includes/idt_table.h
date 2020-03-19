#ifndef __IDT_TABLE_H__
#define __IDT_TABLE_H__

struct IDT_entry{
	unsigned short int offset_lowerbits;
	unsigned short int selector;
	unsigned char zero;
	unsigned char type_attr;
	unsigned short int offset_higherbits;
};
 
struct IDT_entry IDT[256];

#endif