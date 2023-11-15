#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void display_prompt(void);
void joeln_(const char *message);
void read_command(char *command, size_t size);
void execute_command(const char *command);

#endif
