// Write a function to find whether a given no. is prime or not.
// Use the same to generate the prime numbers less than 100.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) // function for checking prime numbers
{
  for (int i = 2; i < x - 1; i++)
  {
    if (x % i == 0)
    {
      return false;
    }
  }
  return true;
}

void primeUnder100() // function for printing prime numbers under 100
{
  for (int i = 0; i < 100; i++)
  {
    bool x = isPrime(i);
    if (x == true)
    {
      std::cout << i << " ";
    }
  }
  std::cout << endl;
}

int main()
{
  std::cout << "Prime Numbers under 100 : ";
  primeUnder100();
}