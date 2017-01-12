#include <stdio.h>
#include <math.h>

#define maxSize 100

int max(int x, int y)
{
    if (x > y) return x;
    else return y;
}

int main(int argc, char const *argv[])
{
    int arr[maxSize];
    int i, r, n = 0;
    while(scanf("%d", &r) != EOF)
        arr[n++] = r;
    int CurrentSum = arr[0];
    int ans = CurrentSum;
    for (i = 1; i < n; ++i)
    {
        CurrentSum = max(CurrentSum + arr[i], arr[i]);
        ans = max(ans, CurrentSum);
    }
    printf("%d\n", ans);
    return 0;
}