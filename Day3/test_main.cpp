#include <iostream>
#include <vector>
using namespace std;

int findDigitOccursOnce(vector<int> &v){
    int ans=0;
    for(auto it:v)ans^=it;
    return ans;
}

int main() {
    vector<int> v = {4, 4, 5, 5, 6};
    cout << findDigitOccursOnce(v) << endl;

    return 0;
}