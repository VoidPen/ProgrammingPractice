/*
题目背景
某蒟蒻迷上了“小书童”，有一天登陆时忘记密码了（他没绑定邮箱or手机），于是便把问题抛给了神犇你。
题目描述
蒟蒻虽然忘记密码，但他还记得密码是由一个字符串组成。密码是由原文字符串（由不超过 50 个小写字母组成)
中每个字母向后移动 n位形成的。z 的下一个字母是 a，如此循环。他现在找到了移动前的原文字符串及 n，请你求出密码。
输入格式
第一行：n。第二行：未移动前的一串字母 qwertyuiopasdfghjklzxcvbnm
zabwxy
输出格式
一行，是此蒟蒻的密码 */
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int n;
    char c[51], temp[51];
    scanf("%d %s", &n, c);
    if (n >= 26) { n = n % 26; }// 判断n的值大于等于26时;
    for (int i = 0; i < 51; i++) { temp[i] = 0; }
    for (int i = 0; i < strlen(c); i++) {
        //当z后退一位时字母位a,c[i] + n是否大于z,
        // printf("c-- %c ", c[i]);
        if (c[i] + n > 'z') {
            temp[i] = c[i] + n - 'z' + 'a' - 1;
        } else {
            temp[i] = c[i] + n;
        }
        printf("%c", temp[i]);
    }
    return 0;
}