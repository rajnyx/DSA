//Q.1 SWAPPING TWO NUMBERS (without using third variable)
// #include <iostream>
// using namespace std;                            
// int main() {                                      
//     int a = 5 , b = 2;  
//     cout<<a<<" "<<b<<endl;                        // with variable
//     a = (a+b);
//     b = a-b;
//     a = a-b;                             temp = a; a=b; b=temp;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

// Q. FIND THE MAX.
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main() {
//     int a =7;
//     int b = 92;
//     int c = 32;
//     cout<<max(a,max(b,c));
// }

// Q. FIND PRIME NUMBER
// #include <iostream>
// using namespace std;
// int main() {
//     int n; bool flag;
//     cout<<"enter a number:";
//     cin>>n;
//     flag = true;
//     for (int i = 2; i<n; i++) {
//         if (n%i==0) {
//             flag = false;
//         }
//     }
//     if (flag==true) {
//         cout<<"prime number";
//     }
//     else {
//         cout<<"composite";
//     }
//     return 0;
// }

// Q . CHECK WHETHER THE ENTERED CHARACTER IS AN ALPHABET OR NOT
// #include <iostream>
// using namespace std;
// int main() {
//     char ch;
//     cout<<"enter a character : ";
//     cin>>ch;
//     if (((ch>=65)&&(ch<=(65+25))) || ((ch>=97)&&(ch<=(97+25)))) {
//         cout<<"valid alphabet "<<ch<<" of ascii value : "<<int(ch)<<endl;
//     }
//     else {
//         cout<<"not a valid alphabet\n";
//     }
// }

// Q . WAP TO COUNT DIGITS OF A GIVEN NUMBER.
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//     int num = 4673;
//     cout<<"the number of digits in the number are: "<<(int(log10(num)))+1<<endl;
    // // int count = 0;
    // // while (num>0) {  (method - 2 without using math.h library)
    // //    num/=10;
    // //    count+=1;
    // //}
    // // cout<<count;
// }

// Q. WAP TO PRINT SUM OF DIGITS OF GIVEN NUMBER
// #include <iostream>
// using namespace std;
// int main() {
//     int num = 5673;
//     int sum = 0;
//     int rem = 0;
//     while (num > 0) {
//         rem = num%10;
//         sum += rem;
//         num /=10;
//     }
//     cout<<sum<<endl;
// }

// WAP TO PRINT THE REVERSE OF A NUMBER AND ITS SUM
// #include <iostream> 
// #include <math.h>
// using namespace std;
// int main() {
//     int num,num1,num2;
//     int rem = 0;
//     int sum = 0;
//     num2 = 0;
//     cout<<"enter a number : ";
//     cin>>num;
//     int zeroes = int(log10(num));
//     while (num > 0) {
//         rem = num % 10;
//         num1  = (rem * pow(10,zeroes));
//         num2 += num1;
//         sum += rem;
//         num /=10;
//         zeroes--;
//     }
//     cout<<num2<<"\n";
//     cout<<sum<<endl;
// }

// Q. FACTORIAL
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     int fact = 1;
//     for (int i=1; i<=n; i++) {
//         fact *= i;
//     }
//     cout<<fact<<endl;
// }

// COMBINATION (nCr) ---> n!/(n-r)!*r!          (always n>=r)          (selection)
// COMBINATION --> number of ways to choose r items from n items (order doesn't matter)
// ex:- Suppose you have 3 fruits: 🍎 Apple, 🍌 Banana, 🍊 Orange
// If you choose 2 fruits:
// Apple & Banana
// Banana & Apple
// These are the same combination because the order doesn’t matter.
// So this counts as one combination, not two.

// Q. FIND COMBINATION 
// #include <iostream>
// using namespace std;
// int factorial(int x);
// int combination(int n, int r);

// int main() {
//     int n,r,combo;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter r: ";
//     cin>>r;
//     combo = combination(n,r);
//     cout<<"combination is : "<<combo<<endl;
// }

// int factorial(int x) {
//     int sum = 1;
//     for(int i= 1; i<=x; i++) {
//         sum *= i;
//     }
//     return sum;
// }
// int combination(int n, int r) {
//     int comb;
//     comb = factorial(n)/(factorial(n-r) * factorial(r));
//     return comb;
// }

// PERMUTATION (nPr) ----> n!/(n-r)!   (arrangement)
// PERMUTATION ---> choosing r items from n items where order matters
// Suppose you have 3 letters: A, B, C
// EX :- If you arrange 2 letters:
// AB
// BA
// These are different permutations because the order is different.

// Q. FIND PERMUTATION
// #include <iostream>
// using namespace std;
// int factorial(int x);
// int permutation(int n, int r);        ///x,n,r are formal parameters

// int main() {
//     int x,n,r,perm;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter r: ";
//     cin>>r;
//     perm = permutation(n,r);     //after input the actual values on which operation will be performed
//     cout<<"permutation is: "<<perm<<endl;  // are actual parameters
// }

// int factorial(int x) {
//     int sum = 1;
//     for (int i = 1; i<=x; i++) {
//         sum*=i;
//     }
//     return sum;
// }

// int permutation(int n, int r) {     
//     int permu;
//     permu = factorial(n) / factorial (n-r);
//     return permu;
// }

// Q. PASCAL TRIANGLE
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter no. of rows: ";
//     cin>>n;
//     for (int i=1; i<n+1; i++) {
//         for (int j=1; j<=i; j++) {
            
//         }
//     }
// }

// Q. CREATE A FUNCTION TO SWAP TWO NUMBERS (using pass by reference)
// #include <iostream>
// using namespace std;
// void swap(int& a, int& b);   //& refers to main's a ,b   

// int main() {
//     int a,b;
//     a = 2;
//     b = 5;      
//     cout<<"a: "<<a<<" b: "<<b<<endl;
//     swap(a,b);
//     cout<<"a: "<<a<<" b: "<<b<<endl;
// }

// void swap(int& a, int& b) {
//     a = (a+b);
//     b = (a-b);
//     a = (a-b);   
// }

// Q. CREATE A FUNCTION TO SWAP TWO NUMBERS (using POINTER)
// #include <iostream>
// using namespace std;
// void swap(int* ptr, int* p);

// int main() {
//     int a,b;
//     cout<<"enter first number: ";
//     cin>>a;
//     cout<<"enter second number: ";
//     cin>>b;

//     int* ptr = &a;
//     int* p = &b;

//     cout<<"a : "<<*ptr<<" b : "<<*p<<endl;    
//     swap(ptr,p);
//     cout<<"a : "<<*ptr<<" b : "<<*p<<endl;
// }

// void swap(int* ptr, int* p) {
//     *ptr = *ptr + *p;
//     *p = *ptr - *p;
//     *ptr = *ptr - *p;
//     return;
// }

// Q . PRINT n TO 1 (using recursion)
// #include <iostream>
// using namespace std;
// void num(int n);

// int main() {
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     num(n);
// }

// void num(int n) {
//     if (n==0) {
//         return;
//     }
//     cout<<n<<endl;
//     num(n-1);
// }

// Q . PRINT 1 TO n (using recursion)
// #include <iostream>
// using namespace std;
// void num(int n, int m);

// int main() {
//     int m;
//     cout<<"enter a number:";
//     cin>>m;
//     num(1,m);
// }

// void num(int n,int m) {
//     if (n==m+1) {
//         return;
//     }
//     cout<<n<<endl;
//     num(n+1,m);
// }

// Q . PRINT 1 TO n (using recursion without any extra parameter)
// #include <iostream>
// using namespace std;
// void num(int n);

// int main() {
//     int m;
//     cout<<"enter a number:";
//     cin>>m;
//     num(m);
// }

// void num(int m) {
//     if (m==0) {
//         return;
//     }
//     num(m-1);
//     cout<<m<<endl;
// }

// Q. print sum from 1 to n. (return type)
// #include <iostream>
// using namespace std;
// int sum(int n);

// int main() {
//     int n;
//     cout<<"enter a number:";
//     cin>>n;
//     int s = sum(5);
//     cout<<s<<endl;
// }

// int sum(int n) {
//     if (n==1) {
//         return 1;
//     }
//     return sum(n-1) + n;
// }

// Q. print factorial of n. (return type)
// #include <iostream>
// using namespace std;

// int factorial(int n);

// int main() {
//     int n,fact;
//     cout<<"enter a number: ";
//     cin>>n;
//     fact = factorial(n);
//     cout<<fact<<endl;
// }

// int factorial(int n) {
//     if (n==1) {
//         return 1;
//     }
//     return factorial(n-1) * n;
// }

// Q. MAKE A FUNCTION WHICH CALCULATES 'a' raised to the power 'b' using recursion.
// #include <iostream>
// #include <cmath>
// using namespace std;

// int power(int a, int b);

// int main() {
//     int a,b;
//     a= 2; 
//     b = 4;
//     int pow = power(a,b);
//     cout<<pow<<endl; 
// }

// int power(int a, int b) {
//     if (b==0) {
//         return 1;
//     }
//     return power(a,b-1) * a;
// }

// Q. CALCULATE THE SUM OF ALL THE ELEMENTS IN THE GIVEN ARRAY.
// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0;
//     int arr[5];
//     for (int i = 0; i<=4; i++) {
//         cout<<"enter the "<<i<<"th element of array:";
//         cin>>arr[i];
//     }
//     for (int i = 0; i<=4; i++) {
//         sum += arr[i];
//     }
//     cout<<sum<<endl;
// }

// Q. FIND THE MAXIMUM VALUE OF ALL THE ELEMENTS IN THE ARRAY.
// #include <iostream>
// using namespace std;
// int main() {
//     int max = 0;
//     int arr[] = {2,11,5,6,9,3};
//     int size = sizeof(arr)/4;
//     max = arr[0];
//     for (int i = 1; i<size; i++) {
//         if (max>arr[i]) {
//             max = arr[i];
//         }
//     }
//     cout<<max<<endl;
// }

// Q. GIVEN AN INTEGER N. CREATE AN ARRAY CONTAINING SQUARES OF ALL NATURAL NUMBERS TILL N AND PRINT THE
// ELEMENTS OF THE ARRAY.

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     int arr[n];
//     for (int i=1; i<=n; i++) {
//         arr[(i-1)] = i*i;
//     }
//     for (int i =0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Q. GIVEN AN ARRAY OF INTEGERS, CHANGE THE VALUE OF ALL ODD INDEXED ELEMENTS TO ITS SECOND MULTIPLE
// AND INCREMENT ALL EVEN INDEXED VALUES BY 10.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i=0; i<size; i++) {
//         if ((i%2)!=0) {
//             arr[i]*=2;
//         }
//         else if((i%2)==0) {
//             arr[i]+=10;
//         }
//     }
//     for (int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// Q. COUNT THE NUMBER OF ELEMENTS IN GIVEN ARRAY GREATER THAN A GIVEN NUMBER X.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     int count = 0;
//     for (int i = 0; i<size; i++) {
//         if (arr[i] > n) {
//             count +=1;
//         }
//     }
//     cout<<count<<endl;
// }


// Q. FIND THE DIFFERENCE BETWEEN THE SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int even = 0, odd = 0;
//     for(int i=0; i<size; i++) {
//         if (i%2==0) {
//             even += arr[i];
//         }
//         else if (i%2!=0) {
//             odd += arr[i];
//         }
//     }
//     if (even>odd) {
//         cout<<(even-odd)<<endl;
//     }
//     else {
//         cout<<(odd-even)<<endl;
//     }
// }

// Q. FIND THE SECOND LARGEST ELEMENT IN THE GIVEN ARRAY.
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int arr[] = {1,8,3,4,5};
//     int max1 = INT_MIN, max2 = INT_MIN;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i= 1 ; i<size; i++) {
//         if (max1<arr[i]) {
//             max1 = arr[i];
//         }
//     }
//     for (int i= 1 ; i<size; i++) {
//         if (arr[i] != max1) {
//             if (max2<arr[i]) {
//                 max2 = arr[i];
//             }
//         }
//     }
//     cout<<max1<<endl;
//     cout<<max2<<endl;
// }

// Q. FIND THE SECOND SMALLEST ELEMENT IN THE GIVEN ARRAY.
// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
//     int arr[] = {1,8,3,4,5};
//     int min1 = INT_MAX, min2 = INT_MAX;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i= 0 ; i<size; i++) {
//         if (min1>arr[i]) {
//             min1 = arr[i];
//         }
//     }
//     for (int i= 0 ; i<size; i++) {
//         if (arr[i] != min1) {
//             if (min2>arr[i]) {
//                 min2 = arr[i];
//             }
//         }
//     }
//     cout<<min1<<endl;
//     cout<<min2<<endl;
// }

// Q. WAP TO STORE ROLL NUMBER AND MARKS OBTAINED BY 4 STUDENTS SIDE BY SIDE IN A MATRIX
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[4][2];
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<2; j++) {
//             if (j==0) {
//                 cout<<"enter roll.no of student :";
//                 cin>>arr[i][j];
//             }
//             else {
//                 cout<<"enter marks of student :";
//                 cin>>arr[i][j];
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for (int i=0; i<4; i++) {
//         for (int j=0; j<2; j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Q. INPUT A STRING AND COUNT ALL VOWELS IN THE GIVEN STRING.
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string name = "umbrella";
//     int len = name.length();
//     int count = 0;
//     for (int i=0; i<len; i++) {
//         if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
//             name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') {
//             count +=1;
//         }
//     }
//     cout<<count<<endl;
// }

// Q.INPUT A STRING OF SIZE N AND UPDATE ALL THE EVEN POSITIONS IN THE STRING TO CHARACTER 'a'. CONSIDER
// 0-BASED INDEXING.
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cout<<"enter the word: ";
//     getline(cin,str);
//     for (int i=0; i<(str.length()); i++) {
//         if (i%2==0) {
//             str[i] = 'a';
//         }
//     }
//     cout<<str<<endl;
// }

// Q. INPUT A STRING OF EVEN LENGTH AND REVERSE THE FIRST HALF OF THE STRING
// #include <algorithm>
// #include <iostream>
// using namespace std;
// int main() {
//     string name = "12345678";
//     int size = name.length();
//     reverse(name.begin() + 0, name.begin() + ((size/2)));
//     cout<<name<<endl;
// }

// Q. INPUT A STRING OF LENGTH GREATER THAN 5 AND REVERSE THE SUBSTRING FROM POSITION 2 TO 5 USING INBUILT
// FUNCTIONS
// #include <algorithm>
// #include <iostream>
// using namespace std;
// int main() {
//     string name = "12345678";
//     reverse(name.begin() + 1, name.begin() + 4);
//     cout<<name<<endl;
// }

// Q. RETURN THE TOTAL NUMBER OF DIGITS IN A NUMBER WITHOUT USING ANY LOOP
// #include <iostream>
// using namespace std;
// int main() {
//     int x = 12345678;
//     string str = to_string(x);    
//     cout<<str.length()<<endl;
//     return 0;
// }

// Q.WRITE A PROGRAM TO COPY THE CONTENTS OF ONE ARRAY INTO ANOTHER IN REVERSE ORDER.
// #include <iostream>
// using namespace std;
// int main() {
//     int num[] = {1,2,3,4,5};
//     int size = sizeof(num)/sizeof(num[0]);
//     int arr[size];
//     int x = (size-1);
//     for (int i= 0; i<size; i++) {
//         arr[i] = num[x];
//         x--;
//     }
//     for (int i=0 ; i<size; i++) {
//         cout<<arr[i];
//     }
//     cout<<endl;
// }

// Q. WAP TO REVERSE THE ARRAY WITHOUT USING ANY EXTRA ARRAY.
// #include <iostream>
// using namespace std;
// int main() {
//     int num[] = {1,2,3,4,5};
//     int size = sizeof(num)/sizeof(num[0]);
//     int x = (size-1);
//     int temp = 0;
//     for (int i=0; i<size; i++) {
//         if (i==x) {
//             break;
//         }
//         temp = num[i];
//         num[i] = num[x];
//         num[x] = temp;
//         x--;
//     }
//     for (int i=0; i<size; i++) {
//         cout<<num[i];
//     }
// }

// Q. IF AN ARRAY arr CONTAINS N ELEMENTS, THEN CHECK IF THE GIVEN ARRAY IS A PALINDROME OR NOT.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,3,2,1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int arr1[size];
//     int x = (size-1);
//     for (int i=0; i<(size); i++) {
//         arr1[i] = arr[x];
//         x--;
//     }
//     bool isPalindrome = true;
//     for (int i=0; i<size; i++) {
//         if (arr[i] != arr1[i]) {
//             isPalindrome = false;
//         }
//     }
//     if (isPalindrome) {
//         cout<<"palindrome";
//     }
//     else {
//         cout<<"not";
//     }
// }

// Q. WRITE A PROGRAM TO STORE 10 AT EVERY INDEX OF A 2D MATRIX WITH 5 ROWS AND 5 COLUMNS.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5][5];
//     for (int i=0; i<5; i++) {
//         for (int j=0; j<5; j++) {
//             arr[i][j] = 10;
//         }
//     }
//     for (int i=0 ; i<5; i++) {
//         for (int j=0 ; j<5; j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Q. WAP TO ADD TWO MATRICES (1-D)
// #include <iostream>
// using namespace std;
// int main() {
//     int arr1[3] = {1,2,3};
//     int arr2[3] = {4,5,6};
//     int arr[3];
//     for (int i=0 ; i<3; i++) {
//         arr[i] = arr1[i] + arr2[i];
//     }
//     for (int i=0 ; i<3; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// Q. WAP TO ADD TWO MATRICES (2-D)
// #include <iostream>
// using namespace std;
// int main() {
//     int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3];
//     int arr[3][3];

//     for (int i=0; i<3; i++) {             //input for second array
//         for (int j=0; j<3; j++) {
//             cout<<"enter element of array: ";
//             cin>>arr2[i][j];
//         }
//     }

//     for (int i=0; i<3; i++) {                   //assigning values to resultant array
//         for (int j=0; j<3; j++) {
//             arr[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
    
//     for (int i=0; i<3; i++) {              //output
//         for (int j=0; j<3; j++) {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

// Q. FIND THE MAXIMUM ELEMENT IN A GIVEN MATRIX
// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
//     int arr[3][3] = {{9,1,4}, {2,97,6}, {3,7,8}};
//     int max = INT_MIN;
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             if (arr[i][j] > max) {
//                 max = arr[i][j];
//             }
//         }
//     }
//     cout<<max<<endl;
// }

// Q. FIND THE SUM OF ALL ELEMENTS IN A GIVEN MATRIX.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[3][3] = {{9,1,4}, {2,97,6}, {3,7,8}};
//     int sum = 0;
//     for (int i =0 ; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             sum += arr[i][j];
//         }
//     }
//     cout<<sum<<endl;
// }

// Q. WRITE A PROGRAM TO STORE  THE TRANSPOSE OF THE MATRIX IN A NEW MATRIX ENTERED BY THE USER.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int trans[3][3];
//     for (int j=0; j<3; j++) {
//         for (int i=0; i<3; i++) {
//             trans[j][i] = arr[i][j];
//         }
//     }
//     for (int i=0; i<3; i++) {
//         for (int j=0 ; j<3; j++) {
//             cout<<trans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

