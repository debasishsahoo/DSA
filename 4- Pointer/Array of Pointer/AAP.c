#include <stdio.h>
int main()
{
  int x[5] = {1, 2, 33, 4, 5};
  int* ptr;

  ptr = &x[4]; 

  printf("*ptr = %d \n", *ptr);
  printf("*ptr+1 = %d \n", *(ptr+1));
  printf("*ptr-1 = %d", *ptr-1);

  return 0;
}
