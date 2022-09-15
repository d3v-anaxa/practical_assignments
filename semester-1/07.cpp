// WAP to compute the factors of a given number.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> getFactors(int n)
{
  std::vector<int> factors{};
  if (n == 0)
  {
    factors.push_back(0);
    return factors;
  }

  int i = 1;
  factors.push_back(i);

  while (n != 1)
  {
    i++;
    if (n % i == 0)
    {
      factors.push_back(i);
      n /= i;
      i = 1;
    }
  }
  return factors;
}

int main()
{
  int input;
  std::cout << "Enter an Integer : " && std::cin >> input;
  std::vector<int> factors{getFactors(input)};
  std::cout << "Factors of " << input << " : ";
  for (auto x : factors)
  {
    std::cout << x << " ";
  }
  std::cout << endl;
}