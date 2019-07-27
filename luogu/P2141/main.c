/*
题目描述
珠心算是一种通过在脑中模拟算盘变化来完成快速运算的一种计算技术。珠心算训练，既能够开发智力，又能够为日常生活带来很多便利，因而在很多学校得到普及。

某学校的珠心算老师采用一种快速考察珠心算加法能力的测验方法。他随机生成一个正整数集合，集合中的数各不相同，然后要求学生回答：其中有多少个数，恰好等于集合中另外两个（不同的）数之和？

最近老师出了一些测验题，请你帮忙求出答案。

(本题目为2014NOIP普及T1)

输入格式
共两行，第一行包含一个整数nn，表示测试题中给出的正整数个数。

第二行有nn个正整数，每两个正整数之间用一个空格隔开，表示测试题中给出的正整数。

输出格式
一个整数，表示测验题答案。 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int n;
    scanf("%d", &n);
    int a[n], temp[5000] = {0};
    //printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }
    int k = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            temp[k++] = a[i] + a[j];
            //printf("k = %d temp[k] %d\n", k-1, temp[k-1]);
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* printf("i = %d temp[i] %d\n", i, temp[i]);
        printf("i = %d a[i] %d \n", i, a[i]);*/
        for (int j = 0; j < k; j++)
        {
            if (temp[j] == a[i])
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}
