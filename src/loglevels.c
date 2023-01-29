#include <stdio.h>
#include <string.h>

// params[0] = loglevel
// params[1] = colors

// loglevels
// 0 = errors
// 1 = warnings
// 2 = infos
// 3 = debug

void success(char *success, int *params)
{
    if(params[1]) fprintf(stderr, "\033[1;32mSUCCESS : %s\033[1;0m\n", success);
    else fprintf(stderr, "SUCCESS : %s\n", success);
}

void error(char *error, int *params)
{
    if(params[1]) fprintf(stderr, "\033[1;31mERROR : %s\033[1;0m\n", error);
    else fprintf(stderr, "ERROR : %s\n", error);
}

void warn(char *warn, int *params)
{
    if(params[0] >= 1) {
        if(params[1]) fprintf(stderr, "\033[1;33mWARNING : %s\033[1;0m\n", warn);
        else fprintf(stderr, "WARNING : %s\n", warn);
    }
}

void info(char *info, int *params)
{
    if(params[0] >= 2) {
        if(params[1]) fprintf(stderr, "\033[1;34mINFO : %s\033[1;0m\n", info);
        else fprintf(stderr, "INFO : %s\n", info);
    }
}

void debug(char *debug, int *params)
{
    if(params[0] >= 3) {
        if(params[1]) fprintf(stderr, "\033[1;35mDEBUG : %s\033[1;0m\n", debug);
        else fprintf(stderr, "DEBUG : %s\n", debug);
    }
}
