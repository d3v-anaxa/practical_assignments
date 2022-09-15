// WAP to compute the sum of the first n terms of the following series
// S =1-2+3-4+5…………….
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int compute(int n)
{
  int res = 0;
  for (int i = 1; i <= n; i++)
  {
    res = i % 2 == 1 ? (res + i) : (res - i);
  }
  return res;
}

int main(){
  int input;
  std::cout << "Enter the value of n : " && std::cin >> input;
  std::cout << "The obtained result is : " << compute(input) << endl;
}