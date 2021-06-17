#include "prog.h"
void prog()
{
  char bar[num];
  memset(bar,0,sizeof(bar));
  int i = 0;
  const char *t = "|/-\\";
  while(i<100){
    bar[i++] = '#';
    printf("[%-100s][%3d%%][%c]\r",bar,i,t[i%4]);
    fflush(stdout);
    usleep(1000000);
  }
  printf("\n");
}
