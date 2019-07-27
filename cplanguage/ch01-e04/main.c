/*了解函数的使用 

以幂函数为例*/
#include <stdio.h>
#include <math.h>
int power(int m, int n);
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif

    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", power(2, j));
    }

    return 0;
}
int power(int m, int n){
    int p = 1;
    for (int i = 0; i <= n; i++)
    {
       p *=m;
    }
    return p;
}
