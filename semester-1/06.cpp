// Write a function to find whether a given no. is prime or not.
// Use the same to generate the prime numbers less than 100.

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) // function for checking prime numbers
{
  for (int i = 2; i < x ; i++)
      if (x % i == 0) return false;
  return true;
}

void primeUnder100() // function for printing prime numbers under 100
{
  for (int i = 0; i < 100; i++)
        std::cout << (isPrime(i) ? to_string(i) : "" ) << (isPrime(i) ? " " : "" ) ;
        std::cout << endl;
}

int main()
{
    int i{};
    std::cout << "1. check prime or not " << std::endl;
    std::cout << "2. print prime numbers under 100 " << std::endl;
    std::cout << "Enter your choice : " && std::cin >> i;
    switch (i) {
        case 1 : 
            int n = 0;
            std::cout << "Enter a positive integer : " && std::cin >> n;
            std::cout << ((isPrime(n)) ? "Is a prime numer" : "Not a prime number") << std::endl;
            break;
        case 2 :
            std::cout << "Prime Numbers under 100 : ";
            primeUnder100();
            break;
       default :
            std::cout << "Invalid choice" << std::endl;
            return -1;
    }
    return 0;
}
