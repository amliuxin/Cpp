#include <stdio.h>

int main(int argc, char const *argv[])
{
    char out[100], ch;
    int i = 0;
    while (scanf("%c", &ch) != EOF)
    {
        if (ch <= 57 && ch >= 48)
            continue;
        else
        {
            if (ch != 'a' && ch != 'A')
            {
                if (ch >= 'A' && ch <= 'Z')
                    out[i++] = ch + 32;
                else
                    out[i++] = ch;
            }
            else
            {
                if (out[i - 1] != '*')
                {
                    out[i++] = '*';
                    out[i++] = '#';
                    out[i++] = '*';
                }
                else
                {
                    out[i - 1] = '#';
                    out[i++] = '*';
                }
            }
        }
    }
    int j;
    for (j = 0; j < i; ++j)
        printf("%c", out[j]);
    putchar('\n');
    return 0;
}