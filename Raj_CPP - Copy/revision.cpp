// taking an entire string as an input
// normal cin terminates when a user uses space in between the strings getine allows user to enter string as
// per his choice
// int ()
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    
// }

// #include <iostream>
// using namespace std;
// int main() {
//     (3>4) ? cout<<"hello" : cout<<"world" ; 
//     return 0;
// }// 

// #include <iostream>
// using namespace std;
// int main() {
//     int day;
//     cout<<"enter day no. :";
//     cin>>day;
//     switch (day) {
//         case 1 : 
//             cout<<"monday";
//         case 2 : 
//             cout<<"tuesday";
//             break;
//         default : 
//             cout<<"invalid day";
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n =1;
//     do {cout<<n<<endl; n++;} while (n<11);
// }

// #include <iostream>
// using namespace std;
// int main() {
//     for (int i= 1; i<6; i++) {
//         if (i==3) {
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int fact(int n);

// int main() {
//     int n=4;
//     int factorial = fact(4);
//     cout<<factorial<<endl;
// }

// int fact(int n) {
//     if (n==1 || n==0) {
//         return 1;
//     }
//     else {
//         return fact(n-1) * n;
//     }
// }

// #include <iostream>
// using namespace std;
// void greet();
// void ask();

// int main() {
//     ask();
//     greet();
// }

// void ask() {
//     cout<<"how are you?..\n";
// }
// void greet() {x
//     cout<<"hello raj..";
//     ask();
// }

// #include <iostream>
// using namespace std;
// int fact(int x);
// int combi(int n, int r);

// int main() {
//     int n,r;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"enter r:";
//     cin>>r;
//     int comb = combi(n,r);
//     cout<<comb<<endl;
// }

// int fact(int x) {
//     int product = 1;
//     for (int i=1; i<=x; i++) {
//         product *=i;
//     }
//     return product;
// }

// int combi(int n,int r) {
//     int combi = fact(n) / (fact(n-r) * fact (r));
//     return combi;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int b = 2;
//     a = b;
//     b = a;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int x = 5;
//     cout<<x<<endl;
//     cout<<&x<<endl;
//     int* ptr  = &x;
//     *ptr = 3;
//     cout<<x<<endl;
//     cout<<*ptr<<endl;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int nums[] = {1,2,3,4,5};
//     nums[5] = 6;
//     int size = sizeof(nums) / sizeof(nums[0]);
//     for (int i=0;i<size+1; i++) {
//         cout<<nums[i]<<endl;
//     }
// }

