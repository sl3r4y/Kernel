#include "../includes/libs/strings.h"

/**
 * This method allows to set to value given in argument the address range which has like address base the first parameter.
 * param: addr - The address base
 *        value - The value to put in the memory
 *        count - The number of time to copy
 */
void *memset(void *addr, int value, size_t count)
{
    unsigned char *ptr = (unsigned char*)addr;
    while (count-- > 0)
        *ptr++ = value;
    return addr;
}