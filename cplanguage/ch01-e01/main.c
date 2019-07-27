/*变量与算术表达式 */
#include <stdio.h>
int main(){
   // int c, f;
    float c, f, i;
    int low = 0;
    int top = 300;
    int step = 20;
    printf("    f-->c\n");
    while (f <= top)
    {
        c = (5.0 / 9.0)*(f - 32.0);
        //c = 5*(f - 32)/9;
       // printf("%d\v%d\n", f, c); 
        printf("%3.0f\t%6.1f\n", f, c);
        f =f + step;
    }
    printf("buchang %f\n", 137.8 - 126.7); 
    c = 60;
    while ( c<= top)
    {
        f = c/(5.0 / 9.0) +32.0;
        printf("f= %6.1f \t c= %3.1f\n", f, c);
        c = c + 11.1;
    }
    printf("------------------------------ \n");
    for ( i = 0; i <= 300;  i +=20)
    {
       printf("%3.0f\t%6.1f\n", i, (5.0 / 9.0)*(i - 32.0));
       
    }
    
return 0;
}