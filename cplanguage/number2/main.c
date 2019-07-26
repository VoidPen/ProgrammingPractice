#include <stdio.h>
#define IN 1
#define OUT 2
int main()
{
    // freopen("in.txt", "r", stdin);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    int c, n = 0, t = 0, cn = 0, ch = 0;
    int state = OUT;
    while ((c = getchar()) != EOF)
    {
        ++ch;
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++cn;
        }
    }
    printf("%d %d", ch, cn);

    while ((c = getchar()) != EOF)
    {

        //putchar("%d ", c);7
        if (c == '\n')
        {
            ++n;
            //printf("-");
        }
        else if (c == '\t')
        {
            ++t;
            // printf("+");
        }
        else if (c == ' ')
        {
            ++cn;
            //printf("=");
        }
        else
        {
            ++ch;
        }
    }

    //printf("%d %d %d %d", n, t, cn, ch);
    return 0;
}
