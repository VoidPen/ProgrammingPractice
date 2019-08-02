/*
给定一个数，请将该数各个位上数字反转得到一个新数。
这次与NOIp2011普及组第一题不同的是：这个数可以是小数，分数，百分数，整数。整数反转是将所有数位对调；
小数反转是把整数部分的数反转，再将小数部分的数反转，不交换整数部分与小数部分；
分数反转是把分母的数反转，再把分子的数反转，不交换分子与分母；百分数的分子一定是整数，百分数只改变数字部分。整数新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零；小数新数的末尾不为0（除非小数部分除了0没有别的数，那么只保留1个0）；
分数不约分，分子和分母都不是小数（约分滴童鞋抱歉了，不能过哦。输入数据保证分母不为0），本次没有负数。
输入格式
一个数s

输出格式
一个数，即s的反转数 */
#include <math.h>
#include <stdio.h>
#include <string.h>

void reverse(char *str, char *end) {
    char temp;
    int j, len = (end - str);
    for (int i = 0; i < len / 2; i++) {
        j      = len - i - 1;
        temp   = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void trimleftzero(char *str, char *end) {
    if (strlen(str) <= 1) { return; }

    char *temp = str;
    while (*temp == '0' && (temp + 1) != end) { temp++; }
    while ((*str++ = *temp++) != 0) {}
}

void trimrightzero(char *str) {
    if (strlen(str) <= 1) { return; }

    char *end = &str[strlen(str) - 1];
    while (end > str && *end == '0') end--;
    end[1] = 0;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    char word[32];
    char *psep = NULL;
    while (scanf("%s", word) != EOF) {
#ifndef ONLINE_JUDGE
        printf("%s -> ", word);
#endif
        if ((psep = strchr(word, '.')) != NULL) {
            reverse(word, psep);
            reverse(psep + 1, word+strlen(word));
            trimrightzero(psep + 1);
            trimleftzero(word, psep);
        } else if ((psep = strchr(word, '/')) != NULL) {
            reverse(word, psep);
            reverse(psep + 1, word+strlen(word));
            trimleftzero(psep + 1, word+strlen(word));
            trimleftzero(word, psep);
        } else if ((psep = strchr(word, '%')) != NULL) {
            reverse(word, psep);
            trimleftzero(word, psep);
        } else {
            reverse(word, word+strlen(word));
            trimleftzero(word, word+strlen(word));
        }
        // printf("%s\n", word);
        printf("%s", word);
#ifndef ONLINE_JUDGE
        printf("\n");
#endif
    }

    return 0;
}
