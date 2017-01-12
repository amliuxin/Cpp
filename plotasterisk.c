#include <stdio.h>

void PrintSpace(int n)
{   
    while(n--)
        printf(" ");
}

void PrintRow(int n)
{
    while(n--)
        printf("* ");
}

int main(int argc, char const *argv[])
{
    int m, i;
    scanf("%d", &m);
    for (i = m; i > 0; --i)
    {
        PrintSpace(i - 1);
        PrintRow(m - i + 1);
        putchar('\n');
    }
    for (i = 2; i <= m; ++i)
    {
        PrintSpace(i - 1);
        PrintRow(m - i + 1);
        putchar('\n');
    }
    return 0;
}