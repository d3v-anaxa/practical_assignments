// Write a function that checks whether a given string is Palindrome or not. Use this
// function to find whether the string entered by user is Palindrome or not.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<string> &input)
{
  int s = 0, e = input[0].size() - 1;
  while (s <= e / 2)
  {
    if (input[0][s] != input[0][e - s])
    {
      return false;
    }
    s++;
  }
  return true;
}

int main()
{
  std::vector<string> string{"madam"};
  std::cout << boolalpha << "\"" << string[0] << "\" is a Palindrome : " << isPalindrome(string) << endl;
}