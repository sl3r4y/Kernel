#include "../includes/tty.h"
#include "../includes/keyboard.h"

extern "C" void kmain()
{
	init_keyboard();

	const char* kernel_version = "Kernel v0.0.1\n";
	
	printk(kernel_version);

	while(1) {
		
	}
}

