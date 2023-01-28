#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv)
{

    printf("Provided %d arguments\n", argc);
    if(argc == 1)
        help("basic", argv[0]);
    else if(argc == 2)
        help("advanced", argv[0]);

    for(int i=1; i < argc; i++)
        printf("Argument %d : %s\n", i, argv[i]);

}
