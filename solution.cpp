#include <iostream>
using namespace std;

int fibo(int n)
{
  int ret;
  ret = fibo(n-1) + fib(n-2);
  return ret;
}

int main()
{
  int n;
  cin >> n;
  cout << fibo(n) << endl;
  return 0;
}
