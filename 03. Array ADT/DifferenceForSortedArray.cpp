#include <iostream>
using namespace std;
int arr[] = {3, 4, 5, 6, 10};
int l1 = sizeof(arr) / sizeof(int);
int brr[] = {2, 4, 5, 7, 12, 14, 17};
int l2 = sizeof(brr) / sizeof(int);
int *crr;
int len3 = 0;
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
  int i = 0, j = 0, k = 0;
  crr = new int[len1];
  while (i < len1 && j < len2)
  {
    if (a[i] < b[j])
    {
      crr[k++] = a[i++];
    }
    else if (a[i] > b[j])
    {
      j++;
    }
    else
    {
      i++;
      j++;
    }
  }
  while (i < len1)
  {
    crr[k++] = a[i++];
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
