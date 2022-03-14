/**
 * @file secondPointer.c
 * @author your name (you@domain.com)
 * @brief 二级指针
 * @version 0.1
 * @date 2022-03-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "stdio.h"


void test(int **p){
    printf("**p = %d \n", **p);
    printf("&(*p) = %d \n", &(*p));
    printf("*p = %d \n", *p);
    printf("p = %d \n", p);
    printf("&p = %d \n", &p);
}

int main()
{
    int *p = NULL;
    int a = 930620;
    p = &a;
    printf("*p = %d \n", *p);
    printf("p = %d \n", p);
    printf("&p = %d \n", &p);


    printf("============ \n");
    test(&p);
    // printf("&(*p) = %d \n", &(*p));
    // printf("a = %d \n", a);
    // printf("&a = %d \n", &a);
    // printf("p = %d \n", p);


    
    
    return 0;
}



