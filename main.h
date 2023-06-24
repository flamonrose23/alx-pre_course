#ifndef Main_H
#define Main_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>
#include <signal.h>

char *read_line(void);
char **splits(char *line, char *delim);
int execute(char *parse);
int _putchar(char c);
unsigned int _strlen(char *s);
char *_getenv(char **environ, char *dirname);
char **find_path(char **environ);
char *_strdup(char *str);
extern char **environ;

#endif
