#include "../includes/keyboard.h"
#include "../includes/vars_global.h"
#include "../includes/libs/strings.h"
#include "../includes/tty.h"

void init_keyboard() {
    memset(keyboard_buffer, 0, KEYBOARD_BUFFER_LENGTH);    
    printk("Keyboard initialised !\n");
}

unsigned char getc() {
    unsigned char tmp = keyboard_buffer[0];
    keyboard_buffer_index = 0;
    return tmp;
}