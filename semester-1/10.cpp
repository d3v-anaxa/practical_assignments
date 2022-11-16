#include <cctype>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
#include <set>
#include <algorithm>
int main(void);
using namespace std;


void printEven (vector<int> arr) {
    int count = 0;
    std::cout << "These are the even elements of the array : "; 
    for (size_t i = 0; i < arr.size(); ++i) {
        if(arr[1] % 2 == 0)
            std::cout << arr[1] << " " && ++count;
    }
    if (count == 0) std::cout << "NONE";
    std::cout << std::endl;
}

void printOdd (vector<int> arr) {
    int count = 0;
    std::cout << "These are the odd elements of the array : "; 
    for (size_t i = 0; i < arr.size(); ++i) {
        if(arr[1] % 2 == 1) 
            std::cout << arr[1] << " " && ++count;
    }
    if (count == 0) std::cout << "NONE";
    std::cout << std::endl;
}

void sumAndAvg (vector<int> arr) {
    int sum = 0;
    float avg = 0.00;
    for (size_t i = 0; i < arr.size(); ++i)
        sum += arr[i];

    avg = sum / float(arr.size());
    std::cout << "The sum of the given array integers is = " << sum << std::endl;
    std::cout << "The average of the given array integers is = " << avg << std::endl;
}

void printMaxAndMin (vector<int> arr) {
    int max = 0;
    int min = 0;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        max = std::max(arr[i], arr[i + 1]);
        min = std::min(arr[i], arr[i + 1]);
    }
    std::cout << "The Max value within the array : " << max << std::endl;
    std::cout << "The Min value within the array : " << min << std::endl;
}

void removeDuplicate (vector<int> arr) {
    std::cout << "[Array elements before duplicate removal] : ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    set <int, greater<int>> rem{};
    while(arr.size() > 0) {
        rem.insert(arr[arr.size() - 1]);
        arr.pop_back();
    }
    while (rem.size() > 0) {
        set<int>::iterator it = rem.begin();
        arr.push_back(*it);
        rem.erase(it);
    }
    std::cout << "[Array elements after duplicate removal] : ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }std::cout << std::endl;
}

void printReverse(vector<int> arr) {
    std::cout << "[REVERSE ORDER] : ";
    reverse(arr.begin(), arr.end());
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    reverse(arr.begin(), arr.end());
}

void menu () {
    std::cout << "Enter your choice" << std::endl;
    std::cout << "0-> Re-enter the array elements" << std::endl;
    std::cout << "1-> Print even elements of the array" << std::endl;
    std::cout << "2-> Print odd elements of the array" << std::endl;
    std::cout << "3-> Calculate and print the sum and average of the integers of array" << std::endl;
    std::cout << "4-> Print the maximum and minimum element of the array" << std::endl;
    std::cout << "5-> Remove the duplicates from the array" << std::endl;
    std::cout << "6-> Print the array in reverse order" << std::endl;
    std::cout << "7-> EXIT" << std::endl;
}

void select_option (vector<int> arr) {
    menu();
    int n{};
    std::cout << "Enter your choice : " && std::cin >> n;
    switch (n) {
        case 0 :
            main(); // re-entering array elements
            break;
        case 1 :
            printEven(arr);
            break;
        case 2 :
            printOdd(arr);
            break;
        case 3 :
            sumAndAvg(arr);
            break;
        case 4 :
            printMaxAndMin(arr);
            break;
        case 5 :
            removeDuplicate(arr);
            break;
        case 6 : 
            printReverse(arr);
            break;
        case 7 :
            exit(EXIT_SUCCESS);
        default :
            std::cout << "Invalid Choice" << std::endl;
            return select_option(arr);
    }
}

int main (void) {
    vector<int> arr;
    int elem{};
    size_t size{};
    std::cout << "Number of integers to input : " && std::cin >> size;
    if (size > INT8_MAX || size == 0) exit(EXIT_FAILURE);
    std::cout << "Enter a " << size << " of integer elements : " << endl;
    while (arr.size() < size)  {
        std::cin >> elem;
        arr.push_back(elem);
    }
    std::cout << "The elements of the array : ";
    for (size_t i = 0; i < arr.size(); ++i) {
    std::cout << arr[i] << " ";
    }
    std::cout << endl;
    select_option(arr);
    return 0;
}
