// Q. FIND THE FIRST OCCURENCE OF A X IN A SORTED ARRAY . IF IT DOES NOT EXIST PRINT -1
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int x;
//     cout<<"enter a element:";
//     cin>>x;

//     int A[] = {1,4,4,4,4,9,9,10,11};
//     int len = sizeof(A)/sizeof(A[0]);
//     int idx = lower_bound(A,A+len,x)-A;
//     if (idx!=len && A[idx]==x) {
//         cout<<"element is present at index:"<<idx<<endl;
//     }
//     else {
//         cout<<-1<<endl;
//     }
// }

// Q. FIND THE LAST OCCURENCE OF A X IN A SORTED ARRAY . IF IT DOES NOT EXIST PRINT -1
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int x;
//     cout<<"enter a element:";
//     cin>>x;

//     int A[] = {1,4,4,4,4,9,9,10,11};
//     int len = sizeof(A)/sizeof(A[0]);
//     int ans = -1;
//     for (int idx=0 ; idx<len; idx++) {
//         if (A[idx]==x) {
//             ans = idx;
//         }
//     }
//     cout<<ans<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int x;
//     cout<<"enter a element:";
//     cin>>x;

//     int A[] = {1,4,4,4,4,9,9,10,10};
//     int len = sizeof(A)/sizeof(A[0]);
//     int idx_x = (upper_bound(A,A+len,x) - A)-1;
//     if (A[idx_x]==x && idx_x>=0) {
//         cout<<"the last occurence of the element is present at index: "<<idx_x<<endl;
//     }
//     else {
//         cout<<-1<<endl;
//     }
//     cout<<len<<endl;
// }

// Q. FIND THE LARGEST NUMBER SMALLER THAN X IN A SORTED ARRAY. IF NO NUMBER EXISTS PRINT -1.
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int x;
//     cout<<"enter a element:";
//     cin>>x;
//     int A[] = {1,4,4,4,4,9,9,10,10};
//     int len = sizeof(A)/sizeof(A[0]);
//     int idx = ((lower_bound(A,A+len,x)) - A) -1;
//     if (x!=(A[len]) && A[idx+1]==x) {
//         cout<<idx<<endl;
//     }
//     else {
//         cout<<-1<<endl;
//     }
// }


//how to create your own comparator :-
// first make a boolean function and take couple of values (two values) of the same datatype as the value
// be taken as input 
// then just write the logic of the code if the sorting condition is valid return true others return false
// in main function call the sort(start,end,comp);

// Q. SORT IN SUCH A WAY SORT ACCORDING TO THE SECOND ELEMENT IF THE SECOND ELEMENT IS SAME THEN SORT IT ACCORDING TO THE FIRST 
// ELEMENT IN A DESCENDING ORDER

// #include <bits/stdc++.h>
// using namespace std;

// bool comp(pair<int,int>p1,pair<int,int>p2) {
//     if (p1.second<p2.second) {
//         return true;
//     }
//     else if (p1.second>p2.second) {
//         return false;
//     }
//     else {
//         if (p1.first > p2.first) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
// }

// int main() {
//     pair <int,int> arr[] = {{1,2},{2,1},{4,1}};
//     sort(arr,arr+3,comp);
//     for (int i=0; i<=2; i++) {
//         cout<<arr[i].first<<" "<<arr[i].second<<endl;
//     }
// }

// Q. REVERSING AN ARRAY
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4};
//     int ld = (sizeof(arr)/sizeof(arr[0]))-1;
//     int temp = 0;
//     for (int i=0; i<=ld; i++) {
//         if (i==ld || i>ld) {
//             break;
//         }
//         temp  =arr[i];
//         arr[i] = arr[ld];
//         arr[ld] = temp;
//         ld--;
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// Q. REVERSING AN ARRAY (USING RECURSION)
// #include <iostream>
// using namespace std;
// void rev_arr(int arr[], int i, int len) {
//     if (i==len || i>len) {
//         return;
//     }
//     int temp = 0;
//     temp = arr[i];
//     arr[i] = arr[len];
//     arr[len] = temp;
//     rev_arr(arr,i + 1,len- 1+);
// }
// int main() {
//     int arr[] = {1,2,3,4};
//     int len = (sizeof(arr)/sizeof(arr[0])) - 1;
//     rev_arr(arr,0,len);
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// PRINTING FIBONACCI NUMBERS
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 0, b = 1, next,n;
//     cout<<"enter the no. of fibo. numbers you want :";
//     cin>>n;
//     for (int i=1; i<=n; i++) {
//         cout<<a<<" ";
//         next = a+b;
//         a = b;
//         b = next;
//     }
// }

// Q. NTH FIBONACCI NUMBER USING LOOPS
// #include <iostream>
// using namespace std;
// int fib(int n) {
//     if(n==1) {
//         return 0;
//     }
//     else if (n==2) {
//         return 1;
//     }
//     int a = 0, b=1, next;
//     for (int i =3;n>=i;i++) {
//         next = a+b;
//         a  = b;
//         b = next;
//     }
//     return b;
// }
// int main() {
//     int fibo = fib(5);
//     cout<<fibo<<endl;
// }

// Nth FIBONACCI NUMBER (USING RECURSION)
// #include <iostream>
// using namespace std;
// int fib(int n) {
//     if (n==1) {
//         return 0;
//     }
//     else if (n==2) {
//         return 1;
//     }
//     return fib(n-1) + fib(n-2);
// }
// int main() {
//     int fibo = fib(5);
//     cout<<fibo<<endl;
// }

// Q. CREATE AN PROGRAM WHICH PRINTS THE FREQUENCY OF THE ELEMENT IN THE ARRAY. given (max is the max.
//  element in the array)   (NUMBER HASHING)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the number of elements in the array:";
//     cin>>n;
//     int arr[n];

//     for (int i=0; i<n; i++) {
//         cin>>arr[i];
//     }

//     int max = *max_element(arr,arr+n);
//     max +=1;

//     int hash[max] = {0};
//     for(int i=0; i<n; i++) {
//         hash[arr[i]] +=1;
//     }

//     int q;
//     cout<<"enter no. of queries :";
//     cin>>q;
//     while(q>0) {
//         cout<<"enter query: ";
//         int number;
//         cin>>number;
//         cout<<"the number :" <<number<< " has occured "<< hash[number]<< " many times"<<endl;
//         q--;
//     }
// }

// Q. CHARACTER HASHING
// WAP WHICH RETURNS THE FREQUENCY OF THE CHARACTER ENTERED PROVIDED ALL THE CHARACTERS ARE LOWER CASE
// #include <iostream>
// using namespace std;
// int main() {
//     char s[] = "abcdabefc";
//     int hash[int('z')-int('a') + 1] = {0};
//     for (int i=0; i<(sizeof(s)/sizeof(s[0]))-1;i++) {
//         hash[int(s[i]) - (int)'a'] +=1;
//     }
//     int q;
//     cout<<"enter the number of queries:";
//     cin>>q;
//     while (q>0) {
//         char x;
//         cout<<"enter the character you want to find the frequency of: "<<endl;
//         cin>>x;
//         cout<<hash[(int)x- (int)'a']<<endl;
//         q--;
//     }
// }

// THERE ARE 256 CHARACTERS
// IF IT WOULDNT HAD BEEN MENTIONED THAT CHARACTERS ARE ONLY LOWER CASE THEN HAMNE HASH ARRAY 256 SIZE 
// KI CREATE KI HOTI AND AUTOMATICALLY HASH MAI MODIFICTION KR DETE CUZ DIRECTLY ASCII VALUES MIL JAATI.

// Q. STORING FREQUENCY (BETTER APPROACH THEN NUMBER HASHING)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     map <int,int> mp;
//     int arr[] = {1,2,3,1,3,2};
//     for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++) {
//         mp[arr[i]] +=1;
//     }
//     cout<<mp[1]<<endl;
//     cout<<mp[4]<<endl;   //0
// } 

// Q. SELECTION SORT 
// #include <iostream>
// using namespace std;

// void selection_sort(int arr[], int len) {
//     for (int i=0; i<=len-2; i++) {
//         int min = i;
//         for (int j=i; j<len; j++) {
//             if (arr[i]>arr[j]) {
//                 min = j;
//             }
//         }
//         int temp = arr[i];
//         arr[i] = arr[min];
//         arr[min] = temp;
//     }
// }

// int main() {
//     int arr[] = {13,46,24,52,20,9};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     selection_sort(arr,len);
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }

// Q. BUBBLE SORT 
// #include <iostream>
// using namespace std;
// void bubble_sort(int arr[], int len) {
//     for (int i=len-1; i>=1; i--) {
//         bool didswap = false;
//         for (int j=0; j<i;j++) {
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1] = temp;
//                 didswap = true;
//             }
//         }
//         if (didswap==false) {
//             break;
//         }
//     }
// }
// int main() {
//     int arr[] = {13,46,24,52,20,9};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,len);
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }

// Q. INSERTION SORT
// #include <iostream>
// using namespace std;

// void insertion_sort(int arr[], int len) {
//     for (int i=0;i<=len-1; i++) {
//         int j=i;
//         while (j>0 && (arr[j-1]>arr[j])) {
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }
// }
// int main() {
//     int arr[] = {13,46,24,52,20,9};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     insertion_sort(arr,len);
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }

// Q. MERGING TWO ARRAYS
// #include <iostream>
// using namespace std;
// int main() {
//     int A[] = {3,8};
//     int B[] = {2,5};
//     int n = sizeof((A))/sizeof((A[0]));
//     int m = sizeof((B))/sizeof((B[0]));
//     int C[n+m];
//     for (int a=0; a<n; a++) {
//         C[a] = A[a];
//     }
//     for (int b=0; b<m; b++) {
//         C[n+b] = B[b];
//     }
//     for (auto it : C) {
//         cout<<it<<" ";
//     }
// }

// #moving zeroes to the end
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[]= {0,1,0,3,12};
//     for (int i=0; i<5; i++) {
//         for (int j=0; j<4; j++) {
//             if (arr[j]==0) {
//                 int temp=arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (auto it : arr ){
//         cout<<it<<" ";
//     }
// }

// SECOND LARGEST ELEMENT IN AN ARRAY IF DOESNT EXIST RETURN -1
// #include <bits/stdc++.h>
// using namespace std;
//         int secondLargestElement(vector<int>& nums) {
//             //your code goes here
//             int largest = INT_MIN;
//             int idx = 0;
//             for (int i=0; i<nums.size(); i++) {
//                 if (largest<nums[i]) {
//                     largest = nums[i];
//                     idx = i;
//                 }
//             }
//             int second_largest = INT_MIN;
//             for  (int i=0; i<nums.size(); i++) {
//                 if (nums[i]<largest && second_largest<nums[i]) {
//                     second_largest = nums[i];
//                 }
//             }
//             if (second_largest == INT_MIN) {
//                 return -1;
//             }
//             else {
//                 return second_largest;
//             }
//         }
// int main() {
//     vector <int> arr = {1,2,3,4,5};
// vector<int> arr = {7,7,7,7,7};
//     int ans = secondLargestElement(arr);
//     cout<<ans<<endl;
// }


// #include <bits/stdc++.h>
// using namespace std;
//         int secondLargestElement(vector<int>& nums) {
//             //your code goes here
//             int largest = INT_MIN;
//             int second_largest = INT_MIN;
//             int idx = 0;
//             for (int i=0; i<nums.size(); i++) {
//                 if (largest<nums[i]) {
//                     second_largest = largest;
//                     largest = nums[i];
//                 }
//             }
//             if (second_largest == INT_MIN) {
//                 return -1;
//             }
//             else {
//                 return second_largest;
//             }
//         }
// int main() {
    // vector <int> arr = {1,2,3,4,5};
//     vector<int> arr = {7,7,7,7,7};
//     int ans = secondLargestElement(arr);
//     cout<<ans<<endl;
// }


// CHECK IF THE ARRAY IS SORTED
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr= {1,2,2,3,3,4};
//     bool flag = true;
//     for (int i=0; i<arr.size()-1;i++) {
//         if (arr[i]>arr[i+1]) {
//             flag = false;
//             break;
//         }
//     }
//     if (flag==true) {
//         cout<<"array is sorted"<<endl;
//     }
//     else {
//         cout<<"array is not sorted"<<endl;
//     }
// }

// MODIFY THE ARRAY (ARRANGE THE UNIQUE ELEMENTS AT THE START) and return the no. of unique elements
// brute - force solution
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,1,2,2,2,3,3};
//     set <int> s;
//     int len = sizeof(arr)/sizeof(arr[0]);
//     for (int i=0; i<len;i++) {
//         s.insert(arr[i]);
//     }
//     int cnt = 0;
//     int idx = 0;
//     for (auto it  : s) {
//         arr[idx] = it;
//         cnt+=1;
//         idx+=1;
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
//     cout<<cnt<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,1,2,2,2,3,3};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     for (int j=1; j<len;j++) {
//         if (arr[i]!=arr[j]) {
//             arr[i+1] = arr[j];
//             i++;
//         }
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
//     cout<<i+1<<endl;
// }

// REMOVE DUPLICATE ELEMENTS
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,1,2,2,3,3,4,4};
//     set <int> s(arr, arr+8);
//     for (auto it : s) {
//         cout<<it<<" ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr= {1,2,2,3,3,4};
//     for (int i=0; i<arr.size()-1;i++) {
//         if (arr[i]==arr[i+1]) {
//             arr.erase(arr.begin()+i);
//         }
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// // LEFT ROTATE THE ARRAY BY ONE PLACE
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int temp = arr[0];
//     for (int i=0; i<=3; i++) {
//         arr[i] = arr[i+1];
//     }
//     arr[4] = temp;
//     for (auto it : arr ){
//         cout<<it<<" ";
//     }
// }

// LEFT ROTATE THE ARRAY BY 'd' places.
// (brute force)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5,6,7};
//     int d;
//     cout<<"enter the value of d:";
//     cin>>d;
//     int temp_arr[d];
//     int len = sizeof(arr)/sizeof(arr[0]);
//     d = d%len;
//     for (int i=0; i<d; i++) {
//         temp_arr[i] = arr[i];
//     }
//     for (int j=0; j<(len-d); j++) {
//         arr[j] = arr[d+j];
//     }
//     for (int k=len-d;k<len;k++) {
//         arr[k] = temp_arr[k-(len-d)];
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// (optimal solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,2,3,4,5,6,7};
//     int d;
//     cout<<"enter the value of d:";
//     cin>>d;
//     int len = sizeof(arr)/sizeof(arr[0]);
//     d = d%len;
//     reverse(arr.begin(),arr.begin()+d);
//     reverse(arr.begin()+d,arr.end());
//     reverse(arr.begin(),arr.end());
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// MOVING ZEROES TO THE END
// (very brute force  ---> non zero elements are moved too)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,0,2,3,2,0,0,4,5,1};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int cnt = 0;
//     for (int i=0; i<len ; i++) {
//         if (arr[i]==0) {
//             ++cnt;
//         }
//     }
//     for (int start=0; start<len ; start++) {
//         if (arr[start] == 0) {
//             for (int end=len-1;end>=len-cnt;end--) {
//                 if (arr[end]!=0) {
//                     int temp = arr[start];
//                     arr[start] = arr[end];
//                     arr[end]= temp;
//                 }
//             }
//         } 
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// (BRUTE FORCE)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,0,2,3,2,0,0,4,5,1};
//     vector <int> temp;
//     int len = sizeof(arr)/sizeof(arr[0]);
//     for (int i=0; i<len ; i++) {
//         if (arr[i]!=0) {
//             temp.push_back(arr[i]);
//         }
//     }
//     for (int i=0; i<temp.size(); i++) {
//         arr[i] = temp[i];
//     }
//     for (int j=temp.size(); j<len;j++) {
//         arr[j]=0;
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// (better solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,0,2,3,2,0,0,4,5,1};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     for (int i=0; i<len; i++) {
//         for (int j=0; j<len-1;j++) {
//             if (arr[j]==0) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// (optimal solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,0,2,3,2,0,0,4,5,1};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int first = -1;
//     for (int i=0 ;i<len ;i++) {
//         if (arr[i]==0) {
//             first = i;
//             break;
//         }
//     } 
//     for (int j=first+1; j<len;j++) {
//         if (arr[j]!=0) {
//             swap(arr[first],arr[j]);
//             first++;
//         }
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// LINEAR SEARCH (you will be given an array of integers and a number you have to return the first occurence
// of the number)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {6,7,8,4,1,4};
//     int num=4;
//     vector <int> temp;
//     for (int i=0; i<6; i++) {
//         if (arr[i]==num) {
//             temp.push_back(i);
//         }
//     }
//     if (temp.empty()) {
//         cout<<-1;
//     }
//     else {
//         for (auto it : temp) {
//             cout<<it<<" ";
//         }
//     }
// }

// UNION OF TWO SORTED ARRAYS
// (brute force solution)
// #include <bits/stdc++.h> 
// using namespace std;
// int main() {
//     vector <int> arr1 = {1,1,2,3,4,5};
//     vector <int> arr2 = {2,3,4,4,5,6};
//     set <int> s;
//     for (int i=0; i<arr1.size(); i++) {
//         s.insert(arr1[i]);
//     }
//     for (int j=0; j<arr2.size(); j++) {
//         s.insert(arr2[j]);
//     }
//     vector <int> ans;
//     for (auto it : s) {
//         ans.push_back(it);
//     }
//     for (auto it : ans){
//         cout<<it<<" ";
//     }
// }

// (optimal solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr1 = {1,1,2,3,4,5};
//     vector <int> arr2 = {2,3,4,4,5,6};
//     vector <int> arr;
//     int i = 0;
//     int j = 0;
//     while (i<arr1.size() && j<arr2.size()) {
//         if (arr1[i] <= arr2[j]) {
//             if (arr.size() ==0 || arr.back()!=arr1[i]) {
//                 arr.push_back(arr1[i]);
//             }
//             i++;
//         }
//         else {
//             if (arr.size()==0 || arr.back()!=arr2[j]) {
//                 arr.push_back(arr2[j]);
//             }
//             j++;
//         }
//     }
//     while (i<arr1.size()) {
//         if (arr.size()==0 || arr.back()!=arr1[i]) {
//             arr.push_back(arr1[i]);
//         }
//         i++;
//     }
//     while (j<arr2.size()) {
//         if (arr.size()==0 || arr.back()!=arr2[j]) {
//             arr.push_back(arr2[j]);
//         }
//         j++;
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// INTERSECTION OF TWO SORTED ARRAYS
// (brute force)
// #include <bits/stdc++.h>
// using namespace std;
// vector <int> arr1= {1,2,2,3,3,4,5,6};
// vector <int> arr2= {2,3,3,3,5,6,6,7};
// vector <int> visited(arr2.size());
// int main() {
//     vector <int> arr;
//     for (int i=0; i<arr1.size(); i++) {
//         for (int j=0; j<arr2.size(); j++) {
//             if (arr1[i]==arr2[j] && visited[j]==0) {
//                 visited[j] +=1;
//                 arr.push_back(arr1[i]);
//                 break;
//             }
//         }
//     }
//     for (auto it : arr ){
//         cout<<it<<" ";
//     } 
// }

// (optimal solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr1= {1,2,2,3,3,4,5,6};
//     vector <int> arr2= {2,3,3,3,5,6,6,7};
//     vector <int> arr;
//     int i = 0;
//     int j = 0;
//     while (i < arr1.size() && j < arr2.size()) {
//         if (arr2[j] > arr1[i]) {
//             i++;
//         }
//         else if (arr2[j] == arr1[i]) {
//             arr.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else {
//             j++;
//         }
//     }
//     for (auto it : arr ){
//         cout<<it<<" ";
//     }
// }

// Q. FIND THE MISSING NUMBER IN AN ARRAY
// N IS THE GIVEN NUMBER AND THE ARRAY CONSISTS OF (N-1) ELEMENTS FROM 1 TO N FIND THE NUMBER WHICH ISNT 
// PRESENT IN THE GIVEN ARRAY

// (brute force)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr= {1,2,4,5};
//     int n = 5;
//     for (int i=1; i<n+1; i++) {
//         bool flag = false;
//         for (int j=0; j<arr.size(); j++) {
//             if (i==arr[j]) {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag==false) {
//             cout<<i<<endl;
//         }
//     }
// }

// (better solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 5;
//     vector <int> num(n+1,0);
//     vector <int> arr= {1,2,4,5};
//     for (int i=0; i<arr.size(); i++) {
//         num[arr[i]] = 1;
//     }
//     for (int i=1; i<num.size(); i++) {
//         if (num[i]==0) {
//             cout<<i<<endl;
//         }
//     }
// }

// (optimal solution 1.0)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,2,4,5};
//     int n = 5;
//     int sum = (n*(n+1))/2;        //sum of first n natural numbers
//     for (int i=0; i<arr.size(); i++) {
//         sum-=arr[i];  
//     }
//     cout<<sum;
// }

// (optimal soln 2.0) (both are optimal having t.c. O(n) but xor is safer due to no overflow risk
// the sum soln mmay overflow if the value of n is very high)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,2,4,5};
//     int n =5;
//     int xor1 = 0;
//     int xor2 = 0;
//     for (int i=1; i<n+1; i++) {
//         xor1^=i;
//     }
//     for (int i=0; i<arr.size(); i++) {
//         xor2^=arr[i];
//     }
//     cout<<(xor1^xor2)<<endl;
// }

// FIND THE SINGLE ELEMENT PRESENT IN THE ARRAY
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {2,3,4,3,2};
//     int ans = 0;
//     for (int i=0; i<arr.size(); i++) {
//         ans^=arr[i];
//     }
//     cout<<ans;
// }

// MAXIMUM CONSECUTIVE ONES
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,1,0,1,1,1,0,1,1};
//     int len = arr.size();
//     int current_count = 0;
//     int max_count = 0;
//     for (int i=0; i<len; i++) {
//         if (arr[i]==1) {
//             current_count+=1;
//             if (current_count>max_count) {
//                 max_count=current_count;
//             }
//         }
//         else {
//             current_count=0;
//         }
//     }
//     cout<<max_count<<endl;
// }

// LONGEST SUBARRAY WITH SUM K

// (brutest soln) (T.C. O(N3))  (S.C  O(1))
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {2,1,1,1,3};
//     int sum = 0;
//     int length = 0;
//     int max_length = 0;
//     int ans = 3;
//     for (int i=0; i<arr.size(); i++) {
//         for (int j=i; j<arr.size(); j++) {
//             sum=0;
//             for (int k=i; k<=j; k++) {
//                 sum +=arr[k];
//             }
//             if (sum==ans) {
//                 length = max(length,(j-i+1));
//             }
//         }
//     }
//     cout<<length<<endl;
// }

// BRUTER SOLUTION (T.C. O(N2))  (S.C O(1))
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {2,1,1,1,3};
//     int sum = 0;
//     int length = 0;
//     int ans = 3;

//   //generating all the possible subarrays and then checking which subarray =k
//   //and then comparing whether the length of the particular subarray is greater
//   //than the previously stored subarray or not
//   //[2], [2,1],...[2,1,1,1,3],....[1], [1,1],[1,1,1]....
//   // the current subarray is the sum of last subarray + current element 

//     for (int i=0; i<arr.size(); i++) {    
//         sum=0;
//         for (int j=i; j<arr.size(); j++) {
//             sum+=arr[j];
//             if (sum==ans) {
//                 length = max(length,(j-i+1));
//             }
//         }
//     }
//     cout<<length<<endl;
// }

// BETTER SOLUTION   (T.C --> NLOGN)  (1 loop * 1 map)   (S.C-->N)   (OPTIMAL SOLN FOR POSITIVES AND NEGATIVES)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,2,3,1,1,1,1,3,2};
//     map <long long,int> mpp;
//     long long sum = 0;
//     int max_len = 0;
//     int k =3;
//     for (int i=0; i<arr.size(); i++) {
//         sum+=arr[i];
//         // checking whether the sum is equal to k or not
//         if (sum==k) {
//             max_len = max(max_len,i+1);
//         }
//         // checking whether x-k exists
//         long long rem = sum-k;
//         if (mpp.find(rem)!=mpp.end()) {
//             int len = i-mpp[rem];
//             max_len = max(len,max_len);
//         }
//         // hashing //if a sum previously doesnt exist then only store it
//         if (mpp.find(sum)==mpp.end()) {
//             mpp[sum] = i;
//         }
//     }
//     cout<<max_len<<endl;
// }

// OPTIMAL SOLUTION FOR POSITIVES AND ZERO  
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,2,3,1,1,1,1,3,2};
//     long long sum=0;
//     int len=0;
//     int k = 6;
//     int i=0,j = 0;
//     while (j<arr.size()) {  
//         sum+=arr[j];
//         while (sum>k && i<=j) {
//             sum-=arr[i];
//             i++;
//         }
//         if (sum==k) {
//             len = max(len,j-i+1);
//         }
//         j++;
//     }
//     cout<<len<<endl;
// }

// two sum (brute force)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {2,6,5,8,11};
//     int target = 14;
//     for (int i=0; i<arr.size() ;i++) {
//         for (int j=i+1; j<arr.size(); j++) {
//             if (arr[i]+arr[j]==target) {
//                 cout<<arr[i]<<" "<<arr[j];
//             }
//         }
//     }
// }

// (better solution)
// #include <bits/stdc++.h>       (to get values)
// using namespace std;
// int main() {
//     int arr[] = {2,6,5,8,11};
//     int target = 14;
//     int rem = 0;
//     map <int,int> mpp;
//     for (int i=0; i<5; i++) {
//         rem = target- arr[i];
//         if (mpp.find(rem)!= mpp.end()) {
//             cout<<rem<<" "<<arr[i]<<endl;
//         }
//         mpp[arr[i]] = i;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;     // (to get indices)
// int main() {
//     int arr[] = {2,6,5,8,11};
//     int target = 14;
//     int rem = 0;
//     map <int,int> mpp;
//     for (int i=0; i<5; i++) {
//         rem = target- arr[i];
//         if (mpp.find(rem)!= mpp.end()) {
//             cout<<mpp[rem]<<" "<<i<<endl;
//         }
//         mpp[arr[i]] = i;
//     }
// }

// optimal solution
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int>arr = {2,6,5,8,11};
//     sort(arr.begin(),arr.end());
//     int left = 0;
//     int right = arr.size()-1;
//     int target = 14;
//     bool flag = false;
//     while (right > left) {
//         if ((arr[left]+arr[right]) > target) {
//             right -=1;
//         }
//         else if ((arr[left]+arr[right]) < target) {
//             left +=1;
//         }
//         else {
//             cout<<arr[left]<<" "<<arr[right]<<endl;        //value
//             flag = true;
//             left +=1;
//             right -=1;
//         }
//     }
//     if (flag==false) {
//         cout<<"no"<<endl;
//     }
// }

// SORT AN ARRAYS OF 0s 1s and 2s
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
    map <int,int> mpp;
    for (int i=0; i<arr.size(); i++) {
        mpp[arr[i]]++;
    }
    for (int i=0; i<arr.size(); i++) {
        if (i < mpp[0]) {
            arr[i] = 0;
        }
        else if (i<mpp[0] + mpp[1]) {
            arr[i] = 1;
        }
        else {
            arr[i] = 2;
        }
    }
    for (auto it : arr) {
        cout<<it<<" ";
    }
}