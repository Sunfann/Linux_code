#include "BubbleBinary.h"

void Swap(int *a,int *b);

void BubbleSort(int *a,int n)
{
  for(int end = n;end > 0; --end)
  {
    int exchange = 0;
    for(int i = 0; i < end - 1; ++i)
    {
      if(a[i] > a[i+1])
      {
        Swap(&a[i],&a[i+1]);
        exchange = 1;
      }
    }
    if(exchange == 0)
      break;
  }
  for( int j = 0; j < n; j++)
    printf("%d ",a[j]);
  
  printf("\n");
}

void Swap(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}

void BinarySearch(int *Arr, int m, int temp)
{
  int begin = 0;
  int end = m;
  while(begin < end)
  {
    int mid = begin + ((end - begin)>>1);
    if(Arr[mid] < temp)
      begin = mid + 1;
    else if(Arr[mid] > temp)
      end = mid;
    else
      printf("this number is :%d,%d\n",Arr[mid],mid);
      break;
  }
  if(begin == end)
    printf("%d\n",begin);
}

void  InpNum(int *Arr, int *tp)
{
  printf("please input 10 number:");
  for(int k = 0; k < 10; k++)
  {
    scanf("%d",&Arr[k]); 
  }
  printf("please input search number:");
  scanf("%d",tp);
}
