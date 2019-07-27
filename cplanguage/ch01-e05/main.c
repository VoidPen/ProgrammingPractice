/*函数做参数使用时
 */
#include <stdio.h>
#define MAXLINE 1000
int getline(char s[], int lim);
int copy(char to[], char from[]);

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int max = 0;
    int len;
    int line[MAXLINE];
    int longest[MAXLINE];
    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
    {
        printf("%d", longest);
    }

    return 0;
}
/*返回输入文件一行的长度，包括换行符 ，以及文件的行数*/
int getline(char s[], int lim)
{
    int c, i;
    for (int i = 0; i < lim- 1 && (c = getcher()) != EOF && c != '\n'; i++)
    {
        s[i] = c;/*将输入字符存入数组中，直到c=\n时跳出循环 */
    }
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}