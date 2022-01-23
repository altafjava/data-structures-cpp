#include <iostream>
using namespace std;
int a[] = {3, 5, 10, 4, 6};
int len1 = sizeof(a) / sizeof(int);
int b[] = {12, 4, 7, 2, 5};
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
  int i;
  for (i = 0; i < len1; i++)
  {
    c[i] = a[i];
    len3++;
  }
  for (int j = 0; j < len2; j++)
  {
    bool flag = false;
    for (int k = 0; k < i; k++)
    {
      if (b[j] == c[k])
      {
        flag = true;
        break;
      }
    }
    if (!flag)
    {
      c[i++] = b[j];
    }
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
