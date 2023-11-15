#include "shell.h"

void read_command(char *command, size_t size)

{
	if(fgets(command, size, stdin) == NULL)
	{
		if(feof(stdin))
		{
			joeln_print("\n");
			exit(EXIT SUCCESS);
		}
		else
		{
			joeln_print("Error while reading an input.\n");
			exit(EXIT FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}



