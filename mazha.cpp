#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x;
    while(scanf("%d", &x) != EOF)
    {
        int i, num;
        for (n = 0; ; ++n)
        {
            num = n * (n + 1) / 2;
            if (num >= x)
                if ((num % 2 == 0 && x % 2 == 0) || (num % 2 != 0 && x % 2 != 0))
                {
                    cout << n <<endl;
                    break;
                }
                else
                    continue;
        }
    }
    return 0;
}