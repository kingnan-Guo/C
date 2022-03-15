/**
 * @file StructPointer.c
 * @author your name (you@domain.com)
 * @brief  结构体指针
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "stdio.h"


struct Node
{
    int value;
    struct Node* next;

    
};




int main()
{
    // 定义Node的数据 结构
    struct Node a, b;
    a.value = 27;
    b.value = 28;
    a.next = &b;
    a.next ->value = 2;
    printf("b.value  = %x \n", b.value);
    printf("a.value  = %x \n", a.value);
    printf("a.next  = %x \n", a.next);
    printf("*a.next  = %x \n", *a.next);
    printf("&a.next  = %x \n", &a.next);

    return 0;
}
