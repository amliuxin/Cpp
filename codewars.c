#include <stdio.h>

#define MAX 210
typedef struct
{
    char v[100];
    int length;
}Str;

int Comp(Str a, Str b)
{
    int s = a.length, i, j;
    for (i = 0; i < b.length; ++i)
        for (j = 0; j < a.length; ++j)
        {
            if (b.v[i] == a.v[j])
                s--;
        }
    if (s == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int m, n, i, j;
    Str a, b;
    Str data[MAX];
    freopen("data.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    scanf("%d %d", &m, &n);
    for(i = 1; i <= m + n; ++i)
    {
        char tmp;
        j = 0;
        tmp = getchar();
        while(tmp != '\b')
        {
            data[i].v[j] = tmp;
            tmp = getchar();
            j++;
        }
    }
    for (j = m + 1; j <= m + n; ++j)
    {
        a = data[i];
        for (i = 1; i <= m; ++i)
        {
            b = data[j];
            if (Comp(a, b)) printf("%s\n", b.v);
        }
    }
    return 0;
}