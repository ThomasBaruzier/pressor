#ifndef HELP_H
#define HELP_H

// help.c
void help(char *type, char* bin_name);

// loglevels.c
void success(char *success, int *params);
void error(char *error, int *params);
void warn(char *warn, int *params);
void info(char *info, int *params);
void debug(char *debug, int *params);

#endif
