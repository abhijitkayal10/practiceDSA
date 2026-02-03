#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr={-2,0,1,5,-3,-2};
    int left = 0;
    int right = arr.size()-1;
    while(left<right){
        if(arr[left]<0){
            left++;
        }
        else if(arr[right]>=0){
            right--;
        }
        else{
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    for(int i=0; i<arr.size(); i++){
        cout<<" "<<arr[i];
    }
	return 0;
}
