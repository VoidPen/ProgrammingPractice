/*题目描述
试计算在区间 1 到 n 所有整数中，数字 x(0 ≤ x ≤ 9)共出现了多少次？
例如，在 1到 11中，即在 1,2,3,4,5,6,7,8,9,10,11中，
数字 1 出现了 4 次。
输入格式
2个整数n,x之间用一个空格隔开。
输出格式
1个整数，表示x出现的次数。
 */
#include <stdio.h>
int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
   int n, x;
   int temp, y, count = 0;
   scanf("%d %d", &n, &x);
   //printf("%d %d", n, x);
   for (size_t i = 1; i <= n; i++)
   {
       temp = i;
       //printf("%d\n", temp);
       while(temp){
            y =temp%10;
            temp /= 10; 
            //printf("%d\n", y);
            if(y == x){
                count++;
                //printf("+1\n"); 
            }
       }
   }
   printf("%d", count);
return 0;
}