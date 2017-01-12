#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char *p;
    if ((p = getenv("PATH")))
        printf("PATH = %s\n", p);
    return 0;
}