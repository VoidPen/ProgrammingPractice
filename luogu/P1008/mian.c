#include <stdio.h>
#include <string.h>

int main()
{
    int bucket[10] = {0}, temp;
    for (int i = 123; i < 329; i++)
    {
        memset(bucket, 0, sizeof(bucket));

        // 设置第1个数
        temp = i;
        while (temp) { bucket[temp % 10] = 1; temp /= 10; }
        // 设置第2个数
        temp = 2 * i;
        while (temp) { bucket[temp % 10] = 1; temp /= 10; }
        // 设置第3个数
        temp = 3 * i;
        while (temp) { bucket[temp % 10] = 1; temp /= 10; }

        // 判断是不是 9 个桶都存在数字
        int count = 0;
        for (size_t i = 1; i <= 9; i++) {
            if (bucket[i] == 1)
                count++;
        }
        if (count == 9) {
            printf("%d %d %d\n", i, 2 * i, 3 * i);
        }
    } 

    return 0;
}
