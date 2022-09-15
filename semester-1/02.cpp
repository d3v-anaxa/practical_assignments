// WAP to reverse a number.
#include <iostream>
using namespace std;

int reverse(int x)
{
  int res = 0;
  while (x != 0)
  {
    res = (res * 10) + (x % 10);
    x /= 10;
  }
  return res;
}

int main(){
  int input;
  std::cout << "Enter an Integer : " && std::cin >> input;
  std::cout << "The reverse of " << input << " is " << reverse(input) << endl;
}