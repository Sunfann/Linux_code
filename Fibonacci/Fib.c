#include "Fib.h"

void ArrRev(long long *a,int n);

long long *Fibc(int n)
{
  long long sum = 0;

  if(n == 0)
    return NULL;

  long long *FibArray = (long long *)malloc((n + 1) * sizeof(long long));
  FibArray[0] = 0;
  FibArray[1] = 1;
  for(int i = 2; i <= n; ++i)
    FibArray[i] = FibArray[i - 1] + FibArray[i - 2];
  for(int j = 0; j < n; ++j)
    sum += FibArray[j];

  printf("num = %lld,sum = %lld\n", FibArray[n], sum);

  ArrRev(FibArray, n);

  return FibArray;
}

void Fibb(int m)
{
  int a = 0, b = 1, tp = 0;

  printf("%d %d ", a, b);
  for(int j = 2; j < m; ++j)
  {
    tp = a + b;
    a = b;
    b = tp;
    printf("%d ",tp);
  }
  printf("\n");
}

void ArrRev(long long *a,int n)
{
  for(int i = 0,j = n-1; i < j; ++i, --j)
  {
    int temp = 0;

    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
  for(int k = 0; k < n; ++k)
    printf("%lld ",a[k]);
  printf("\n");
}
