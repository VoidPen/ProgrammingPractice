/*题目描述
P老师需要去商店买n支铅笔作为小朋友们参加NOIP的礼物。她发现商店一共有 33种包装的铅笔，不同包装内的铅笔数量有可能不同，价格也有可能不同。为了公平起 见，P老师决定只买同一种包装的铅笔。

商店不允许将铅笔的包装拆开，因此P老师可能需要购买超过nn支铅笔才够给小朋 友们发礼物。

现在P老师想知道，在商店每种包装的数量都足够的情况下，要买够至少nn支铅笔最少需要花费多少钱。

输入输出格式
输入格式：
第一行包含一个正整数nn，表示需要的铅笔数量。

接下来三行，每行用22个正整数描述一种包装的铅笔：其中第11个整数表示这种 包装内铅笔的数量，第22个整数表示这种包装的价格。

保证所有的77个数都是不超过1000010000的正整数。

输出格式：
1个整数，表示P老师最少需要花费的钱。 */
#include <stdio.h>
#include <limits.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int a, b, min = INT_MAX, cost;
    scanf("%d", &a);
    int n = a;
    for (int i = 1; i < 4; i++)
    {
        scanf("%d %d", &a, &b);
        // printf("%d %d %d %d\n", n, a, b, n%a);
        //printf("%d %d\n", a, b);
        if (n % a > 0)
        {
            // printf("%d \n", (n/a + 1)*b);
            cost = (n / a + 1) * b;
        }
        else
        {
            cost = (n / a) * b;
        }
        // printf("%d \n", cost);
        //panduanzuishao
        if (min > cost)
        {
            min = cost;
            // printf("%d", min);
        }
    }

    printf("%d", min);

    return 0;
}