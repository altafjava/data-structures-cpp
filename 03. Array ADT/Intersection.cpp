#include <iostream>
using namespace std;
int a[] = {3, 5, 10, 4, 6};
int len1 = sizeof(a) / sizeof(int);
int b[] = {12, 4, 7, 2, 5};
int len2 = sizeof(b) / sizeof(int);
int *c = new int[len1];
int len3 = len1;
void print(int arr[], int length)
{
  cout << "[";
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}
void doIntersection()
{
  int k = 0;
  for (int i = 0; i < len1; i++)
  {
    for (int j = 0; j < len2; j++)
    {
      if (a[i] == b[j])
      {
        c[k++] = a[i];
      }
    }
  }
  len3 = k;
}
int main(int argc, char const *argv[])
{
  print(a, len1);
  print(b, len2);
  doIntersection();
  print(c, len3);
  return 0;
}
