
// #include <iostream>
// using namespace std;                                 //   *****
// int main() {                                         //   *****
//     for(int i = 1; i<=3; i++) {                      //   *****   
//         for (int j = 1; j<=5; j++) {               //solid rectangle m = 3 n= 5 
//             cout<<"*";                               // 3 is the no. of rows
//      }                                               // 5 is the no. of columns
//         cout<<endl;
//     } 
// }

// #include <iostream>
// using namespace std;                                 //   ****
// int main() {                                         //   ****   
// for(int i = 1; i<=4; i++) {                          //   ****   
//         for (int j = 1; j<=4; j++) {                 //   ****
//             cout<<"*";                               // 4 is the no. of rows
//         }                                            // 4 is the no. of columns
//         cout<<endl;                              // solid square n=4
//     } 
// }

// #include <iostream>
// using namespace std;                                  //1111
// int main() {                                          //2222
//     int n;                                            //3333
//     cout<<"enter no.of rows:";                        //4444
//     cin>>n;                                       (n=4)   //number square
//     for (int i = 1; i<=n; i++) {
//         for (int j = 1 ; j<=n; j++) {
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>                                  //1234
// using namespace std;                                 //1234 
// int main() {                                         //1234
//     for (int i = 1; i<=4; i++) {                     //1234
//         for (int j= 1; j<=4; j++) {
//             cout<<j;                           //number square n=3;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;                                //AAAA
// int main() {                                        //BBBB
//     for (int i = 65;i<=(68);i++) {                  //CCCC
//         for (int j=1; j<=4; j++) {                  //DDDD
//             cout<<(char)i;                          //alphabet square
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;                                 //ABCD
// int main() {                                         //ABCD
//     for(int i = 1; i<=4; i++) {                      //ABCD
//         for(int j = 65; j<=68; j++) {                //ABCD
//             cout<<(char)j;
//         }
//         cout<<endl;                              //alphabet square (n=4);
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter no. of rows:";
//     cin>>n;
//     for (int i = 1; i<=n; i++) {
//         cout<< string(i,'*');
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;                                                 *
// int main() {                                                         **  
//     int n;                                                           *** 
//     cout<<"enter no. of rows:";                                      ****
//     cin>>n;                                                          (n=4)
//     for (int i = 1; i<=n; i++) {                                     //no. of rows = 4
//         for (int j = 1; j<=i;j++) {
//             cout<<'*';                                    //star triangle
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>                                           //1
// using namespace std;                                          //12
// int main() {                                                  //123
//     for (int i=1; i<=4; i++) {                                //1234
//         for (int j=1; j<=i; j++) {
//             cout<<j;
//         }                                               //number triangle
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>                                           //A
// using namespace std;                                          //AB
// int main() {                                                  //ABC
//     for (int i=65; i<=65+3; i++) {                            //ABCD
//         for (int j=65; j<=i; j++) {
//             cout<<(char)j;
//         }                                               //alphabet triangle
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;                                        //1
// int main() {                                                //A B
//     int n;                                                  //1 2 3
//     cout<<"enter a number:";                                //A B C D 
//     cin>>n;                                                 //1 2 3 4 5
//         for(int i=1; i<=n; i++) {                           //(for n=5)
//             if ((i%2)!=0) {                                 //(alphabet and number triangle)
//                 for(int j=1 ;j<=i; j++) {
//                     cout<<j<<" ";
//                 }
//                 cout<<endl;
//             }
//             else {
//                 for(int x=65 ; x<=(64+i) ; x++) {
//                     cout<<(char)x<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
//         return 0;
// }

// #include <iostream>
// using namespace std;                               //****
// int main() {                                       //***
//     int n;                                         //** 
//     cout<<"enter no. of rows:";                    //*
//     cin>>n;                                        //(for n=4)
//     for(int i = n ; i>=1; i--) {                 // reverse star triangle
//         for(int j=i;j>=1;j--) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;                           // 1234
// int main() {                                   // 123
//     int n;                                     // 12
//     cout<<"enter no. of rows:";                // 1
//     cin>>n;                                       //(for n=4)
//     for (int i = n; i>=1; i--) {                  // reverse number triangle
//         for (int j=1; j<=i; j++) {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;                           // ABCD
// int main() {                                   // ABC
//     int n;                                     // AB
//     cout<<"enter no. of rows:";                // A
//     cin>>n;                                       //(for n=4)
//     for (int i=64+n; i>=64; i--) {                  // reverse alphabet triangle
//         for (int j=65; j<=i; j++) {
//             cout<<(char)j;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {                                          //1
//     int n;                                            //1 3 
//     cout<<"enter no. of rows:";                       //1 3 5
//     cin>>n;                                           //1 3 5 7
//     for(int i = 1; i<=n; i++) {                      (for n=4)
//         for(int j=1; j<=((i*2)-1); j+=2) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;                                 //floyd's triangle
// int main() {                                         //1
//     int n;                                           //2 3 
//     cout<<"enter no. of rows:";                      //4 5 6 
//     cin>>n;                                          //7 8 9 10
//     int num = 1;                                     (for n = 4)
//     for (int i=1; i<=n; i++) {
//         for(int j=1;j<=i;j++) {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

 // 0 & 1 TRIANGLE 
                                              // 1
                                              // 0 1
                                              // 1 0 1
                                              // 0 1 0 1
// #include <iostream>  
// using namespace std;                                          
// int main() {                                  
//     int n;
//     cout<<"enter no. of rows: ";
//     cin>>n;
//     for (int i=1 ; i<n+1; i++) {
//         for (int j= 1; j<i+1; j++) {
//             if (((i+j) % 2) == 0) {
//                 cout<<1<<" ";
//             }
//             else {
//                 cout<<0<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>                                        //      *   (n=5)
// using namespace std;                                      //       *
// int main() {                                              //     *****               
//     int n;                                                //       *
//     cout<<"enter a number :";                             //       *
//     cin>>n;
//     int mid = int(n/2) + 1;                                          (star plus)
//     for (int i=1; i<n+1; i++) {
//         if (i!=mid) {
//             for (int j=1; j<n+1; j++) {
//                 if (j==mid) {
//                     cout<<"*";
//                 }
//                 else {
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//         else {
//             for (int k=1; k<n+1; k++) {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
// }

// #include <iostream>                                             // ******
// using namespace std;                                            // *    *
// int main() {                                                    // *    *
//     int n;                                                      // ******
//     cout<<"enter a number :";                        //(n=4)
//     cin>>n;                                                 // hollow rectangle
//     int end = (2*n-2);
//     for (int i=1; i<n+1; i++) {
//         if (i==1 || i==n) {
//             for (int j=1; j<=end; j++) {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         else {
//             for (int j=1 ; j<=end;j++) {
//                 if (j==1 || j==end) {
//                     cout<<"*";
//                 }
//                 else {
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// }

// #include <iostream>
// using namespace std;                                                    *   *
// int main() {                                                             * *          (n=5)  (cross star)
//     int n;                                                                *
//     cout<<"enter no. of rows:";                                          * *              
//     cin>>n;                                                            *    *
//     int start = 0;
//     int end = n+1;
//     int mid = int(n/2) + 1; 
//     for (int i=1; i<n+1; i++) {
//         start++;
//         end--;
//         if ((i==1) || (i==n)) {
//             for (int j=1; j<n+1; j++) {
//                 if ((j==1) || (j==n)) {
//                     cout<<"*";
//                 }
//                 else {
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//         else if (i==mid) {
//             for (int k=1; k<n+1; k++) {
//                 if (k==mid) {
//                     cout<<"*";
//                 }
//                 else {
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;
//         }
       
//         else {
//             for (int j=1; j<n+1; j++) {
//                 if (j==start || j==end) {
//                     cout<<"*";
//                 }
//                 else {
//                     cout<<" ";
//                 }
//             }
//             cout<<endl;          
//         } 
//     }
// }

// #include <iostream>
// using namespace std;                                         // optimal solution
// int main() {
//     int n;
//     cout<<"enter no. of rows: ";
//     cin>>n;
//     for (int i=1; i<n+1; i++) {
//         for (int j=1; j<n+1; j++) {
//             if ((i==j) || ((i+j) == (n+1))) {
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Q. PYRAMID TRIANGLE
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i=1; i<=5; i++) {
//         for (int j=1; j<=(5-i); j++) {
//             cout<<" ";
//         }
//         for (int j=1; j<=(2*i)-1; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Q. INVERTED PYRAMID TRIANGLE
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i=5 ;i>=1; i--) {
//         for (int k=0; k<(5-i);k++) {
//             cout<<" ";
//         }
//         for (int j=1; j<=(2*i)-1; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Q. DIAMOND PATTERN
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1; i<=((2*n)-1); i++) {
//         if (i<n) {
//             for (int a=1; a<=(n-i); a++) {
//                 cout<<" ";
//             }
//             for (int b=1; b<=((2*i)-1); b++) {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         else {
//             for (int e=1; e<=(i-n); e++) {
//                 cout<<" ";
//             }
//             for (int f=1; f<=(2*(2*n - i) -1); f++) {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     for (int i=1; i<=(2*n)-1; i++) {
//         if (i<n) {
//             for (int j=1; j<=i; j++) {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         else {
//             for (int k=1; k<=(2*n - i); k++) {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
// }

// Q. 0 - 1 TRIANGLE
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1; i<=n; i++) {
//         if ((i%2!=0)) {
//             for (int j=1; j<=i; j++) {
//                 if (j%2!=0) {
//                     cout<<1<<" ";
//                 }
//                 else {
//                     cout<<0<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//         else {
//             for (int k=1; k<=i; k++) {
//                 if(k%2!=0) {
//                     cout<<0<<" ";
//                 }
//                 else {
//                     cout<<1<<" ";
//                 }
//             }
//             cout<<endl;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     int spaces = (2*n)-2;
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=i; j++) {
//             cout<<j;
//         }
//         for (int k=1;k<=spaces; k++) {
//             cout<<" ";
//         }
//         for (int l=i;l>0; l--) {
//             cout<<l;
//         }
//         cout<<endl;
//         spaces -=2;
//     }
// }

// Q.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=(n-i); j++) {
//             cout<<" ";
//         }
//         for (int j=65; j<65+i; j++) {
//             cout<<(char)j;
//         }
//         for (int j=63+i;j>=65;j--) {
//                 cout<<(char)j;
//         }
//         cout<<endl;
//     }
// }


// Q.
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter a number :";
//     cin>>n;
//     for (int i=1; i<=n; i++) {
//         for (int j=65+n-i; j<65+n; j++) {
//             cout<<(char)j<<" ";
//         }
//         cout<<endl;
//     }
// }