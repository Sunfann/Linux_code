#include "SeqList.h"

//动态顺序表初始化
void SLInit(SL *ps)
{
  ps->Arr = (DataType *)malloc(sizeof(DataType) * 4);//动态开辟空间
  if(ps->Arr == NULL)
  {
    printf("开辟空间失败###\n");
      exit(-1);
  }
  ps->size = 0;
  ps->_capacity = 4; 
}

//检查是否需要扩容
void SLCheckCapacity(SL *ps)
{
  if(ps->size == ps->_capacity)
  {
    ps->_capacity *= 2;
    ps->Arr = (DataType *)realloc(ps->Arr, sizeof(DataType)*ps->_capacity);
    if(ps->Arr == NULL)
    {
      printf("开辟空间失败###\n");
      exit(-1);
    }
  }
}

//结果打印
void SLPrint(SL *ps)
{
  assert(ps);

  for(int i = 0; i < ps->size; i++)
  {
    printf("%d",ps->Arr[i]);
  }
  printf("\n");
}

//尾插
void SLPushBack(SL *ps, DataType x)
{
  assert(ps);

  SLCheckCapacity(ps);
  ps->Arr[ps->size] = x;
  ps->size++;
}

//尾删
void SLPopBack(SL *ps)
{
  assert(ps);

  ps->Arr[ps->size - 1] = 0;
  ps->size--;
}


