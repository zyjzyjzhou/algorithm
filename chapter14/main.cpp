//
// Created by Administrator on 2023/2/2.
//

#include "iostream"

using namespace std;

int factorial(int num) {
    if(num==1||num==0)
        return 1;
    return num*factorial(num-1);
}

int main() {
    int n;
    n=factorial(5);
    cout<<n;
}
