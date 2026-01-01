#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n){
    int binary=0;
    int i=0;
    while(n>0){
        int bit = n%2;
        binary = bit*pow(10,i++)+binary;
        n=n/2;
    }
    cout<<binary;
    return 0;
}

int main() {

    int n;
    cin>>n;
    decimalToBinary(n);
    return 0;
}
