#include <iostream>
using namespace std;
int arr[] = {3, 5, 10, 4, 6};
int l1 = sizeof(arr) / sizeof(int);
int brr[] = {12, 4, 7, 2, 5};
int l2 = sizeof(brr) / sizeof(int);
int *crr;
int len3 = l1;
void print(int arr[], int length)
{
  cout << "[";
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}
void doDifference(int a[], int len1, int b[], int len2)
{
  int k = 0;
  crr = new int[len1 + len2];
  for (int i = 0; i < len1; i++)
  {
    bool flag = false;
    for (int j = 0; j < len2; j++)
    {
      if (a[i] == b[j])
      {
        flag = true;
        break;
      }
    }
    if (!flag)
    {
      crr[k++] = a[i];
    }
  }
  len3 = k;
}
int main(int argc, char const *argv[])
{
  print(arr, l1);
  print(brr, l2);
  doDifference(arr, l1, brr, l2);
  print(crr, len3);
  doDifference(brr, l2, arr, l1);
  print(crr, len3);
  return 0;
}
