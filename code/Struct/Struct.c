/**
 * @file Struct.c
 * @author your name (you@domain.com)
 * @brief 结构体
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//  结构体内的 变量 的地址 是 连续的 按照字符类型 有些占用4 个字节  有些占用 8个字节

#include "stdio.h"

struct extra
{
    int nothing;
};


struct skill
{
    /* data */
    char a;
    struct extra wtf;
};


struct monster {
    int sdk; //占用四个字节
    long def; //应该在地址上占用八个字节
    double hp;
    struct skill skl;
};


int main()
{
    /* code */
    struct monster yy;
    yy.hp = 2188521;
    yy.sdk = 218;

    printf("%x \n", &yy.hp);
    printf("%x \n", &yy.sdk);
    return 0;
}