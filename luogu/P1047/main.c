/*
题目描述
某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。
我们可以把马路看成一个数轴，马路的一端在数轴00的位置，另一端在L的位置；
数轴上的每个整数点，即0,1,2,…,L，都种有一棵树。

由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。
已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的树
（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。

输入格式
第一行有2个整数L(1≤L≤10000)和 M(1≤M≤100)，L代表马路的长度，M代表区域的数目，L和M之间用一个空格隔开。
接下来的M行每行包含2个不同的整数，用一个空格隔开，表示一个区域的起始点和终止点的坐标。

输出格式
11个整数，表示马路上剩余的树的数目。 */
#include <stdio.h>
int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int l, m, a[3][2] = {0}, x;
    scanf("%d %d", &l, &m);
    //printf("%d %d\n", l, m);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &a[i][1], &a[i][2]);
        //printf("%d %d\n", a[i][1], a[i][2]);
        int temp1 = 0, temp2 = 0;
    }
    return 0;
}