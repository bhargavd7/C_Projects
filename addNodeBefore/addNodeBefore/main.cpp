#include <stdio.h>
#include "addNode.h"
// New Message Addded
#ifdef __cplusplus
extern "C"
{
#endif

extern list_t* head;
extern list_t* last;

#ifdef __cplusplus
}
#endif

int main(void)
{

  addNodeInList(1);
  addNodeInList(3);
  addNodeInList(5);
  printList(head);

  addNodeBefore(3, 2);
  printList(head);

  addNodeBefore(5, 4);
  printList(head);

  return 0;
}
