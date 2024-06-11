#include <iostream>
using namespace std;

int convertToBinary(int n){
    int binaryNumber = 0;
    int remainder,steps=1;
    while(n!=0){
        remainder=n%2;
        n=n/2;
        binaryNumber+=remainder*steps;
        steps*=10;

    }
    return binaryNumber;
}

int convertToDecimal(int n)
{
    int remainder ,step=1;
    int decimalNumber=0;
    while(n!=0)
    {
        remainder=n%10;
        n/=10;
        decimalNumber+=remainder*step;
        
        step*=2;
        
    }
    return decimalNumber;
}
int main() {
    cout<<convertToBinary(101)<<endl;
    cout<<convertToDecimal(convertToBinary(101))<<endl;
    return 0;
}