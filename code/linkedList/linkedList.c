/**
 * @file linkedList.c
 * @author your name (you@domain.com)
 * @brief 链表
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "stdio.h"
// #include <malloc.h>

#include <string.h>
#include <stdlib.h>

// void *malloc(size_t size);
struct Node
{
    int value;
    struct Node* next;
};





// ------------------------
// typedef struct linkedNode
// {
//     int value;// 数据域
//     struct linkedNode* next;// 指针域
// } linkedNode, *Link;

// linkedNode st == struct linkedNode st
// link p == struct node *p

// p =&st
// p = (Link) malloc(sizeof(struct linkedNode))
// (struct node *) malloc(sizeof(struct linkedNode))

// ----------------------

int main(void)
{
    // C 库函数 void *malloc(size_t size) 分配所需的内存空间，并返回一个指向它的指针。
    // (struct Node *) 将返回的指针至为 Node 的类型
    // struct Node* header = (struct Node *) malloc(sizeof(struct Node));
    // printf("header == %x \n", header);
    // struct Node*  flag = header;
    // printf("flag == %x \n", flag);
    // scanf("%d", &flag -> value);
    // printf("flag = %d\n", flag);
    // printf("== %lu ", sizeof(struct Node));

    
    // int i;
    // scanf("%d", &i);  //&i 表示变量 i 的地址，&是取地址符
    // printf("i = %d\n", i);

    

 
    /* 最初的内存分配 */
    // C 库函数 void *malloc(size_t size) 分配所需的内存空间，并返回一个指向它的指针。
    // (struct Node *) 将返回的指针至为 Node 的类型
    // header 为当前 通过malloc  创建出来的内存空间返回的指针
    // header 为当前 新创建内存空间的 值

    struct Node *  header = (struct Node *) malloc(sizeof(struct Node));
    // strcpy(str->value, 2);
    // printf("String = %s,  Address = %u \n", header, header);

    //将 header （ 地址） 作为 value 传给 flag ，那么flag 作为起始点的 标记为
    struct Node *  flag = header;  // 等价于 struct Node *  flag; flag = header;
    // printf("flag == %x \n", flag);
    // 先输入 标记为  的 value
    scanf("%d", &flag -> value);
    // printf("flag == %x \n", flag->value);
    while (flag->value != 0)
    {
        // 如果标记位 不为 0  ，那么开辟新的  储存空间。并把新开辟的 储存空间 的地址付给flag 标记位
        flag-> next =  (struct Node *) malloc(sizeof(struct Node));
        // printf("String = %s,  Address = %u\n", flag, flag);
        // 将 flag 标记位 移动到下一个节点，就是新开辟的 空间
        flag = flag->next;
        scanf("%d", &flag -> value);
    }
    // printf("flag == %x \n", flag->value); 
    // 将最终的节点 的 next 指针位 赋值 为 空 作为 链尾
    flag->next = NULL;
    // 将flag 标识位 移动到header 头部
    flag=header;
    // printf('%s============');
    printf(" \n");
    // 开始循环输出标志位
    while (flag != NULL)
    {
        printf("flag->value == %d \n", flag->value);
        flag= flag->next;
    }
    
    

    /* 重新分配内存 */
    //    char *str;
    //    /* 最初的内存分配 */
    //    str = (char *) malloc(15);
    //    strcpy(str, "runoob");
    //    printf("String = %s,  Address = %u\n", str, str);
    
    //    /* 重新分配内存 */
    //    str = (char *) realloc(str, 25);
    //    strcat(str, ".com");
    //    printf("String = %s,  Address = %u\n", str, str);
    //    free(str);
    //    return(0);


    return 0;
}

