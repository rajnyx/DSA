// #include <bits/stdc++.h>
// using namespace std;
// void print (int n) {
//     if (n==0) {
//         return;                        // 10 to 1
//     }
//     cout<<n<<endl;
//     print(n-1);
// }
// int main() {
//     print(10);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print(int x, int y) {
//     if (x>y) {
//         return;
//     }
//     cout<<x<<endl;                   // 1 to 10 using two parameters
//     print(x+=1,y);
// }
// int main() {
//     print(1,10);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print(int n) {
//     if (n==0) {
//         return;
//     }
//     print(n-1);                          // 1 to 10 using single parameter
//     cout<<n<<endl;
// }
// int main() {
//     print(10);
// }

// #include <iostream>
// using namespace std;
// void name(int n) {
//     if (n==0) {
//         return;
//     }
//     cout<<"raj singh"<<endl;
//     name(n-1);
// }
// int main() {
//     name(5);
// }

// Q. PRINT FROM N TO 1 (USING BACKTRACKING);
// #include <iostream>
// using namespace std;
// void print(int x,  int y) {
//     if (x>y) {
//         return;
//     }
//     print(x+1,y);
//     cout<<x<<endl;
// }
// int main() {
//     print(1,10);
// }

// Q. SUM FIRST N NUMBERS
// #include <iostream>
// using namespace std;
// int sum(int n) {
//     if (n==0) {
//         return 0;
//     }                                                       // functional recursion
//     return sum(n-1) + n;
// }
// int main() {
//     int x = sum(4);
//     cout<<x<<endl;
// }

// #include <iostream>
// using namespace std;
// void sum(int n,int add) {                              //parameterised recursion
//     if (n<1) {
//         cout<<add<<endl;
//         return;
//     }
//     return sum(n-1,add+n);
// }
// int main() {
//     sum(4,0);
// }

// Q. FACTORIAL OF A NUMBER
// #include <iostream>
// using namespace std;
// int fact(int n) {
//     if (n==0 || n==1) {
//         return 1;
//     }
//     return fact(n-1) * n; 
// }

// int main() {
//     int factorial = fact(4);
//     cout<<factorial<<endl;
// }

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

// Q. CHECK IF A GIVEN STRING IS PALINDROME OR NOT
// #include <iostream>
// using namespace std;

// bool chk_pal(char ch[],int i,int n) {
//     if (i>=n/2) {
//         return true;
//     }
//     if (ch[i] != ch[n-1-i]) {
//         return false;
//     }
//     return chk_pal(ch,i+1,n);
// }

// int main() {
//     char ch[] = {"madam"};
//     int len = sizeof(ch)/sizeof(ch[0])-1;
//     bool ans = chk_pal(ch,0,len);
//     cout<<ans<<endl;
// }

// Nth FIBONACCI NUMBER
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