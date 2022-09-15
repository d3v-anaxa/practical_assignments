// Write a program in which a function is passed address of two variables and then alter its contents.

#include <iostream>

#include <bits/stdc++.h>
using namespace std;

// vector<string, string>(vector<char> &inp1, vector<char> &inp2)

int main()
{
  std::string inp1{"abc"};
  std::string inp2{"xyz"};
  std::cout << inp1 << " " << inp2 << endl;
  string temp = inp1;
  inp1 = inp2;
  inp2 = temp;
  std::cout << &inp1 << " " << &inp2 << endl;
}