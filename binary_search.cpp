#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> arr = {1,2,3,4,5};
    int low = 0;
    int high = arr.size() -1 ;
    int target  = 6;
    int mid  = 0;
    bool flag = true;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            cout<<"element found at index : "<<mid; 
            flag = false;
            break;
        }
        else if (arr[mid] > target) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    if (flag) {
        cout<<"no element found"<<endl;
    }
}