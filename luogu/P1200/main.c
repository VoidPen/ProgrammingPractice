/*
题目描述
众所周知，在每一个彗星后都有一只UFO。这些UFO时常来收集地球上的忠诚支持者。不幸的是，他们的飞碟每次出行都只能带上一组支持者。因此，他们要用一种聪明的方案让这些小组提前知道谁会被彗星带走。他们为每个彗星起了一个名字，通过这些名字来决定这个小组是不是被带走的那个特定的小组（你认为是谁给这些彗星取的名字呢？）。关于如何搭配的细节会在下面告诉你；你的任务是写一个程序，通过小组名和彗星名来决定这个小组是否能被那颗彗星后面的UFO带走。

小组名和彗星名都以下列方式转换成一个数字：最终的数字就是名字中所有字母的积，其中AA是11，ZZ是2626。例如，USACOUSACO小组就是21 \times 19 \times 1 \times 3 \times 15=1795521×19×1×3×15=17955。如果小组的数字 \bmod 47mod47等于彗星的数字 \bmod 47mod47,你就得告诉这个小组需要准备好被带走！（记住“a \bmod bamodb”是aa除以bb的余数；34 \bmod 1034mod10等于44）

写出一个程序，读入彗星名和小组名并算出用上面的方案能否将两个名字搭配起来，如果能搭配，就输出“GO”，否则输出“STAY”。小组名和彗星名均是没有空格或标点的一串大写字母（不超过66个字母）。

输入格式
第1行：一个长度为1到6的大写字母串，表示彗星的名字。

第2行：一个长度为1到6的大写字母串，表示队伍的名字。 */
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    char star[7] = {0}, team[7] = {0};
    scanf("%s", star);
    scanf("%s", team);
    //printf("%s\n%s\n", star, team);
    int star1 = 1, team1 = 1;
    for (int i = 0; i < strlen(star); i++)
    {
        if (star[i] == 'A')
        {
            continue;
        }
        star1 *= (star[i] - 'A' + 1);
        //printf("star[i]=%c\tname=%d\ts=%d\n", star[i], (star[i] - 'A' + 1), star1);
    }
    // printf("%d\n", star1);
    for (int i = 0; i < strlen(team); i++)
    {
        if (team[i] == 'A')
        {
            continue;
        }
        team1 *= (team[i] - 'A' + 1);
        //printf("%d\n", team1);
    }
    // printf("%d\n", team1%47);
    if (team1 % 47 == star1 % 47)
    {
        printf("GO");
    }
    else
    {
        printf("STAY");
    }

    return 0;
}
