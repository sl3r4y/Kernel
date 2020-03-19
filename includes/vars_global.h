#ifndef __VARS_GLOBAL_H__
#define __VARS_GLOBAL_H__

#define KEYBOARD_BUFFER_LENGTH 1024

static unsigned char keyboard_buffer[KEYBOARD_BUFFER_LENGTH];
static unsigned char keyboard_buffer_index = 0;

static short* vga = (short*)0xb8000;
static int vga_cursor_pos = 0;

#endif