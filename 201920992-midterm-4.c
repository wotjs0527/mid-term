#include <stdio.h>

int main( ) // break main, 
{
  int i=0, num=0, j=0;
  printf("Enter the number: ");
  scanf("%d", &num);

  for(i = 1; i <num; i++) // b 9, watch j, local info 
    j += j*i;

  printf("The factorial of %d is %d\n", num, j);

  return 0;
}

