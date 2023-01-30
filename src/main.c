#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "loglevels.h"
#include "help.h"
#include "args.h"

int main(int argc, char **argv)
{
	int loglevel = 3, colors = 1;
    int p[] = {loglevel, colors};
    int ret;

    if(argc == 1) {
        error(p, "No arguments provided", NULL);
        help("basic", argv[0]);
        exit(1);
    }

    ret = parseArgs(argc, argv);
    if(ret) {
        error(p, "Argument does not exist", argv[ret]);
        exit(1);
    }

    exit(0);
}