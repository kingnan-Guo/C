/**
 * @file pointFive.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "stdio.h"

int max(int x, int y){
    int z;
    if(x > y){
        z = x;
    } else{
        z = y;
    }
    return (z);
};


int min(int x, int y){
    int z;
    if(x > y){
        z = y;
    } else{
        z = x;
    }
    return (z);
};

int main()
{
    int c;
    int (* p)(int, int) = max;
    // int (* p)(int, int);
    // p = max;



    c = (* p)(5, 6);
    printf("c = %d \n", c);


    printf("====== \n");

    int (* k)(int, int);

    int n, num;
    scanf("%d", &n);
    // &n = 2;
    if(n == 1){
        k = max;
    } else if (n==2)
    {
        k = min;
    }
    num = (* k)(28, 29);
    printf("num = %d \n", num);
    



    
    return 0;
}



