// WAP to perform following actions on an array entered by the user ->
// * Print the even-valued elements
// * Print the odd-valued elements
// * Calculate and print the sum and average of the elements of array
// * Print the maximum and minimum element of array
// * Remove the duplicates from the array
// * Print the array in reverse order
// The program should present a menu to the user and ask for one of the options.
// The menu should also include options to re-enter array and to quit the program.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void isEven(vector<int> &nums)
{
  std::cout << "| Even-valued elements : ";
  for (int x : nums)
  {
    if (x % 2 == 0)
    {
      std::cout << x << "\t";
    }
  }
  std::cout << endl;
}

void isOdd(vector<int> &nums)
{
  std::cout << "| Odd-valued elements : ";
  for (int x : nums)
  {
    if (x % 2 != 0)
    {
      std::cout << x << "\t";
    }
  }
  std::cout << endl;
}

void sumAndAvg(vector<int> &nums)
{
  auto sum = 0;
  for (int x : nums)
  {
    sum += x;
  }
  std::cout << "Sum : " << sum << endl;
  std::cout << "Average : " << sum / nums.size() << endl;
}

void maxAndMin(vector<int> &nums)
{
  int max = INT_MIN;
  int min = INT_MAX;
  for (auto x : nums)
  {
    if (x > max)
    {
      max = x;
    }
    if (x < min)
    {
      min = x;
    }
  }
  std::cout << "Maximum : " << max << endl;
  std::cout << "Minimum : " << min << endl;
}

void removeDuplicate(vector<int> &nums)
{
  std::cout << "yet to learn concept" << endl;
}

void reverseArray(vector<int> &nums)
{
  int i = nums.size();
  while (i != 0)
  {
    i--;
    std::cout << nums[i] << "\t";
  }
  std::cout << endl;
}

void menu()
{
  std::cout << "+------------------------------------------------------------------------->\n";
  std::cout << "| 1. Enter the integers for the array [enter 'X' to exit]" << endl;
  std::cout << "| 2. Print the even-valued elements." << endl;
  std::cout << "| 3. Print the odd-valued elements." << endl;
  std::cout << "| 4. Calculate and print the sum and average of the elements of array." << endl;
  std::cout << "| 5. Print the maximum and minimum element of array." << endl;
  std::cout << "| 6. Remove the duplicates from the array." << endl;
  std::cout << "| 7. Print the array in reverse order." << endl;
  std::cout << "| 8. EXIT" << endl;
  std::cout << "+------------------------------------------------------------------------->\n";
}

int getInput()
{
  int input;
  std::cout << "+------------------------------------------------------------------------->\n";
  std::cout << "Enter choice : " && std::cin >> input;
  std::cout << "+------------------------------------------------------------------------->\n";
  return input;
}

int main()
{
  std::vector<int> array{1, 3, -6, 9, -12, 21};
  while (true)
  {
    sleep(2);
    menu();
    int input = getInput();
    switch (input)
    {
    case 2:
      isEven(array);
      break;
    case 3:
      isOdd(array);
      break;
    case 4:
      sumAndAvg(array);
      break;
    case 5:
      maxAndMin(array);
      break;
    case 6:
      removeDuplicate(array);
      break;
    case 7:
      reverseArray(array);
      break;
    case 8:
      exit(EXIT_SUCCESS);
      break;
    default:
      std::cout << "Invalid Input" << endl;
      break;
    }
  }
}