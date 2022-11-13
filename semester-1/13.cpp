// Write a program in which a function is passed address of two variables and then alter its contents.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void alter (char **s1, char **s2)
{
    auto *t = *s1;
    *s1 = *s2;
    *s2 = t;
}

int main(int argc, char **argv)
{
    switch (argc) {
        case 3 :
            std::cout << "[BEFORE SWAP]" << endl;
            std::cout << "element 1 : " << argv[1] << endl;
            std::cout << "element 2 : " << argv[2] << endl;
            alter(&argv[1], &argv[2]);
            std::cout << "[AFTER SWAP]" << endl;
            std::cout << "element 1 : " << argv[1] << endl;
            std::cout << "element 2 : " << argv[2] << endl;
            break;

        default :
            std::cout << "INVALID INPUT" << endl;
            exit(EXIT_FAILURE);
    }
    return 0;
}
