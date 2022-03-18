/**
 * @file pointSecond.c
 * @author your name (you@domain.com)
 * @brief 指针变量作为函数参数
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "stdio.h"

int main(int argc, char const *argv[])
{
    int a[10];
    int * p, i;
    printf("=====");
    // for (i = 0; i < 3; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
    for (p = a; p < (a + 3); p++)
    {
        //为什么 写成 指针变量 还是可以输入 ，理论上来说 p中储存的是地址
        // 书上说， 是用指针变量P老只想元素， 用P++使P 的值不断改变从而指向 不同的 元素
        scanf("%d", p);
    }
    // 这里的 p = a ，是将a的首地址 传给了 p，就是 p的初值 等于 &a[0]
    for (p = a; p < (a + 3); p++)
    {
        printf("%d", * p);
    }
    
    
    
    return 0;
}
