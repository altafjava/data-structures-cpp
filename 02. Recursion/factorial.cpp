int factorial(int n)
{
  int p = 1;
  while (n > 1)
  {
    p = p * n;
    n = n - 1;
  }
  return p;
}