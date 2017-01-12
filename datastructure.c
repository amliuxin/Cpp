#include <stdio.h>

int main(int argc, char const *argv[])
{
    int max1 = 0, max2 = 0, num;
    while (scanf("%d", &num) != EOF)
    {
        if (num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if (num > max2)
            max2 = num;
        else
            continue;
    }
    printf("%d %d\n", max1, max2);
    return 0;
}