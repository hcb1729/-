#include <stdio.h>
#include <stdlib.h>

// 函数测试
int add(int a, int b) {
    return a + b;
}

int main() {
    printf(" C 语言环境正常运行！\n");
    
    // 变量和循环测试
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("1到10的和: %d\n", sum);
    
    // 函数调用测试
    int a = 10, b = 20;
    printf("%d + %d = %d\n", a, b, add(a, b));
    
    // 动态内存分配测试
    int* arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr);
    printf("内存释放成功！\n");
    
    return 0;
}