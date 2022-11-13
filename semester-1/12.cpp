#include <iostream>
using namespace std;

void swap (int *n1, int *n2){
    auto *t = n1;
    *n1 = *n2;
    *n2 = *t;
}

int main(){
    int n1 = 0, n2 = 0;
    std::cout << "Enter both integers : " && std::cin >> n1 >> n2;
    std::cout << "[BEFORE SWAP]" << endl;
    std::cout << "n1 : " << n1 << "\tn2 : " << n2 << endl;
    swap(n1, n2);
    std::cout << "[AFTER SWAP]" << endl;
    std::cout << "n1 : " << n1 << "\tn2 : " << n2 << endl;
	return 0;
}
