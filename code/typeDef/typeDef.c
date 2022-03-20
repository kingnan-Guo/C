/**
 * @file typeDef.c
 * @author your name (you@domain.com)
 * @brief  用typedef 声明新类型名
 * @version 0.1
 * @date 2022-03-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "stdio.h"
#include <stdlib.h>
int main()
{
    typedef struct  {
        int month;
        int day;
        int year;
    } Date;

    // 使用 "新的类型名" Date 去定义变量
    Date nowDate;
    Date * p; // 定义结构体指针变量 p，指向此结构体类型数据

    printf("nowData == %d \n", nowDate);
    
    printf("* p  == %d \n", p);
    
    // 命名一个新的类型名 代表 数组类型
    typedef int Num[100]; //声明 Num 为整形数组类型 名
    Num a; //定义 a 为整形数组名 ， 它有 100 个元素; == inta[100]
    // 命名一个新的类型名 代表 指针类型
    typedef char * String; //声明Strring 为字符指针类型
    String p, s[10]; //定义 p 为字符指针变量， s 为字符指针数组


    // 命名一个新的类型名 代表 指向函数的指针类型
    typedef int (* Pointer)(); //声明Pointer为指向函数的指针类型 该函数返回整形值
    Pointer p1, p2; // p1, p2 为 Pointer类型的指针变量
    // 
    typedef int (* Pointer)(); //Pointer 是 int (*)()的同义词。代表指向函数的指针类型，函数职位整型
    

    
    return 0;
}



// float * []; //指针数组
// float (*)[5]; //指向10个元素的一维数组的指针
// double *(double *); //定义哈书，函数的参数 是 double * 型 数据，即指向double 数据的指针，函数返回值也是指向double数据指针
// double (*)(); //指向函数指针，函数返回值类型为 double
// int * (* (*)[10])(void); //指针包含10个元素的一维数组的指针，数组元素的类型为函数指针(函数的地址)， 函数没有参数，函数返回值是int指针





