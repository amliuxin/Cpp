#include <iostream>

int char2int(char ch[], l)
{
    int i, exp = 1; sum = 0;
    for (i = 10; i > 10 - l; --i)
    {
        sum += (int)ch[i] * exp;
        exp *= 10;
    } 
    return sum;
}

void arrcpy(char ch[], char *tmp)
{   
    int i;
    for (i = 0; i < 11; ++i)
        *(tmp + 1) = ch[i];
}

int main()
{
    int n, m, i, j;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        int l = 0, flag = 0;
        char ns[11];
        for (i = 10, i >= 0; --i)
        {
            ns[i] = n % 10;
            n /= 10;
            l++;
        }
        for (i = 11 - l; i < 11; ++i)
            for (j = i + 1; j < 11; ++j)
            {
                if ((int)ns[i] >= (int)ns[j])
                    continue;
                else
                {
                    char tmp[11];
                    arrcpy(ns, tmp);
                    t = char2int(tmp, l);
                    if (t <= m)
                        flag = 1;
                }
            }
        if (flag == 0)
            cout << 'YES' << endl;
        else
            cout << 'NO' << endl;
    }
}