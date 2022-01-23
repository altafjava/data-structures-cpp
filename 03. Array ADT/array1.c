#include <stdio.h>
#include <stdlib.h>
struct Array
{
  int *a;
  int size;
  int length;
};

void display(struct Array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d\n", arr.a[i]);
  }
}
int main(int argc, char const *argv[])
{
  struct Array arr;
  int size = 10;
  arr.a = (int *)malloc(size * sizeof(int));
  arr.size = size;
  arr.length = 0;
  for (int i = 0; i < 5; i++)
  {
    arr.a[i] = (i + 1) * 2;
    arr.length = arr.length + 1;
  }
  display(arr);
  return 0;
}
