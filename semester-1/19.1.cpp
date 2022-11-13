#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int factorial (int x);

int main(){
    int num = 0;
    std::cout << "Enter a number to get it's factorial : " && std::cin >> num;
    if(num < 1) std::cout << "INvalid" << endl;
    std::cout << factorial(num) << endl;
}

int factorial (int x)
{
    if ( x == 1 ) return 1;
    return x * factorial(x - 1);
}
