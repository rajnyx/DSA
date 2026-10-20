// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> nums = {1,5,4,3,2};
//     (nums[0]==1)? cout<<"True" : cout<<"False";
//     cout<<"\n";


// jugged swaps 
// [2, 4, 1, 3] 
// even if there are possible swaps elsewhere in the array, they don't matter if the first element isn't 1, because the first element can never change.
// [1, 5, 4, 3, 2]
// → [1, 4, 5, 3, 2]
// → [1, 4, 3, 5, 2]
// → [1, 4, 3, 2, 5]
// → [1, 3, 4, 2, 5]
// → [1, 3, 2, 4, 5]
// → [1, 2, 3, 4, 5]

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[5];
//     for (int i=0; i<5; i++) {
//         cin>>arr[i];
//     }
//     for (int x : arr) {
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<int(log10(1004590))<<endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter your number: ";
//     cin >> n;

//     while (n > 0) {
//         int digit = n % 10;
//         cout << digit << endl;

//         n = n / 10;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {

//     vector <int> arr = {2,3,4};
//     // int target = 8;
//     int last = upper_bound(arr.begin(), arr.end(), 1) - arr.begin();
//     cout<<last<<endl;
//     // last--;
//     // cout<<"the idx of the last element is : "<<last<<" and the element is : "<<arr[last]<<endl;

//     // vector <int> arr = {};
//     // cout<<arr.size()<<endl;
//     // cout<<upper_bound(arr.begin(), arr.end(), 0) - arr.begin()<<endl;
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    // int arr[] = {4,6,21,7};
    // cout<<*max_element(arr, arr+4);

    // cout<<5/2<<endl;
    // int arr[] = {1,2,3,4,5};
    // cout<<accumulate(arr,arr+5,0)<<endl;

    // vector <int> A(10);
    // iota(A.begin(), A.end(), 1);
    // for (int x : A) {
    //     cout<<x<<" ";
    // }

    vector <vector <int>> mat = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    cout<<mat[0].size()<<endl;
}