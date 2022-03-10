/**
 * @file nestingPointer.c
 * @author your name (you@domain.com)
 * @brief 嵌套 指针
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include "stdio.h"

void test(int **p){
    printf(" ============ \n");
    printf("**p = %d \n", **p);
    printf("&(**p) = %d \n", &(**p));
    printf("*p = %d \n", *p);
    printf("p = %d \n", p);
    printf("&p = %d \n", &p);
    
}






int main()
{
    int a = 15888;
    int *p = NULL;
    p = &a;
    printf("a = %d \n", a);
    printf("&a = %d \n", &a);
    printf("p = %d \n", p);
    printf("&(*p) = %d \n", &(*p));
    test(&p);
    return 0;
}

