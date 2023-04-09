#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cout << "Enter a positive integer: ";
    cin >> n;

    m = 2*n + 1; 
    int* mptr = &m;     // Assigning a pointer to the address of m variable
    int* nptr = &n;     // Assigning a pointer to the address of n variable

    
    if(*nptr>1){        // Checking if input value is greater than 1

        
        for (int i = 0; i <= *nptr; i++) {      // Printing the upper half of the pattern
            // Printing the left side of the pattern
            for (int j = 0; j <= i; j++) {
                // Printing digits from 0 to 9 alternatively
                if(j==*nptr){
                    cout<<"";
                }
                else{
                cout <<(i-j)%10; 
                }
            }

            // Calculating the number of spaces to be printed
            int c = (*mptr)-2*i;
            int* cptr = &c; // Assigning pointer to the address of calculated value

            // Printing the spaces in the middle of the pattern
            for (int j = 1; j < (*cptr-1); j++) {
                cout <<" ";
            }

            // Printing the right side of the pattern
            for (int j = i; j >= 0; j--) {
                cout <<(i-j)%10; 
            }

            // Moving to the next line after printing a row of the pattern
            cout << endl;
        }

        // Printing the lower half of the pattern
        for (int i = (*nptr)-1; i >= 0; i--) {
            // Printing the left side of the pattern
            for (int j = 0; j <= i; j++) {
                cout << (i-j)%10; 
            }

            // Calculating the number of spaces to be printed
            int d = m-2*i;
            int* dptr = &d; // Assigning pointer to the address of calculated value

            // Printing the spaces in the middle of the pattern
            for (int j = 0; j <(*dptr-2) ; j++) {
                if (j == i || j == *mptr-i-1) {
                    cout << " ";
                }
                else {
                    cout << " "; 
                }
            }

            // Printing the right side of the pattern
            for (int j = i; j >= 0; j--) {
                cout << (i-j)%10; 
            }

            // Moving to the next line after printing a row of the pattern
            cout << endl;
        }
    }

    // Printing a new line if the input value is not greater than 1
    else{
         cout<<endl;
    }

    return 0;
}
