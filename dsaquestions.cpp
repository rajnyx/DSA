// Q. PRINT LINEARLY FROM 1 TO N (USING BACKTRACK)
// #include <bits/stdc++.h>
// using namespace std;
// void print(int n) {
//     if (n==0) {
//         return ;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }
// int main() {
//     print(10);
// }

// Q. PRINT LINEARLY FROM N TO 1 (using backtrack)
// #include <bits/stdc++.h>
// using namespace std;            //using two variables
// void print(int m,int n) {
//     if (m==n+1) {
//         return;
//     }
//     print(m+1,n);
//     cout<<m<<endl;
// }
// int main() {
//     print(1,10);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print(int n) {  
//     if (n==0) {
//         return;          //using a single variable
//     }
//     cout<<n<<endl;
//     print(n-1);
// }
// int main() {
//     print(10);
// }

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
//     rev_arr(arr,i + 1,len- i-1);
// }
// int main() {
//     int arr[] = {1,2,3,4};
//     int len = (sizeof(arr)/sizeof(arr[0])) - 1;
//     rev_arr(arr,0,len);
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// REVERSING AN STRING (USING RECURSION)
// #include <bits/stdc++.h>
// using namespace std;
// bool rev_str(string str,int l_idx,int i) {
//    if ((i>=l_idx)) {
//       return true; 
//    }
//    if (str[i]!=str[l_idx]) {
//       return false;
//    }
//    return rev_str(str,--l_idx,++i);
// }
// int main() {
//    string s;
//    cout<<"Enter a string here : "<<endl;
//    getline(cin,s);
//    bool ans = rev_str(s,s.length()-1,0);
//    cout<<ans<<endl;
// }

// PRINTING FIBONACCI NUMBERS
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 0, b = 1, next,n;
//     cout<<"enter the no. of fibo. numbers you want :";
//     cin>>n;
//     for (int i=1; i<n; i++) {
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

// Q. LARGEST ELEMENT IN AN ARRAY
// (brute force) (T.C --> Nlogn S.C  --> o(1))
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {3,2,1,5,2};
//     sort(arr.begin(),arr.end());
//     cout<<arr[arr.size()-1]<<endl;
// }

// (better solution)  (T.C --> O(N) S.C  --> o(1))
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[]= {3,2,1,5,2};
//     int max = INT_MIN;
//     for (auto it : arr) {
//         if (max < it) {
//             max = it;
//         }
//     } 
//     cout<<max<<endl;
// }

// (optimal solution)

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

// (brute force)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,2,4,7,7,5};

//     sort(arr.begin(), arr.end());
//     int sec_max = INT_MIN;
//     for (int i=(arr.size()-2); i>=0; i--) {
//         if ((arr[arr.size()-1] > arr[i])) {
//             sec_max = arr[i];
//             break;
//         }
//     }
    // if (sec_max == INT_MIN) {
    //     cout<<-1;
    // }
    // else {
    //     cout<<sec_max<<endl;
    // }
// }

// (better solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[] = {1,2,4,7,7,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int max = *max_element(arr,arr+size);
//     int sec_max = INT_MIN;
//     for (auto it : arr) {
//         if ((max > it) && (it > sec_max)) {
//             sec_max = it;
//         }
//     }
// }

// (optimal solution)
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {1,2,4,7,7,5};
//     int max = INT_MIN;
//     int sec_max = INT_MIN;
//     for (auto it : arr) {
//         if (max < it) {
//             sec_max = max;
//             max = it;
//         }
//         else if ((max > it) && (sec_max < it)) {
//             sec_max = it;
//         }
//     }
//     cout<<sec_max<<endl;
// }

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
//     vector <int> arr = {1,2,3,4,5,6,7};
//     int d = 3;
//     vector <int> temp;
//     for (int i=0; i<d; i++) {
//         temp.emplace_back(arr[i]);
//     }
//     for (int j=d; j<arr.size(); j++) {
//         arr[(j-d)] = arr[j];
//     }
//     int cnt = 0;
//     for (int k=arr.size()-d; k<arr.size(); k++) {
//         arr[k] = temp[cnt]; 
//         cnt++;
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
//     int len = arr.size();
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
//     vector <int> temp1 = {1,1,2,3,4,5};
//     vector <int> temp2 = {2,3,4,4,5};
//     vector <int> temp;
//     int t1 = 0;
//     int t2 = 0;
//     while (t1 < temp1.size() && t2 < temp2.size()) {
//         if (temp1[t1] <= temp2[t2]) {
//             if (temp.empty() || temp.back()!= temp1[t1]) {
//                 temp.emplace_back(temp1[t1]);
//             }
//             t1++;
//         }
//         else {
//             if ( temp.empty() || temp.back()!= temp2[t2]) {
//                 temp.emplace_back(temp2[t2]);
//             }
//             t2++;
//         }
//     }
//     while (t1>=temp1.size() && t2 < temp2.size()) {
//             if (temp.back()!= temp2[t2]) {
//                 temp.emplace_back(temp2[t2]);
//             }
//             t2++;
//     }
//     while (t2>=temp2.size() && t1 < temp1.size()) {
//             if (temp.back()!= temp1[t1]) {
//                 temp.emplace_back(temp1[t1]);
//             }
//             t1++;
//     }
//     for (auto it : temp) {
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

    // vector <int> temp1 = {1,1,2,3,4,5};
    // vector <int> temp2 = {2,3,4,4,5};
    // set <int> temp;  

    // for (int i=0; i<temp1.size(); i++) {
    //     for (int j=0; j<temp2.size(); j++) {
    //         if (temp1[i] = temp2[j]) {
    //             temp.insert(temp1[i]);
    //         }
    //     }
    // }
    // for (auto it : temp) {
    //     cout<<it<<" ";
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

// (better solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {2,3,4,3,2};
//     map <long long, int> mp;
//     for (auto it : arr) {
//         if (mp.find(it) != mp.end()) {
//             mp[it]++;
//         }
//         else{
//             mp[it] = 1;
//         }
//     }
//     for (auto it : mp) {
//         if (it.second == 1) {
//             cout<<"element occuring once is :"<<it.first<<endl;
//         }
//     }
// }

// (optimal soln)
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


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {1,2,3,1,1,1,1,4,2,3};
//     int k = 3;
//     int max_len = 0;
//     for (int i=0; i<arr.size(); i++) {
//         int sum = 0;
//         int len = 0;
//         for (int j=i; j<arr.size(); j++) {
//             sum+=arr[j];
//             len++;
//             if (sum==k) {
//                 max_len = max(max_len,len);
//                 break;
//             }
//             else if (sum > k) {
//                 break;
//             }
//         }
//     }
//     cout<<max_len<<endl;
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
//         long long rem = sum-k;
//         if (mpp.find(rem)!=mpp.end()) {
//             int len = i-mpp[rem];
//             max_len = max(len,max_len);
//         }
//         //hashing if a sum previously doesnt exist then only store it
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
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
//     map <int,int> mpp;
//     for (int i=0; i<arr.size(); i++) {
//         mpp[arr[i]]++;
//     }
//     for (int i=0; i<arr.size(); i++) {
//         if (i < mpp[0]) {
//             arr[i] = 0;
//         }
//         else if (i<mpp[0] + mpp[1]) {
//             arr[i] = 1;
//         }
//         else {
//             arr[i] = 2;
//         }
//     }
//     for (auto it : arr) {
//         cout<<it<<" ";
//     }
// }

// KADANE ALGORITHM
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {-2,-3,4,-1,-2,1,5,-3};
//     int sum = INT_MIN;
//     int max_sum = INT_MIN;
//     for (int i=0; i<arr.size(); i++) {
//         if (sum < 0) {
//             sum = 0;
//         } 
//         sum += arr[i];
//         max_sum = max(sum,max_sum);
//     }
//     cout<<max_sum<<endl;
// }

// REARRANGE ARRAY ELEMENTS BY SIGN (rearrange as alternate with maintained order)

// (BRUTE FORCE SOLUTION)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {3,1,-2,-5,2,-4};
//     vector <int> pos;
//     vector <int > temp;
//     vector <int> neg;
//     for (int i=0; i<arr.size(); i++) {
//         if (arr[i] > 0) {
//             pos.emplace_back(arr[i]);
//         }
//         else {
//             neg.emplace_back(arr[i]);
//         }
//     }
//     int pos_idx = 0;
//     int neg_idx = 0;
//     for (int i=0; i<arr.size(); i++) {
//         if (i%2==0) {
//             temp.emplace_back(pos[pos_idx]);
//             pos_idx++; 
//         }
//         else {
//             temp.emplace_back(neg[neg_idx]);
//             neg_idx++;
//         }
//     }
//     for (auto it : temp) {
//         cout<<it<<" ";
//     }
// }

// (optimal solution)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {3,1,-2,-5,2,-4};
//     int pos = 0;
//     int neg = 1;
//     vector <int> ans(arr.size());
//     for (int i=0; i<arr.size(); i++) {
//         if (arr[i] > 0) {
//             ans[pos] = arr[i];
//             pos += 2;
//         }
//         else {
//             ans[neg] = arr[i];
//             neg += 2;
//         }
//     }
//     for (auto it : ans) {
//         cout<<it<<" ";
//     }
// }

// Q. PRINT ALL PERMUTATIONS
// #include <bits/stdc++.h>
// using namespace std;

// void gen_perm(vector <int> &nums, vector <vector <int>> &ans, vector <int> &perm, vector <int> &freq) {
//     if (nums.size() == perm.size()) {
//         ans.emplace_back(perm);
//         return;
//     }
//     for (int i=0; i<nums.size(); i++) {
//         if (freq[i] == 0) {
//             perm.emplace_back(nums[i]);
//             freq[i] = 1;
//             gen_perm(nums,ans,perm,freq);
//             freq[i] = 0;
//             perm.pop_back();
//         }
//     }
// }

// int main() {
//     vector <int> nums = {1,3,2};
//     vector <vector <int>> ans;
//     vector <int> perm;
//     vector <int> freq(nums.size(), 0);
//     gen_perm(nums,ans,perm,freq);
//     for (auto it : ans) {
//         for (auto i : it) {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }  

// brute force (next permutation)
// class Solution {
// public:
//     void genPermute(vector <vector <int>> &ans, vector <int> &arr, int idx) {
//         if (idx == arr.size()) {
//             ans.push_back(arr);
//             return;
//         }
//         for (int i=idx; i<arr.size(); i++) {
//             swap(arr[i], arr[idx]);
//             genPermute(ans, arr, idx+1);
//             swap(arr[i], arr[idx]);
//         }
//     }
//     void nextPermutation(vector<int>& nums) {
//         vector <int> og_arr(nums.begin(), nums.end());
//         vector <vector <int>> ans;
//         genPermute(ans, nums, 0);
//         sort(ans.begin(), ans.end());
//         if ((upper_bound(ans.begin(), ans.end(), og_arr)) != (ans.end())) {
//             int i = (upper_bound(ans.begin(), ans.end(), og_arr)) - ans.begin();
//             nums = ans[i];
//         } 
//         else {
//             nums = ans[0];
//         }
//     }
// };

// optimal soln
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int idx = 0;
//         for (int i=nums.size()-1; i>=0; i--) {
//             if (i==0) {
//                 break;
//             }
//             if (nums[i-1] < nums[i]) {
//                 idx = i;
//                 break;
//             }
//         }
//         if (idx==0) {
//             sort(nums.begin(), nums.end());
//         }
//         else {
//             int min = INT_MAX;
//             int min_idx = 0;
//             for (int i=idx; i<nums.size(); i++) {
//                 if ((nums[i] < min) && (nums[i] > nums[idx-1])) {
//                     min = nums[i];
//                     min_idx = i;
//                 }
//             }
//             swap(nums[min_idx], nums[idx-1]);
//             sort(nums.begin() + idx, nums.end());
//         }
//     }
// };

// LEADERS IN AN ARRAY
// (brute force)
// #include <bits/stdc++.h>    
// using namespace std;
// int main() {
//     vector <int> ans;
//     vector <int> arr = {10,22,12,3,0,6};
//     for (int i=0; i<arr.size(); i++) {
//         bool flag = true;
//         for (int j=i+1; j<arr.size(); j++) {
//             if (arr[i] < arr[j]) {
//                 flag = false;
//             }
//         }
//         if (flag) {
//             ans.emplace_back(arr[i]);
//         }
//     }
//     for (auto it : ans) {
//         cout<<it<<" ";
//     }
// }

// (optimal soln)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {10,22,12,3,0,6};
//     vector <int> ans;
//     ans.push_back(arr[arr.size()-1]);
//     int max = arr[arr.size()-1];
//     for (int i=(arr.size()-2); i>-1; i--) {
//         if (arr[i] > max) {
//             ans.push_back(arr[i]);
//             max = arr[i];
//         }
//     }
//     for (auto it : ans) {
//         cout<<it<<" ";
//     }
// }

// longest consecutive subsequence
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {100,4,200,1,3,2};
//     set <int> s(arr.begin(), arr.end());
//     int longest = 0;
//     for (auto it : s) {
//         if (s.find(it-1) == s.end()) {
//             int current = it;
//             int cnt = 1;
//             while (s.find(current+1) != s.end()) {
//                 current ++;
//                 cnt++;
//             }
//             longest = max(cnt, longest);
//         }
//     }
//     cout<<longest<<endl;
// }

// set matrix zeroes

// (brute - force soln)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int matrix[4][4] = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<4; j++) {
//             if (matrix[i][j] == 0) {
//                 for (int k=0; k<4; k++) {
//                     matrix[i][k] = -1;
//                 }
//                 for (int m=0; m<4; m++) {
//                     matrix[m][j] = -1;
//                 }
//             }
//         }
//     }
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<4; j++) {
//             if (matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<4; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// (better soln)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int matrix[4][4] = {{1,1,1,1},{1,0,0,1},{1,1,0,1},{1,1,1,1}};
//     unordered_set <int> row;
//     unordered_set <int> column;
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<4; j++) {  
//             if (matrix[i][j] == 0) {
//                 row.insert(i);
//                 column.insert(j);
//             }
//         }
//     }
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<4; j++) {
//             if (row.find(i) != row.end() || column.find(j) != column.end()) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<4; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// rotate matrix by 90 degrees (optimal soln)
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector <vector <int>> arr= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

//     // transpose
//     for (int i=0; i<4; i++) {
//         for (int j=i+1; j<4; j++) {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }

//     // reverse
//     for (int i=0; i<4; i++) {
//         int left = 0;
//         int right = 3;
//         while (left <= right) {
//             swap(arr[i][left],arr[i][right]);
//             left++;
//             right--;
//         }
//     }

//     // printing elements
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<4; j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// spiral order
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<vector<int>> matrix = {
//     {1,  2,  3,  4,  5,  6},
//     {20, 21, 22, 23, 24, 7},
//     {19, 32, 33, 34, 25, 8},
//     {18, 31, 36, 35, 26, 9},
//     {17, 30, 29, 28, 27, 10},
//     {16, 15, 14, 13, 12, 11}
//     };
//     int left = 0;
//     int right = matrix[0].size() - 1;
//     int top = 0;
//     int bottom = matrix.size() - 1;
//     while (left <= right && bottom >= top) {
//         for (int i=left; i<=right; i++) {
//             cout<<matrix[top][i]<<" ";
//         }
//         top++;
//         for (int i=top; i<=bottom; i++) {
//             cout<<matrix[i][right]<<" ";
//         }
//         right--;
//         for (int i=right; i>=left; i--) {
//             cout<<matrix[bottom][i]<<" ";
//         }
//         bottom--;
//         for (int i=bottom; i>=top; i--) {
//             cout<<matrix[i][left]<<" ";
//         }
//         left++;
//     }
// }


// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// class TextEditor {
// private:
//     stack<string> undoStack;
//     stack<string> redoStack;
//     string document;

// public:
//     TextEditor() {
//         document = "";
//     }

//     void write(const string& text) {

//         undoStack.push(document);
        

//         document += text;
        

//         while (!redoStack.empty()) {
//             redoStack.pop();
//         }
        
//         cout << "[Action] Added text: '" << text << "'\n";
//     }


//     void undo() {
//         if (undoStack.empty()) {
//             cout << "[Undo] Failed: Nothing to undo.\n";
//             return;
//         }
        

//         redoStack.push(document);
        

//         document = undoStack.top();
//         undoStack.pop();
        
//         cout << "[Undo] Successful.\n";
//     }


//     void redo() {
//         if (redoStack.empty()) {
//             cout << "[Redo] Failed: Nothing to redo.\n";
//             return;
//         }
        

//         undoStack.push(document);
        

//         document = redoStack.top();
//         redoStack.pop();
        
//         cout << "[Redo] Successful.\n";
//     }


//     void display() const {
//         cout << "Current Document: \"" << document << "\"\n\n";
//     }
// };

// int main() {
//     TextEditor editor;


//     editor.write("Hello");
//     editor.display();

//     editor.write(" World");
//     editor.display();
    
//     editor.write("!");
//     editor.display();

//     editor.undo();
//     editor.display();


//     editor.undo();
//     editor.display();


//     editor.redo();
//     editor.display();


//     editor.write("C++");
//     editor.display();


//     editor.redo(); 
    
//     return 0;
// }

// binary search
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> nums = {-1,0,3,5,9,12};
//     int target = 11;
//     int low = 0;
//     int high = nums.size() - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (target == nums[mid]) {
//             cout<<"element found at idx :"<<mid<<endl;
//             break;
//         }
//         else if (target > nums[mid]) {
//             low = mid+1;
//         }
//         else {
//             high = mid-1;
//         }
//     }
//     cout<<"element not found"<<endl;
// }

// intersection of two arrays
// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         vector <int> ans;
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
//         int n1 = 0;
//         int n2 = 0;
//         while (n1!=nums1.size() && n2!=nums2.size()) {
//             if (nums1[n1] == nums2[n2]) {
//                 ans.push_back(nums1[n1]);
//                 n1++;
//                 n2++;
//             }
//             else if (nums1[n1] > nums2[n2]) {
//                 n2++;
//             }
//             else {
//                 n1++;
//             }
//         }
//         return ans;
//     }
// };

// number of subarrays
// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int, int> mpp;
        
//         mpp[0] = 1;
        
//         int sum = 0;
//         int count = 0;

//         for (int x : nums) {
//             sum += x;

//             if (mpp.find(sum - k) != mpp.end()) {
//                 count += mpp[sum - k];
//             }

//             mpp[sum]++;
//         }

//         return count;
//     }
// };

// 3 sum - better 
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>> s;

//         for (int i = 0; i < nums.size(); i++) {
//             map<int, int> mpp; 

//             for (int right = i + 1; right < nums.size(); right++) {

//                 int sum = -(nums[i] + nums[right]);

//                 if (mpp.find(sum) != mpp.end()) {
//                     vector<int> temp = {
//                         nums[i],
//                         nums[right],
//                         sum
//                     };

//                     sort(temp.begin(), temp.end());
//                     s.insert(temp);
//                 }

//                 mpp[nums[right]]++;
//             }
//         }

//         vector<vector<int>> vec(s.begin(), s.end());
//         return vec;
//     }
// };

// generate all subarrays with xor = target
// (better soln)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {4,2,2,6,4};
//     int target = 6;
//     int cnt = 0;
//     vector <vector <int>> vec;
//     for (int i=0; i<arr.size(); i++) {
//         int xr = 0;
//         for (int j=i; j<arr.size(); j++) {
//             xr ^= arr[j];
//             if (xr == target) {
//                 cnt++;
//             }
//         }
//     }
// }

// optimal solution
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {4,2,2,6,4};
//     map <int, int> mpp;
//     mpp[0] = 1;
//     int cnt = 0;
//     int total_xor = 0;
//     int target = 6;
//     for (int i=0; i<arr.size(); i++) {
//         total_xor ^= arr[i];
//         int x = total_xor ^ target;
//         if (mpp.find(x) != mpp.end()) {
//             cnt+=mpp[x];
//         }
//         mpp[total_xor]++;
//     }
//     cout<<cnt<<endl;
// }

// find the missing and the repeating number
// brute force solution
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> nums = {4,3,6,2,1,1};
//     for (int i=1; i<=6; i++) {
//         int cnt = 0;
//         for (int j=0; j<6; j++) {
//             if (nums[j]==i) {
//                 cnt++;
//             }
//         }
//         if (cnt==2) {
//             cout<<"twice : "<<i<<endl;
//         }
//         else if (cnt==0) {
//             cout<<"missing : "<<i<<endl;
//         }
//     }
// }

// better solution
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> nums = {4,3,6,2,1,1};
//     int hash_arr[7] = {0};
//     for (auto it : nums) {
//         hash_arr[it]++;
//     }
//     for (int i=1; i<=6; i++) {
//         if (hash_arr[i] == 0) {
//             cout<<"missing element is : "<<i<<endl;
//         }
//         else if (hash_arr[i] == 2) {
//             cout<<"twice : " <<i<<endl;
//         }
//     }
// }

// optimal solution - 1 (maths)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// // sum of squares of first n natural number -> n * (n+1) * (2n+1) / 6
//     vector <int> nums = {4,3,6,2,1,1};
//     int n = nums.size();

//     int sum_n1 = (n * (n+1)) / 2; //sum of n natural numbers
//     int sum1 = 0;  

//     for (auto it : nums) {
//         sum1 += it;   //sum of array
//     }

//     int x = sum1 - sum_n1; //repeating number - missing number  // x - y

//     int sum_n2 = (n * (n+1) * ((2*n)+1))/ 6; //sum of squares of n natural numbers
//     int sum2 = 0; 

//     for (auto it : nums) {
//         sum2 += (it*it);  //sum of squares of elements in the array
//     }

//     int y = sum2 - sum_n2; //sq of repeating number - sq of missing number
//     y = y / x; // x + y

//     int val1 = (x+y) / 2;
//     int val2 = val1 - x;
//     cout<<"missing number is : "<<val1<<" repeating number is : "<<val2<<endl;
// }

// count the number of inversion (left element > right element) brute force
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> nums = {5,3,2,4,1};
//     int cnt = 0;
//     for (int i=0; i<nums.size()-1; i++) {
//         for (int j=i+1; j<nums.size(); j++) {
//             if (nums[i] > nums[j]) {
//                 cnt++;
//             }
//         }
//     }
//     cout<<cnt<<endl;
// }

// optimal solution
// class Solution {
// public:

//     void merge(vector <int> &nums, int low, int mid, int high, int &cnt) {
//         vector <int> temp;
//         int left = low;
//         int right = mid+1;
        
//         while (left <= mid && right <= high) {
//             if (nums[left] <= nums[right]) {
//                 temp.emplace_back(nums[left]);
//                 left++;
//             }
//             else {
//                 temp.emplace_back(nums[right]);
//                 right++;
//                 cnt+= (mid-left+1);
//             }
//         }
//         while (left >= mid && right <= high) {
//             temp.emplace_back(nums[right]);
//             right++;
//         }
//         while (right >= high && left <= mid) {
//             temp.emplace_back(nums[left]);
//             left++;
//         }
//         for (int i=low; i<=high; i++) {
//             nums[i] = temp[i-low];
//         }
//     }

//     void mergesort(vector <int> &nums, int low, int high, int &cnt) {

//         if (low >= high) {
//             return;
//         }

//         int mid = (low + high) / 2;
//         mergesort(nums, low, mid, cnt);
//         mergesort(nums, mid+1, high, cnt);
//         merge(nums, low, mid, high, cnt);
//     }

//    long long int numberOfInversions(vector<int> nums) {
//     int cnt = 0;
//     mergesort(nums, 0, nums.size()-1, cnt);
//     return cnt;
//    }
// };

// reverse pairs (brute force)
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {40,25,19,12, 9,6,2};
//     int cnt = 0;
//     for (int i=0; i<arr.size()-1; i++) {
//         for (int j=i+1; j<arr.size(); j++) {
//             if (arr[i] > (2*arr[j])) {
//                 cnt++;
//             }
//         }
//     }
//     cout<<cnt<<endl;
// }

// max product subarray
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> arr = {2,3,-2,4};
//     int mx = INT_MIN;
//     for (int i=0; i<arr.size(); i++) {
//         int product = 1;
//         for (int j=i; j<arr.size(); j++) {
//             product *= arr[j];
//             mx = max(mx,product);
//         }
//     }
//     cout<<mx<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int binarysearch(int low, int high, vector <int> &arr, int target) {
//     if (low > high) {
//         return -1;
//     }

//     int mid = (low + high) / 2; 

//     if (arr[mid] == target) {
//         return mid;
//     }
//     else if (arr[mid] < target) {
//         return binarysearch(mid+1, high, arr, target);
//     }
//     else {
//         return binarysearch(low, mid-1, arr, target);
//     }
// }

// int main() {
//     vector <int> nums = {1,2,3,4,5,6,7,8};
//     int target;
//     cout<<"enter the number you want to search for : ";
//     cin>>target;
//     int ans = binarysearch(0,nums.size()-1, nums, target);
//     cout<<"the element is present at index : "<<ans<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int lowerbound(int low, int high, int target, vector <int> arr) {
//     int ans = arr.size();
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] >= target) {
//             ans = mid;
//             high = mid-1;
//         }
//         else {
//             low = mid+1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector <int> arr = {3,5,8,15,19};
//     int target;
//     cout<<"enter the element you want to search for :";
//     cin>>target;
//     int sol = lowerbound(0, arr.size()-1, target, arr);
//     if (sol == arr.size()) {
//         cout << "No element greater than or equal to target exists\n";
//     }
//     else if (arr[sol] == target) {
//         cout<<"the element is present at idx : "<<sol<<endl;
//     }
//     else {
//         cout << "The immediate greater element is: " << arr[sol] << endl;
//         cout << "Its index is: " << sol << endl;
//     }
// }

// upper bound

// #include <bits/stdc++.h>
// using namespace std;

// int upperbound(int low, int high, int target, vector <int> arr) {
//     int sol = arr.size();
//     while (low <= high) {
//         int mid = (low + (high-low)) / 2;
//         if (arr[mid] > target) {
//             sol = mid;
//             high = mid-1;
//         }
//         else {
//             low = mid+1;
//         }
//     }
//     return sol;
// }

// int main() {
//     vector <int> arr = {3,5,8,15,19};
//     int target;
//     cout<<"enter the element you want to search for : ";
//     cin>>target;
//     int ans = upperbound(0, arr.size()-1, target, arr);
//     cout<<"the upper bound of : "<<target<<" is : "<<ans<<endl;
// }

// floor and ceil in sorted array
// floor (The largest element in the array that is ≤ target.)
// ceil (if present return that no if not return immediate highest) (lower bound) 

// #include <bits/stdc++.h>
// using namespace std;

// int floor (int low, int high, int target, vector <int> arr) {
//     int ans = -1;
//     while (low <= high) {
//         int mid = low + (high-low) / 2;
//         if (arr[mid] <= target) {
//             ans = arr[mid];
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector <int> arr = {3,5,8,15,19};
//     int target;
//     cout<<"enter the element you want to find the floor of : ";
//     cin>>target;
//     int ans = floor(0, arr.size()-1, target, arr);
//     cout<<"floor of the value : "<<target<<" is : "<<ans<<endl;
// }

// first and last occurences in an array
// (lower bound & upper bound soln)
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {

//         // ending position
//         int last = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
//         last = (last == 0)? -1 : (nums[last-1] == target)? --last : -1;

//         // starting position
//         int start = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//         start  = (start == nums.size())? -1 : (nums[start] == target)? start : -1;

//         return {start,last};
//     }
// };

// to find count of occurences of an element just do
// cnt = (last == 0)? 0: (end-start+1);

// first and last occurences in an array
// (binary search soln)

// #include <bits/stdc++.h>
// using namespace std;

// int firstocc(int low, int high, int target, vector <int> arr) {
//     int ans = -1;
//     while (low <= high) {
//         int mid = low + (high-low) / 2;
//         if (arr[mid] == target) {
//             ans = mid;
//             high = mid-1;
//         }
//         else if (arr[mid] > target) {
//             high = mid-1;
//         }
//         else {
//             low = mid+1;
//         }
//     }
//     return ans;
// }

// int lastocc(int low, int high, int target, vector <int> arr) {
//     int ans = -1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] == target) {
//             ans = mid;
//             low = mid+1;
//         }
//         else if (arr[mid] > target) {
//             high = mid-1;
//         }
//         else {
//             low = mid+1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector <int> arr = {0,0,8,8,8,8,8,11,13};
//     int first = firstocc(0, arr.size()-1, 8, arr);
//     int last = lastocc(0, arr.size()-1, 8, arr);
// }

// Search in Rotated Sorted Array II
// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.
// You must decrease the overall operation steps as much as possible.

// class Solution {
// public:

//     bool is_sorted(int low, int high, vector<int>& nums) {
//         for (int i = low; i < high; i++) {
//             if (nums[i] > nums[i + 1]) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool search(vector<int>& nums, int target) {
//         int low = 0;
//         int high = nums.size() - 1;

//         while (low <= high) {
//             int mid = low + (high - low) / 2;

//             if (nums[mid] == target) {
//                 return true;
//             }

//             // Check if the left half is sorted
//             if (is_sorted(low, mid, nums)) {

//                 if (nums[low] <= target &&
//                     target < nums[mid]) {
//                     high = mid - 1;
//                 }
//                 else {
//                     low = mid + 1;
//                 }
//             }

//             // Right half is sorted
//             else {

//                 if (nums[mid] < target &&
//                     target <= nums[high]) {
//                     low = mid + 1;
//                 }
//                 else {
//                     high = mid - 1;
//                 }
//             }
//         }

//         return false;
//     }
// };

// Q. K ROTATIONS 
// class Solution {
// public:
//     int findKRotation(vector<int> &nums)  {
//         int n = nums.size();
//         if (n<=1) {
//             return 0;
//         }
//         int i = 0;
//         int rotate = 1;
//         while ((i<n-1 && nums[i] < nums[i+1])) {
//             rotate++;
//             i++;

//         }
//         return (i==n-1)? 0 : rotate;
//     }
// };

// class Solution {
// public:
//     int findKRotation(vector<int> &nums)  {
//         int min_idx = -1;
//         int low = 0;
//         int n = nums.size();
//         int high = n - 1;
//         int min_el = INT_MAX;
//         while (low <= high) {
//             int mid = low + (high-low) / 2;
//             if (nums[mid] >  nums[high]) {
//                 low = mid+1;
//             }
//             else {
//                 high = mid-1;
//             }
//             if (min_el > nums[mid]) {
//                 min_el = nums[mid];
//                 min_idx = mid;
//             }  
//         }
//         return min_idx;
//     }
// };

// find the peak element (left element < x > right element)
// if no elements found consider -infinity on b.s.
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector <int> nums = {1,2,1,3,5,6,4};
//     if (nums.size() == 1) {
//         return nums[0];
//     }
//     vector <int> peak;
//     for (int i=1; i<nums.size()-1; i++) {
//         if (nums[i-1]<nums[i] && nums[i+1]<nums[i]) {
//             peak.emplace_back(nums[i]);
//         }
//     }
//     if (peak.empty()) {
//         if (nums[nums.size()-1] > nums[nums.size()-2]) {
//             peak.emplace_back(nums.size()-1);
//         }
//         else if (nums[0]>nums[1]) {
//             peak.emplace_back(nums[0]);
//         }
//     }
//     for (auto it : peak) {
//         cout<<it<<" ";
//     }
// }

// single peak
// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int low = 0;
//         int n = nums.size();
//         int high = n-1;
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             int left = (low == 0)? INT_MIN : nums[mid-1];
//             int right = (high == n-1)? INT_MIN : nums[mid+1];
//             if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
//                 return mid;
//             }
//             if (nums[mid] > left) {
//                 low = mid+1;
//             }
//             else {
//                 high = mid-1;
//             }
//         }   
//         return 0;
//     }
// };

// nth root of an element
// class Solution {
// public:
//   int NthRoot(int N, int M) {
//     int low = 0;
//     int high = M;
//     long long ans;
//     while (low <= high) {
//         int mid = low + (high - low) / 2;
//         ans = 1;
//         for (int i=1; i<=N; i++) {
//             ans *= mid;
//             if (ans > M) {
//                 high = mid-1;
//                 break;
//             }
//         }
//         if (ans == M) {
//             return mid;
//         }
//         else if (ans < M){
//             low = mid+1;
//         }
//     }       
//     return -1;
//   }
// };

// koko eating bananas (brute force)
// class Solution {
// public:
//     int minimumRateToEatBananas(vector<int> nums, int h) {

//         int i = 1;

//         while (true) {

//             int hours = 0;

//             for (int x : nums) {
//                 hours += ceil(x / (double)i);
//             }

//             if (hours <= h) {
//                 return i;
//             }

//             i++;
//         }

//         return -1;
//     }
// };

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         for (int x : arr) {
//             if (x <= k) {
//                 k++;
//             }
//         }
//         return k;
//     }
// };

// aggressive cows
// class Solution {
// public:

//     int valid_distance(vector<int>&nums, int distance) {
//         int cows = 1;
//         int start = nums[0];
//         for (int i=1; i<nums.size(); i++) {
//             if (nums[i] - start >= distance) {
//                 start = nums[i];
//                 cows++;
//             }
//         }
//         return cows;
//     }

//     int aggressiveCows(vector<int> &nums, int k) {
//         sort(nums.begin(), nums.end());
//         int low = 1;
//         int high = nums[nums.size()-1] - nums[0];
//         while (low <= high) {
//             int mid = low + (high - low) / 2;
//             int cows = valid_distance(nums, mid);
//             if (cows >= k) {
//                 low = mid+1;
//             }
//             else {
//                 high = mid-1;
//             }
//         }
//         return high;
//     }
// };

// Minimize Max Distance to Gas Station
// brute force solution
// class Solution {
// public:
//     double minMaxDist(vector<int> &arr, int k) {
//         int n = arr.size();
// these are the gaps where we can place the stations
//         vector <int> stations_placed(n-1, 0);
// k stations to be placed
//         for (int stations=1; stations<=k; stations++) {
// for a single station we will place it in the gap which has the maximum distance between two stations
//             double max_gap = -1;
//             int max_idx = -1;
//             for (int i=0; i<n-1; i++) {
// distance between two adjacent stations
//                 double distance = arr[i+1] - arr[i];
// divide the distance by the number of sections created 
//                 double gap = distance/(stations_placed[i]+1);
//                 if (gap > max_gap) {
//                     max_gap = gap;
//                     max_idx = i;
//                 }
//             }
//             stations_placed[max_idx]++;    
//         }

// finally we will return the maximum gap after placing all the stations
//         double max_gap = -1;
//         for (int i=0; i<n-1; i++) {
//             double distance = arr[i+1] - arr[i];
//             double gap = distance/(stations_placed[i]+1);
//             if (max_gap < gap) {
//                 max_gap = gap;
//             }
//         }
//         return max_gap;
//     }
// };

// better solution
// class Solution {
//   public:
//     double minMaxDist(vector<int> &stations, int k) {
//         int n = stations.size();
//         priority_queue<pair<double, int>> pq;
//         vector <int> howMany(n-1, 0);
//         for (int i=0; i<n-1; i++) {
//             pq.push({stations[i+1] - stations[i], i});
//         }
        
//         for (int i=1; i<=k; i++) {
//             auto tp = pq.top();
//             pq.pop();
//             int idx = tp.second;
//             howMany[idx]++;
//             double distance = stations[idx+1] - stations[idx];
//             double gap = distance / (howMany[idx] + 1);
//             pq.push({gap, idx});
//         }
//         return pq.top().first;
//     }
// };

    // brute force solution to find the peak elements in a 2D matrix
    // vector <vector <int>> mat={{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
    // vector <int> peak_elements;
    // for (int i=0; i<mat.size(); i++) {
    //     for (int j=0; j<mat[0].size(); j++) {
    //         bool is_peak = true;
    //         if (i > 0 && mat[i][j] <= mat[i-1][j]) {
    //             is_peak = false;
    //         }
    //         if (i < mat.size()-1 && mat[i][j] <= mat[i+1][j]) {
    //             is_peak = false;
    //         }
    //         if (j > 0 && mat[i][j] <= mat[i][j-1]) {
    //             is_peak = false;
    //         }
    //         if (j < mat[0].size()-1 && mat[i][j] <= mat[i][j+1]) {
    //             is_peak = false;
    //         }
    //         if (is_peak) {
    //             peak_elements.push_back(mat[i][j]);
    //         }
    //     }
    // }
    // for (int x : peak_elements) {
    //     cout << x << " ";
    // }