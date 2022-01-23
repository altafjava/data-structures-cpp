#include <iostream>
using namespace std;

int findSingleMissingElementInNaturalNo(int arr[], int length)
{
  int total = 0;
  for (int i = 0; i < length; i++)
  {
    total += arr[i];
  }
  int sum = (arr[length - 1] * (arr[length - 1] + 1)) / 2;
  return sum - total;
}
int findSingleMissingElement(int arr[], int length)
{
  if (length > 1)
  {
    bool flag = false;
    int diff = arr[1] - arr[0];
    int i;
    for (i = 0; i < length - 1; i++)
    {
      if (arr[i + 1] - arr[i] != diff)
      {
        flag = true;
        break;
      }
    }
    cout << arr[i] - 1 << endl;
    int missingElement = arr[i] + diff;
    return missingElement;
  }
  return -1;
}
int main(int argc, char const *argv[])
{
  int arr1[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
  int len1 = sizeof(arr1) / sizeof(int);
  int missingNo = findSingleMissingElementInNaturalNo(arr1, len1);
  cout << "Single missing no=" << missingNo << endl;
  int arr2[] = {6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17};
  int len2 = sizeof(arr2) / sizeof(int);
  missingNo = findSingleMissingElement(arr2, len2);
  cout << "Single Missing no=" << missingNo << endl;
  return 0;
}
