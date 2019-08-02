/*
题目描述
写一个程序从输入文件中去读取四行大写字母（全都是大写的，每行不超过100个字符），
然后用柱状图输出每个字符在输入文件中出现的次数。严格地按照输出样例来安排你的输出格式。
输入格式
四行字符，由大写字母组成，每行不超过100个字符
输出格式
由若干行组成，前几行由空格和星号组成，最后一行则是由空格和字母组成的.
在任何一行末尾不要打印不需要的多余空格。不要打印任何空行。 */
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    char c;
    int wordcount[26];
    // char s[102] = {0};
    // // scanf("%s", s);
    // // printf("%s", s);

    // while (fgets(s, 100, stdin) != NULL) {
    //     printf("%s", s);
    //     for (size_t i = 0; i < strlen(s); i++) {
    //         if (s[i] > 'A' && s[i] < 'Z') { ++wordcount[s[i] - 'A']; }
    //     }
    //     memset(s, 0, sizeof(s));
    // }
    for (int i = 0; i < 26; i++) { wordcount[i] = 0; }
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') { ++wordcount[c - 'A']; }
    }
    // printf("%d\n", wordcount[2]);
    int temp = 0, maxlen = 0;
    for (int i = 0; i < 26; i++) {
        temp = wordcount[i];
        if (maxlen < temp) { maxlen = temp; }
    }
    for (int j = maxlen; j > 0; j--) {
        for (int i = 0; i < 26; i++) {
            if (i != 0) { printf(" "); }
            printf("%s", (wordcount[i] >= j)? "*":" ");
        }
        printf("\n");
    }
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
    return 0;
}
