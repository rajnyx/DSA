// selection sort
#include <bits/stdc++.h>
using namespace std;



// void selection_sort(int arr[],int size) {
//     for (int i=0; i<size-1; i++) {
//         int min_idx = i;
//         for (int j=i+1; j<size; j++) {
//             if (arr[min_idx]>arr[j]) {
//                 min_idx = j;
//             }
//         }
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
// }

// void bubble_sort(int arr[], int len) {
//     for (int i=0; i<len-1; i++) {
//         bool flag = true;
//         for (int j=0; j<len-1-i; j++) {
//             if (arr[j]>arr[j+1]) {
//                 flag = false;
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//         if (flag) {
//             break;
//         }
//     }
// }

// void insertion_sort(int arr[], int len) {
//     for (int i=0; i<len-1; i++) {
//         int key = i+1;
//         while ((arr[key-1]>arr[key]) && key>0) {
//             int temp = arr[key-1];
//             arr[key-1] = arr[key];
//             arr[key] = temp;
//             key--;
//         }   
//     }
// }

// void merge(int arr[], int low, int mid, int high) {
//     vector <int> temp;
//     int st = low;
//     int end = mid+1;
//     while (st <= mid && end<=high) {
//         if (arr[st] <= arr[end]) {
//             temp.emplace_back(arr[st]);
//             st++;
//         }
//         else {
//             temp.emplace_back(arr[end]);
//             end++;
//         }
//     }
//     while (st<=mid && end>=high) {
//         temp.emplace_back(arr[st]);
//         st++;
//     }
//     while (end<=high && st>=mid) {
//         temp.emplace_back(arr[end]);
//         end++;
//     }

//     // for (int i=low; i<=high; i++) {
//     //     arr[i] = temp[i-low];
//     // }

// }

// void merge_sort(int arr[], int low, int high) {
//     if (low >= high) {
//         return;
//     }
//     int mid = (low+high)/2;
//     merge_sort(arr,low,mid);
//     merge_sort(arr,mid+1,high);
//     merge(arr,low,mid,high);x
// }

// int partition(int arr[],int low, int high) {
//     int i = low;
//     int j = high;
//     int pivot = arr[low];
//     while (i<j) {
//         while (pivot >= arr[i]) {
//             i++;
//         }
//         while (pivot < arr[j]) {
//             j--;
//         }
//         if (i<j) {
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
//     swap(arr[low],arr[j]);
//     return j;
// }

// void quick_sort(int arr[], int low, int high) {
//     if (low >= high) {
//         return;
//     }
//     int pivot_index = partition(arr,low,high);
//     quick_sort(arr,low,pivot_index-1);
//     quick_sort(arr,pivot_index+1,high);
// }

// int main() {
//     int arr[] = {13,46,24,52,20,9};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     quick_sort(arr,0,len-1);
//     for (auto it : arr ) {
//         cout<<it<<" ";
//     }
// }