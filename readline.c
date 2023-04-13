#include "main.h"


/**
 * needs to split files by '\n' char probably this works just fine
 */
int readline(char s[], int size)
{
    char* tmp = s;
    while (--size>0 && read(0,tmp,1)!=0 && *tmp++ != '\0');
    *tmp = '\0';
    return (tmp-s);
}