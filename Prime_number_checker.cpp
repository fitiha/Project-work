#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float x = 0;
    int remainder, k, number, prime = 1, y = 0;

    Loop:
    cout<<"Enter any number: ";
    cin>>number;

    int *ptrPrime = &prime;
    int *ptrY = &y;
    float *ptrX = &x;
    int *ptrK = &k;
    int *ptrNumber = &number;

    for(int i = 2; i <= sqrt(*ptrNumber); i++){
        if(*ptrNumber % i == 0){
            *ptrPrime = 0;
            break;
        }
    }

    if(*ptrPrime == 1){
        cout<<*ptrNumber<<" is prime number"<<endl;
        for(int j = 1; j <= *ptrNumber; j++){
            *ptrPrime = 1;
            for(int i = 2; i <= sqrt(j); i++){
                if(j % i == 0){
                    *ptrPrime = 0;
                    break;
                }
            }
            if(*ptrPrime == 1){
                *ptrX = *ptrX + j;
                *ptrY = *ptrY + 1;
                cout<<j<<" ";
            }
        }
        cout<<" the  prime numbers before "<< *ptrNumber;
        cout<<endl<<*ptrX / (*ptrY)<<" is their average";
    }
    else {
        cout<<*ptrNumber<<" "<<"is not a prime number "<<endl;
        for(*ptrK = 2; *ptrK <= sqrt(*ptrNumber); (*ptrK)++){
            *ptrPrime = 1;
            for(int i = 2; i <= sqrt(*ptrK); i++){
                if(*ptrK % i == 0){
                    *ptrPrime = 0;
                    break;
                }
            }
            if(*ptrPrime == 1){
                if(*ptrNumber % *ptrK == 0){
                    cout<<*ptrK<<", ";
                }
            }
        }
        cout<<" =  Are prime factors of "<<*ptrNumber;
    }

    cout<<"\n \n";
    goto Loop;

    return 0;
}
