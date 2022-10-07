// WAP to compute the sum of the first n terms of the following series ->
// S = 1+1/2+1/3+1/4+……
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double compute(int n)
{
  double res = 0;
  for (double i = 1; i <= n; i++)
  {
    res += (1 / i);
  }
  return res;
}

int main()
{
  int input = 0;
  std::cout << "Enter the value of n : " && std::cin >> input;
  if (input < 1)
  {
    std::cout << "invalid input [n >= 1]\n";
    return main();
  }
  std::cout << fixed << setprecision(2) << "The required sum is : " << compute(input) << endl;
}