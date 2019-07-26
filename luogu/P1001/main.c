/* 题目描述
输入两个整数a,b，输出它们的和(|a|,|b|<=10^9)。

注意

pascal使用integer会爆掉哦！
有负数哦！
c/c++的main函数必须是int类型，而且最后要return 0。这不仅对洛谷其他题目有效，而且也是noip/noi比赛的要求！
输入输出格式
输入格式：
两个整数以空格分开

输出格式：
一个数
*/

#include <stdio.h>
//#include <math.h>

int main(int argc, char const *argv[]){
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int a, b;
    scanf("%d %d", &a, &b);
    //printf("%d %d", a, b);
    
    printf("%d", a + b);
   
    return 0;
} 