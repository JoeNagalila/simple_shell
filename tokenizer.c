#include <stdio.h>
#include <string.h>

int main()
{
	char command[] = "My name, is, joeln"";
	// Initializes variables for tokenization
	
	char *token;
	char *delim ",";

	token = strtok(command, delim);

	while (token ! = NULL)
	{
		printf("token: %s/n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}
