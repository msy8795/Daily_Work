#include <iostream>
using namespace std;
bool ithBitSet(int n, int i){
    return n&(1<<i);
}
int setIthBit(int n, int i){
    return n|(1<<i);
}
int clearIthBit(int n, int i){
    return n&(~(1<<i));
}
int updateIthBit(int n, int i, int v){
    n=clearIthBit(n,i);
    return n|(v<<i);
}
int clearLastIBits(int n, int i){
    return n&(~((1<<(i+1))-1));
}
int clearRangeItoJ(int n, int i, int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    return n&mask;
}

int main() {
    cout<<ithBitSet(5,2)<<endl;
    cout<<setIthBit(5,1)<<endl;
    cout<<clearIthBit(5,2)<<endl;
    cout<<updateIthBit(5,1,1)<<endl;
    cout<<clearLastIBits(15,2)<<endl;
    cout<<clearRangeItoJ(31,1,3)<<endl;
    return 0;
}