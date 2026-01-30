#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr={1,2,3,4,5,6};
    int first = arr[0];
    for(int i=0; i<arr.size()-1; i++){
        arr[i]=arr[i+1];
    }
    arr[arr.size()-1]=first;
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
