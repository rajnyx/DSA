#include <bits/stdc++.h>
using namespace std;
int count(int n) {
    int count = 0;
    while (n>0) {
        n/=10;
        count++;
    }
    return count;
}

int rev_num(int n) {
    int cnt = (int)log10(n);
    int rev_n = 0;
    int ld = 0;
    while (n>0) {
        ld = n%10;
        rev_n += (ld * (int)pow(10,cnt));
        n/=10;
        cnt--;
    }
    return rev_n;
}

void pal(int n) {
    int num = n;
    int rev_num = 0;
    int ld = 0;
    int cnt = (int)log10(num);
    while (num>0) {
        ld = num%10;
        rev_num += (ld * (int)pow(10,cnt));
        num/=10;
        cnt--;
    }
    if (rev_num==n) {
        cout<<"palindrome";
    }
    else {
        cout<<"not a palindrome";
    }
}

void arms(int n) {
    int num = n;
    int ans = 0;
    int cnt = ((int)log10(num)) + 1;
    int ld = 0;
    while (num>0) {
        ld = num%10;
        ans += pow(ld,cnt);
        num/=10;
    }
    if (n==ans) {
        cout<<"armstrong number";
    }
    else {
        cout<<"not";
    }
}

void divisors(int n) {
    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            cout<<i<<" ";
        }
    }
}

void prime(int n) {
    bool flag = true;
    for (int i=2; i<=n/2; i++) {
        if (n%i==0) {
            flag = false;
        }
        else {
            flag = true;
        }
    }
    if (flag==true) {
        cout<<"prime"<<endl;;
    }
    else {
        cout<<"composite"<<endl;
    }
}

int GCD(int x, int y) {
    int max = (x>y)? x : y;
    int gcd = 0;
    for (int i=1; i<=max/2; i++) {
        if ((x%i==0) && (y%i==0)) {
            gcd = i;
        }
    }
    return gcd;
}
int main() {
    int x = 18;
    int y = 12;
    int gcd = GCD(x,y);
    cout<<gcd<<endl;
}