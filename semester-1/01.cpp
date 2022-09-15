// WAP to print the sum and product of digits of an integer. 
#include <iostream>
using namespace std;

std::pair<int, int> operate(int x)
{
  pair<int, int> result;
  result.first = 0; // This will be the sum
  result.second = 1;// This will be the product

  while (x != 0)
  {
    result.first += (x % 10);
    result.second *= (x % 10);
    x /= 10;
  }
  return result;
}

int main()
{
  int input;
  std::cout << "Enter an Integer : " && std::cin >> input;
  pair<int, int> result = operate(input);
  std::cout << "The sum is : " << result.first << "\nThe product is : " << result.second << endl;
}