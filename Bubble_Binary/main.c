#include "BubbleBinary.h"

int main()
{
  int Arr[N];
  int temp = 0;
  InpNum(Arr, &temp); 
  BubbleSort(Arr, N);
  BinarySearch(Arr, N, temp);

  return 0;
}
