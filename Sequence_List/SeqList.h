#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//#define N 10   //静态顺序表

typedef int DataType;//给int型（顺序表类型）取别名为DataType

//建立动态开辟的数组存储的：动态顺序表
typedef struct SeqList
{
  DataType *Arr;//动态开辟数组(顺序表)
  int size;//有效数据大小（空间）
  int _capacity;//实际空间大小
}SL;//给顺序表结构体变量起别名为 SL

void SLInit(SL *ps);//初
void SLCheckCapacity(SL *ps);//扩容
void SLPrint(SL *ps);
void SLPushBack(SL *ps, DataType x);//尾插：x扩容大小
void SLPopBack(SL *ps);//尾删
