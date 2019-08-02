/* 数组 
用数组统计文章中出现的单词数，数字，空白符等   */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
// void shellsort(int v[], int n);
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    //图形打印
    //for (int n = 0; n <= 3; n++) { printf("%d", n); }
    // printf("\n");

    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 2 - i; j++) { printf(" "); }
        for (int k = 0; k <= 2 * i; k++) { printf("*"); }
        printf("\n");
    }
    printf("\n-----------------------------------------\n");
    // printf("%d", arr);
    int ndigit[10], c;
    int MAXLEN = 0;
    for (int n = 0; n < 10; n++) { ndigit[n] = 0; }
    while ((c = getchar()) != EOF) { ++ndigit[c - '0']; }
    for (int ii = 0; ii < 10; ii++) {
        if (MAXLEN < ndigit[ii]) { MAXLEN = ndigit[ii]; }
    }
    printf("%d", MAXLEN);
    printf("\n");
    for (int i = MAXLEN; i >= 1; i--) {
        for (int j = 0; j < 10; j++) {
            if (j!= 0) { printf(" ");}
            printf("%s", (ndigit[j] >= i) ? "*":" " );                       
        }
        printf("\n");
    }
    printf("0 1 2 3 4 5 6 7 8 9");

    return 0;
}
