/**
 * @file pointEight.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "stdio.h"
#include <stdlib.h>

void check(int *p){
    int i;
    printf("=== \n");
    for (i = 0; i < 5; i++)
    {
        if (p[i] < 60)
        {
            // 输出小于 60的 数字
            printf("%d \n", p[i]);
        }
        
    }
    
}


int main()
{
    int *p1, i;
    p1 = (int * ) malloc(5 * sizeof(int));
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", p1 + i);

    }
    check(p1);
    
    return 0;
}

