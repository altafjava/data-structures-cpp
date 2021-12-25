#include <iostream>
using namespace std;
void toh(int n, int a, int b, int c)
{
  if (n > 0)
  {
    toh(n - 1, a, c, b);
    char ch1, ch2;
    ch1 = a == 1 ? 'A' : a == 2 ? 'B' : 'C';
    ch2 = c == 1 ? 'A' : c == 2 ? 'B' : 'C';
    cout << ch1 << " to " << ch2 << endl;
    toh(n - 1, b, a, c);
  }
}
int main()
{
  toh(3, 1, 2, 3);
}