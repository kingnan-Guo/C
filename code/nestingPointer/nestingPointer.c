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



// 
void test(int **p){
    printf(" ============ \n");
    printf("**p = %d \n", **p);
    printf("&(**p) = %d \n", &(**p));
    printf("*p = %d \n", *p);
    printf("p = %d \n", p);
    printf("&p = %d \n", &p);

    // printf("***p = %d \n", ***p);
    
}




// void test(int ***p) 的传参数 带几个 * 都没关系，因为重要的是 传过来的 P1； P1 为 test(&p) 中 的 &p；也就是 p1 = p的地址
// void test(int ***p1){
//     printf(" ============ \n");
//     printf("**p = %d \n", **p1);
//     printf("&(**p) = %d \n", &(**p1));
//     printf("*p = %d \n", *p1);
//     printf("p = %d \n", p1);
//     printf("&p = %d \n", &p1);

//     // printf("***p = %d \n", ***p1);
// }




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

