// #include <iostream>
// using namespace std;

// int main() {
//     int n = 7;  

//     for (int i = n/2; i < n; i += 2) {
//         for (int j = 1; j < n - i; j += 2)
//             cout << " ";
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         for (int j = 1; j <= n - i; j++)
//             cout << " ";
//         for (int j = 1; j <= i; j++)
//             cout << "*";
//         cout << endl;
//     }

//     for (int i = n; i >= 1; i--) {
//         for (int j = i; j < n; j++)
//             cout << " ";
//         for (int j = 1; j <= (i * 2) - 1; j++)
//             cout << "*";
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a number :";
    cin>>n;
    int start = 2;
    int end = n-1;
    int mid = int(n/2) + 1;
    int lgrg = mid-1;
    int cg = 1;
    for (int i=1; i<n+1; i++) {
        if (i==mid) {       //for the middle part
            for (int j=1; j<n+1; j++) {
                cout<<"*";
            }
            cout<<endl;
        }
        else if(i>mid) {                    //lower part
            for (int j=1; j<n+1; j++) {
                if (j>=start && j<=end) {
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
            }
            cout<<endl;        
            start++;
            end--;
        }
        else {  
            for (int j=1; j<n+1; j++) {
                if (j>lgrg) {
                    cout<<"*";
                }
                else {
                    cout<<" ";
                }
                lgrg--;
                cg++; 
            }
            cout<<endl;
 
                                                 

        }
    }
}


    // int leftStart  = mid - 1;
    // int leftEnd    = mid;
    // int rightStart = mid + 2;
    // int rightEnd   = mid + 3;