#include <iostream>
#include <cmath>
using namespace std;
int main(){
int j,i,y=0;
float x =0;
int remainder,k;
int number,prime=1;
Loop:
cout<<" \n \n Enter any number: ";
cin>>number;
//checks whether the number is prime or not.
 for(i=2; i<=sqrt(number); i++){
    if(number%i==0){
        prime = 0;break;}}
if(prime==1){
    cout<<number<<" is prime number"<<endl;

    for(j=1; j<=number; j++){
            prime=1;
          for( int i=2; i<=sqrt(j); i++){
            if(j%i==0){

            prime = 0;break;}
          }
if(prime == 1){
x = x+j;
y = y+1;
cout<<j<<" ";}}cout<<" the  prime numbers before "<< number;
cout<<endl<<x/y<<" is their average";} //prints the average
else {
    cout<<number<<" "<<"is not a prime number "<<endl;
          //finds the prime factors of the number
          for(k=2; k<=sqrt(number); k++){
                    prime=1;
             for( int i=2; i<=sqrt(k); i++){
                if(k%i==0){
                prime = 0;break;}
}
if(prime==1){
        if(number%k==0){
     cout<<k<<", ";
}
  }  }
cout<<" = prime factor  ";
}goto Loop;
return 0;
}
