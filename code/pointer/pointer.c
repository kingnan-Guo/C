/**
 * @file pointer.c
 * @author your name (you@domain.com)
 * @brief 指针
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "stdio.h"



void test(int *p){
    *p = 11223;
}


int main()
{
    int a = 3;
    unsigned char *p = NULL;
    p = &a; // a 的地址复制 给 p
    
    printf("*p = %d \n", *p);
    printf("p = %d \n", p);
    printf("&p = %d \n", &p);

    printf("&(*p) = %d \n", &(*p));
    printf("a = %d \n", a);
    printf("&a = %d \n", &a);
    printf("p = %d \n", p);


    test(p);
    printf("============ \n");


    printf("*p = %d \n", *p);
    printf("p = %d \n", p);
    printf("&p = %d \n", &p);

    printf("&(*p) = %d \n", &(*p));
    printf("a = %d \n", a);
    printf("&a = %d \n", &a);
    printf("p = %d \n", p);

    /* code */
    return 0;
}



 