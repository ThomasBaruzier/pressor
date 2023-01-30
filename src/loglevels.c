#include <stdio.h>
#include <string.h>

void logMess(char type, int color, char *message, char *details)
{
    char finalMess[128] = {'\0'};

    if(color) {
        switch (type) {
            case 's': strcat(finalMess, "\033[1;32m"); break;
            case 'e': strcat(finalMess, "\033[1;31m"); break;
            case 'w': strcat(finalMess, "\033[1;33m"); break;
            case 'i': strcat(finalMess, "\033[1;34m"); break;
            case 'd': strcat(finalMess, "\033[1;35m"); break;
        }
    }
    
    switch (type) {
        case 's': strcat(finalMess, "SUCCESS : "); break;
        case 'e': strcat(finalMess, "ERROR : "); break;
        case 'w': strcat(finalMess, "WARNING : "); break;
        case 'i': strcat(finalMess, "INFO : "); break;
        case 'd': strcat(finalMess, "DEBUG : "); break;
    }        

    strcat(finalMess, message);

    if(details != NULL) {
        strcat(finalMess, " : ");
        strcat(finalMess, details);
    }

    printf("%s\033[0m\n", finalMess);
}

void success(int *params, char *message, char *details) {
    logMess('s', params[1], message, details);
}

void error(int *params, char *message, char *details) {
    logMess('e', params[1], message, details);
}

void warning(int *params, char *message, char *details) {
    if(params[0] >= 1) logMess('w', params[1], message, details);
}

void info(int *params, char *message, char *details) {
    if(params[0] >= 2) logMess('i', params[1], message, details);
}

void debug(int *params, char *message, char *details) {
    if(params[0] >= 3) logMess('d', params[1], message, details);
}