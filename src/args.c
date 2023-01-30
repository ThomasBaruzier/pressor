#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loglevels.h"
#include "args.h"

char shortArg;
char longArg[16];
const char *argDict[][2] = {
    {"i, include", "[directory], [file]"},
    {"o, output", "[directory], [file]"},
    {"t, target", "video, photo, audio"},
    {"\0"}
};

int argExist(char *arg, const char *argDict[][2])
{
    for (int i=0; *argDict[i][0]; i++) {
        // extract data from dictionnary
        sscanf(argDict[i][0], "%c, %s", &shortArg, longArg);
        // check argument existance
        if (arg[0] == '-' && arg[1] == shortArg && strlen(arg) == 2) return 1;
        if (arg[0] == '-' && arg[1] == '-' && strcmp(arg + 2, longArg) == 0) return 1;
    }
    return 0;
}

int parseArgs(int argc, char **argv)
{
    for(int i=1; i < argc; i++) {
        if(!argExist(argv[i], argDict)) return i;
    }
    return 0;
}