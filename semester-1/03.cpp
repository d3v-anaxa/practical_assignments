// WAP to compute the sum of the first n terms of the following series ->
// S = 1+1/2+1/3+1/4+……
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double compute(double n)
{
  double res = 0;
  for (double i = 1; i <= n; i++)
  {
    res += (1 / i);
  }
  return res;
}

int main(){
  double input;
  std::cout << "Enter the value of n : " && std::cin >> input;
  std::cout << "The required sum is : " << compute(input) << endl;
}