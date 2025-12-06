//Simple pointer program 

#include "pointer_main.h"

int main()
{
  int *p = NULL;
  p = (int *)malloc(sizeof(int));

  if (p == NULL)
  printf("Memory not allocated");
  else
  printf("Memory allocated");
}