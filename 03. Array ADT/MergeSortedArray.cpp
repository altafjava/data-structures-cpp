#include <iostream>
using namespace std;
int arr1[] = {3, 5, 6, 7, 25};
int length1 = sizeof(arr1) / sizeof(int);
int arr2[] = {4, 10, 12, 22, 23, 28};
int length2 = sizeof(arr2) / sizeof(int);
int *brr = new int[length1 + length2];
void mergeArrays()
{
  int i = 0, j = 0, k = 0;
  while (i < length1 && j < length2)
  {
    if (arr1[i] < arr2[j])
    {
      brr[k++] = arr1[i++];
    }
    else
    {
      brr[k++] = arr2[j++];
    }
  }
  while (i < length1)
  {
    brr[k++] = arr1[i++];
  }
  while (j < length2)
  {
    brr[k++] = arr2[j++];
  }
}
void print(int arr[], int length)
{
  cout << "[";
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}
int main(int argc, char const *argv[])
{
  print(arr1, length1);
  print(arr2, length2);
  print(brr, length1 + length2);
  mergeArrays();
  print(brr, length1 + length2);
  return 0;
}
