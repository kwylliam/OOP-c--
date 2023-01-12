int factorial(int number)
{
  int n, factorial=1;
  for(n=1; n<=number; n++)
  {
      factorial=factorial*n;  }
  return factorial;
}