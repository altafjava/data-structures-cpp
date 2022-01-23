#include <iostream>
using namespace std;
int arr[] = {-9, -8, -7, -6, -5, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 44, 48, 49, 56, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 89, 90, 91};
int length = sizeof(arr) / sizeof(int);
int c = 0;
int binarySearch(int l, int h, int element)
{
  c++;
  if (l <= h)
  {
    int m = (l + h) / 2;
    if (arr[m] == element)
    {
      return m;
    }
    else if (arr[m] < element)
    {
      return binarySearch(m + 1, h, element);
    }
    else
    {
      return binarySearch(l, m - 1, element);
    }
  }
  cout << "count=" << c << endl;
  return -1;
}

int main(int argc, char const *argv[])
{
  int element = 1;
  int index = binarySearch(0, length - 1, element);
  cout << "index of the element " << element << " is " << index << endl;
  return 0;
}
