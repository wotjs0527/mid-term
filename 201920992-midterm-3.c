#include <stdio.h>

void swap(int *pa, int *pb)
{
  int temp;

  temp = *pa;
  *pa = *pb;
  *pb = temp;
}

int main()
{
  int a = 2, b = 6;

  printf("Before: a = %d. b = %d \n", a, b);

  swap(&a, &b);

  printf("After: a = %d, b = %d \n", a, b);

  return 0;
}
