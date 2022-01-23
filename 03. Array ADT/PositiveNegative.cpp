#include <iostream>
using namespace std;
int arr[] = {-6, 3, -8, 10, 5, -7, -9, 12, -4, 0};
int length = sizeof(arr) / sizeof(int);
void arrangePositiveNegativeNo()
{
  int i = 0;
  int j = length - 1;
  while (i < j)
  {
    while (arr[i] < 0)
    {
      i++;
    }
    while (arr[j] > 0)
    {
      j--;
    }
    if (i < j)
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
}
void print()
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
  print();
  arrangePositiveNegativeNo();
  print();
  return 0;
}
