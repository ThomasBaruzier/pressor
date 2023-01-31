#ifndef LOGLEVELS_H
#define LOGLEVELS_H

void success(int *params, char *message, char *details);
void error(int *params, char *message, char *details);
void warn(int *params, char *message, char *details);
void info(int *params, char *message, char *details);
void debug(int *params, char *message, char *details);

#endif