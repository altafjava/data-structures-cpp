#include <iostream>
using namespace std;

class Array
{
private:
  int *p;
  int size;
  int length;

public:
  Array(int size)
  {
    this->size = size;
    p = new int[size];
  }
  ~Array()
  {
    delete[] p;
    cout << "Array destroyed" << endl;
  }
  void display()
  {
    if (length == 0)
    {
      cout << "Empty Array" << endl;
      return;
    }
    cout << "[";
    for (int i = 0; i < length; i++)
    {
      cout << p[i];
      if (i + 1 != length)
      {
        cout << ",";
      }
    }
    cout << "]" << endl;
  }
  void add(int n)
  {
    p[length] = n;
    cout << "Element " << n << " added at index " << length << endl;
    length++;
  }
  void insert(int index, int element)
  {
    if (index >= size || index < 0)
    {
      cout << "Invalid Index. Minimum index will be 0 & Maximum index will be " << size - 1 << endl;
      return;
    }
    if (index == length)
    {
      add(element);
    }
    else if (index > length)
    {
      p[index] = element;
      cout << "Element " << element << " inserted at index " << index << endl;
      length = index + 1;
    }
    else
    {
      for (int i = length - 1; i >= index; i--)
      {
        p[i + 1] = p[i];
      }
      p[index] = element;
      cout << "Element " << element << " inserted at index " << length << endl;
      length++;
    }
  }
  void remove(int index)
  {
    if (index >= length)
    {
      cout << "Deletion not possible. Index must be <= " << length - 1 << endl;
      return;
    }
    cout << "Element " << p[index] << " deleted successfully from index " << index << endl;
    for (int i = index; i < length - 1; i++)
    {
      p[i] = p[i + 1];
    }
    p[length - 1] = 0;
    length--;
  }
  void linearSearch(int element)
  {
    bool flag = false;
    for (int i = 0; i < length; i++)
    {
      if (element == p[i])
      {
        cout << "Element " << element << " found at index " << i << endl;
        flag = true;
        return;
      }
    }
    if (!flag)
    {
      cout << "Element " << element << " not present in the array" << endl;
    }
  }
  int get(int index)
  {
    if (index >= 0 && index < length)
    {
      cout << "Returning element " << p[index] << " from index " << index << endl;
      return p[index];
    }
    cout << "Index " << index << " is invalid" << endl;
    return -1;
  }
  void set(int index, int value)
  {
    if (index >= 0 && index < length)
    {
      p[index] = value;
      cout << "Element " << value << " inserted at index " << index << endl;
    }
    cout << "Index " << index << " is invalid" << endl;
  }
  int max()
  {
    int max = p[0];
    for (int i = 0; i < length; i++)
    {
      if (max < p[i])
      {
        max = p[i];
      }
    }
    return max;
  }
  int min()
  {
    int min = p[0];
    for (int i = 0; i < length; i++)
    {
      if (min > p[i])
      {
        min = p[i];
      }
    }
    return min;
  }
  int sum()
  {
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
      sum += p[i];
    }
    return sum;
  }
  float avg()
  {
    return sum() / length;
  }
};
int main(int argc, char const *argv[])
{
  Array arr(10);
  arr.display();
  arr.add(45);
  arr.add(35);
  arr.add(85);
  arr.display();
  arr.insert(0, 10);
  arr.display();
  arr.insert(2, 20);
  arr.display();
  arr.insert(5, 30);
  arr.display();
  arr.insert(8, 40);
  arr.display();
  arr.insert(12, 50);
  arr.display();
  arr.remove(12);
  arr.display();
  arr.remove(8);
  arr.display();
  arr.remove(3);
  arr.display();
  arr.remove(0);
  arr.display();
  arr.linearSearch(67);
  arr.linearSearch(30);
  arr.get(3);
  arr.get(20);
  arr.display();
  arr.set(4, 98);
  arr.display();
  cout << "Max element is " << arr.max() << endl;
  cout << "Min element is " << arr.min() << endl;
  cout << "Sum = " << arr.sum() << endl;
  printf("Average = %f\n", arr.avg());
  return 0;
}
