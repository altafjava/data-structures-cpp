#include <iostream>
using namespace std;
int arr[] = {8, 3, 9, 15, 6, 10, 7, 2, 12, 4};
int length = sizeof(arr) / sizeof(int);
void reverse1()
{
  int *brr = new int[length];
  for (int i = length - 1, j = 0; i >= 0; i--, j++)
  {
    brr[j] = arr[i];
  }
  for (int i = 0; i < length; i++)
  {
    arr[i] = brr[i];
  }
}
void reverse2()
{
  int i = 0;
  int end = length - 1 - i;
  while (i < end)
  {
    int temp = arr[i];
    arr[i] = arr[end];
    arr[end] = temp;
    i++;
    end = length - 1 - i;
  }
}
void leftShift()
{
  int i;
  for (i = 0; i < length - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[i] = 0;
}
void rightShift()
{
  for (int i = length - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = 0;
}
void leftRotate()
{
  int i;
  int temp = arr[0];
  for (i = 0; i < length - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[i] = temp;
}
void rightRotate()
{
  int temp = arr[length - 1];
  for (int i = length - 1; i > 0; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
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
  reverse1();
  print();
  reverse2();
  print();
  leftShift();
  print();
  rightShift();
  print();
  arr[0] = 8;
  print();
  leftRotate();
  print();
  rightRotate();
  print();
  return 0;
}
