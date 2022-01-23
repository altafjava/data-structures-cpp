#include <iostream>
using namespace std;
int a[] = {3, 4, 5, 6, 10};
int len1 = sizeof(a) / sizeof(int);
int b[] = {2, 4, 5, 7, 12};
int len2 = sizeof(b) / sizeof(int);
int *c = new int[len1 + len2];
int len3;
void print(int arr[], int length)
{
  cout << "[";
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}
void doUnion()
{
  int i = 0, j = 0, k = 0;
  while (i < len1 && j < len2)
  {
    if (a[i] < b[j])
    {
      c[k++] = a[i++];
    }
    else if (b[j] < a[i])
    {
      c[k++] = b[j++];
    }
    else
    {
      c[k++] = a[i++];
      j++;
    }
  }
  while (i < len1)
  {
    c[k++] = a[i++];
  }
  while (j < len2)
  {
    c[k++] = b[j++];
  }
}
int main(int argc, char const *argv[])
{
  print(a, len1);
  print(b, len2);
  doUnion();
  print(c, len1 + len2);
  return 0;
}
