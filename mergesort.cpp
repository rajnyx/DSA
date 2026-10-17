#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &arr, int st, int mid, int end) {
    vector <int> temp;
    int left = st;
    int right = mid+1;
    while (left<=mid && right<=end) {
        if (arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }   
    while (left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=end) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i=st; i<=end; i++) {
        arr[i] = temp[i-st];
    }
}
void mergesort(vector <int> &arr, int st, int end) { 
    if (st==end) {
        return;
    }
    int mid = (st+end)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
    merge(arr,st,mid,end);  
}
int main() {
    vector <int> arr=  {3,1,2,4,1};
    mergesort(arr,0,4);
    for (int i=0; i<=4; i++) {
        cout<<arr[i]<<" ";
    }
}