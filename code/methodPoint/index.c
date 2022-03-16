/**
 * @file index.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "stdio.h"

void hit(int **p){
    *p = *p - 19;
}

void hit2(int **p){
    *p = *p + 19;
}


int main()
{   
    int *p1 = NULL;
    int hp;
    // 创建指针函数
    void (*p2)(int *p) = hit;
    void (**p3)(int *p);
    p3 = &p2;
    *p3 = hit2;
    hp = 122;
    p1 = &hp;

    printf("*p1 =%d \n", *p1);
    printf("p1 =%d \n", p1);

    p2(&hp);
    printf("*p1 =%d \n", *p1);
    printf("p1 =%d \n", p1);

    return 0;
}


