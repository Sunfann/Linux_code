#include "Fib.h"

long long *Fibc(int n)
{
  if(n == 0)
    return NULL;

  long long *FibArray = (long long *)malloc((n + 1) * sizeof(long long));
  FibArray[0] = 0;
  FibArray[1] = 1;
  for(int i = 2; i <= n; ++i)
    FibArray[i] = FibArray[i - 1] + FibArray[i - 2];

  printf("%lld\n", *FibArray);
  return FibArray;
}
