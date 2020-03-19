#include "../includes/tty.h"
#include "../includes/vars_global.h"

void printk(const char *str)
{
	while (*str != '\0')
	{
		if (*str == '\n')
			vga_cursor_pos = vga_cursor_pos + 80 - (vga_cursor_pos % 80);
		else
			vga[vga_cursor_pos++] = (short)0x0F00 | *str;
		str++;
	}
}

void clear_screen()
{
	for (int i = 0; i < 80 * 30; i++)
		vga[i] = (short)0x0000;
	vga_cursor_pos = 0;
}