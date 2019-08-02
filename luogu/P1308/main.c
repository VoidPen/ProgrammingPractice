/*
题目描述
一般的文本编辑器都有查找单词的功能，该功能可以快速定位特定单词在文章中的位置
，有的还能统计出特定单词在文章中出现的次数。
现在，请你编程实现这一功能，具体要求是：给定一个单词，请你输出它在给定的文章中出现的次数和第一次出现的位置。
注意：匹配单词时，不区分大小写，但要求完全匹配，即给定单词必须与文章中的某一独立单词在不区分大小写的情况下
完全相同（参见样例1 ），如果给定单词仅是文章中某一单词的一部分则不算匹配（参见样例2 ）。
输入格式
共22行。
第11行为一个字符串，其中只含字母，表示给定单词；
第22行为一个字符串，其中只可能包含字母和空格，表示给定的文章。
输出格式
一行，如果在文章中找到给定单词则输出两个整数，两个整数之间用一个空格隔开，
分别是单词在文章中出现的次数和第一次出现的位置（即在文章中第一次出现时，
单词首字母在文章中的位置，位置从00 开始）；如果单词在文章中没有出现，则直接输出一个整数-1−1。
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define YES 1
#define NO 0

void strtolower(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}
int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    size_t index  = 0;
    char word[11] = {0};
    char c;
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            word[index++] = c;
        } else {
            break;
        }
    }
    // scanf("%s", word);
    strtolower(word);
    // printf("%s\n", word);
    char temp[32]  = {0}; //临时变量
    int len        = 0;   //单词长度
    int wordnumber = 0;   //记录相同单词的个数
    int site       = 0;   //记录相同单词出现的位置
    int has_found  = NO;
    while ((c = getchar())) {
        if (c == '\n' || c == ' ' || c == '\t' || c == EOF) {
            if (len == strlen(word)) {
                if (strcmp(temp, word) == 0) {
                    wordnumber++;
                    has_found = YES;
                }
                // printf("[%s] [%s]\n", temp, word);
            }
            if (has_found == NO) { site += (len + 1); }
            len = 0;
            memset(temp, 0, sizeof(temp)); //将temp数组初始化，以便存入其他字母
            if (c == EOF) { break; }
        } else {
            temp[len++] = tolower(c); //将字符转换为小写字母存入数组中
        }
    }
    if (wordnumber > 0) {
        printf("%d %d", wordnumber, site);
    } else {
        printf("-1");
    }
    return 0;
}
