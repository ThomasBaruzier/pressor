#include <stdio.h>
#include <string.h>

int help(char *type, char *binName)
{

    if(!strcmp(type, "basic"))
    {
    	printf("Usage : %s [OPTIONS]\n", binName);
    }
    else if(!strcmp(type, "advanced"))
    {
    	printf("Usage : %s [OPTIONS]\n\n", binName);
    	printf("Options :\n", binName);
    	printf("Future options will be documented here\n\n", binName);
    }

}