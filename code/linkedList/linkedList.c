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

    struct Node *  header = (struct Node *) malloc(sizeof(struct Node));
    // strcpy(str->value, 2);
    // printf("String = %s,  Address = %u \n", header, header);
    struct Node *  flag = header; //将
    // printf("flag == %x \n", flag);
    scanf("%d", &flag -> value);
    // printf("flag == %x \n", flag->value);
    while (flag->value != 0)
    {
        flag-> next =  (struct Node *) malloc(sizeof(struct Node));
        // printf("String = %s,  Address = %u\n", flag, flag);
        flag = flag->next;
        scanf("%d", &flag -> value);
    }
    // printf("flag == %x \n", flag->value); 
    flag->next = NULL;
    flag=header;
    // printf('%s============');
    printf(" \n");
    while (flag != NULL)
    {
        printf("flag->value == %d \n", flag->value);
        flag= flag->next;
        /* code */
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

