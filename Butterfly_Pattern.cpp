#include <iostream>
#include <cmath>
using namespace std;
// This is a c++ program that prints out a butterfly pattern 
int main() {
    int n, m;
    cout << "Enter a positive integer: ";
    cin >> n;
    m = 2*n + 1; // number of columns
    if(n>1){
    // Upper half of the pattern
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if(j==n){
                
            }
            else{
            cout <<(i-j)%10; // print numbers in descending order
            }
        }
        int c=m-2*i;
        for (int j = 1; j < (c-1); j++) {

                  cout <<" ";
        }
        for (int j = i; j >= 0; j--) {
            cout <<(i-j)%10; // print numbers in ascending order
        }
        cout << endl;
    }
    // Lower half of the pattern
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << (i-j)%10; // print numbers in descending order
        }
        int d=m-2*i;
        for (int j = 0; j <(d-2) ; j++) {
            if (j == i || j == m-i-1) {
                cout << " ";
            }
            else {
                cout << " "; // print spaces elsewhere
            }
        }
        for (int j = i; j >= 0; j--) {
            cout << (i-j)%10; // print numbers in ascending order
        }
        cout << endl;
    }
 }
 else{
     cout<<endl;
 }
    return 0;
}
