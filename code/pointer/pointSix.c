/**
 * @file pointSix.c
 * @author your name (you@domain.com)
 * @brief 返回指针的函数  (这个暂时没有弄明白)
 * @version 0.1
 * @date 2022-03-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "stdio.h"
#include <stdlib.h>

// 函数 search 定义为指针类型的函数，他的形参 pointer 是指向包含4 各元素的 一位数组指针变量。
//  pointer + 1 指向 score 赎罪序号为1 的行
// 返回一个地址 &score[k][0] 
float * search(float ( * pointer)[4], int n){ // 形参 pointer是指向一维素组的 指针变量， 个人理解 现在的 pointer 特别象像是 指向 指向score 头部首地址的指针？？？
    float * pt;
    printf("pointer =%d", pointer);
    pt = * (pointer + n);
    return (pt);
}


int main(int argc, char const *argv[])
{
    float score[][4] = {{60, 70, 80, 90}, {56, 98, 55, 33}, {34, 78, 90, 66}};
    float * p;
    int i, k;
    printf("enter the number of student");
    scanf("%d", &k);
    printf("the scores of No.%d are: \n", k);
    p = search(score, k);
    for ( i = 0; i < 4; i++)
    {
        /* code */
        printf("%5.2f \t", *(p + i)); //"%5.2f \t",是什么东西
        printf("\n");
    }
    

    return 0;
}

