/*题目描述
有一只小鱼，它平日每天游泳 250 公里，周末休息（实行双休日)，假设从周 x(1≤x≤7) 开始算起，
过了 n(n≤10^6) 天以后，小鱼一共累计游泳了多少公里呢？

输入格式
输入两个整数x,n(表示从周x算起，经过n天）。

输出格式
输出一个整数，表示小鱼累计游泳了多少公里。 */
#include <stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int x, n, distance = 0;
    //int day, y; 
    scanf("%d %d", &x, &n);
    //printf("%d %d", x, n);
    for (size_t i = 0; i < n; i++)
    {
        if (((x + i) % 7 != 6 && (x + i) % 7 != 0))
        {
            distance += 250;
        }
    }
    printf("%d", distance);
return 0;
}