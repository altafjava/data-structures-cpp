#include <iostream>
using namespace std;
int arr[10] = {4, 8, 13, 16, 20, 25, 28, 33};
int sz = sizeof(arr) / sizeof(int);
int length = 8;
void insertInSortedArray1(int element)
{
  if (length < sz)
  {
    int index = 0;
    for (int i = 0; i < length; i++)
    {
      if (arr[i] > element)
      {
        index = i;
        break;
      }
    }
    int i;
    for (i = length; i > index; i--)
    {
      arr[i] = arr[i - 1];
    }
    arr[i] = element;
    length++;
    cout << "Element " << element << " inserted at index " << i << endl;
  }
  else
  {
    cout << "Not enough space in the Array" << endl;
  }
}
void insertInSortedArray2(int element)
{
  if (length < sz)
  {

    int i = length - 1;
    while (arr[i] > element)
    {
      arr[i + 1] = arr[i];
      i--;
    }
    arr[i + 1] = element;
    length++;
    cout << "Element " << element << " inserted at index " << i + 1 << endl;
  }
  else
  {
    cerr << "Not enough space in Array" << endl;
  }
}
bool isArraySorted()
{
  for (int i = 0; i < length - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
  }
  return true;
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
  insertInSortedArray1(18);
  print();
  insertInSortedArray2(29);
  print();
  insertInSortedArray2(26);
  print();
  insertInSortedArray1(30);
  print();
  cout << "isArraySorted()=" << isArraySorted() << endl;
  arr[5] = 3;
  print();
  cout << "isArraySorted()=" << isArraySorted() << endl;
  return 0;
}
