/*题目描述
已知：Sn= 1+1/2+1/3+…+1/nS 。显然对于任意一个整数K，当n足够大的时候，S_nS 
n大于K。

现给出一个整数K（1≤k≤15），要求计算出一个最小的n；使得Sn>K。

输入格式
一个正整数K

输出格式
一个正整数N */
#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int k = 0, n = 0;
    double sum = 0;
    scanf("%d", &k);
    while (sum <= k)
    {
        n++;
        sum += (double)1 / n;
    }
    printf("%d", n);
    return 0;
}