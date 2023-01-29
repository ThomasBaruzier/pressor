#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char **argv)
{
	int loglevel = 3, colors = 1;
    int p[2] = {loglevel, colors}; // parameters

    if(argc == 1) {
        error("No arguments provided", p);
        help("basic", argv[0]);
        exit(1);
    }

    for(int i=1; i < argc; i++)
        printf("Argument %d : %s\n", i, argv[i]);

    success("test success", p);
    error("test error", p);
    warn("test warning", p);
    info("test info", p);
    debug("test debug", p);

    exit(0);
}
