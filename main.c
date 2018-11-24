#include <stdio.h>

extern char _binary_data_txt_start;
extern char _binary_data_txt_end;

main()
{
    char*  p = &_binary_data_txt_start;

    while ( p != &_binary_data_txt_end ) putchar(*p++);
}
