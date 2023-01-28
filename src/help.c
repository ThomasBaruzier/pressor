#include <stdio.h>
#include <string.h>

int help(char *type, char *bin_name)
{

    if(!strcmp(type, "basic"))
    {
    	printf("Usage : %s [OPTIONS]\n", bin_name);
    }
    else if(!strcmp(type, "advanced"))
    {
    	printf("Usage : %s [OPTIONS]\n\n", bin_name);
    	printf("Options :\n", bin_name);
    	printf("Future options will be documented here\n\n", bin_name);
    }

}
