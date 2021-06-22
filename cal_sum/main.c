#include "cal.h"

int main()
{
  int a = 0,b = 0,ret = 0;
  printf("shurunum # \n");
  scanf("%d %d",&a,&b);
  ret = MyAdd(a,b);
  printf("%d + %d = %d\n",a ,b ,ret);

  return 0;
}
