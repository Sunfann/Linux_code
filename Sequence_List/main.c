#include "SeqList.h"

int main()
{
  SL cp;
  SLInit(&cp);
  SLCheckCapacity(&cp);
  SLPushBack(&cp, 0);
  SLPushBack(&cp, 1);
  SLPushBack(&cp, 2);
  SLPushBack(&cp, 3);
  SLPushBack(&cp, 4);
  SLPushBack(&cp, 5);
  SLPushBack(&cp, 6);

  SLPrint(&cp);
  SLPopBack(&cp);
  SLPrint(&cp);
  return 0;
}
