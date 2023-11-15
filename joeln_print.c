#include "shell.h"

void joeln_print(const char *my_print_function)

{
	write(STDOUT_FILENO, my_print_function, strlen(my_print_function));
}
