#include <iostream>
#include <cmath>
using namespace std;
int main(){
float x = 0;
int remainder,k,N,prime=1,y=0; // int N holds memory for the input number
 
Loop:
cout<<"Enter any number: ";
cin>>N;
 // A prime number is a number that is only divisble by itself and 1
//checks whether the number is prime or not.
//prime= 0 denotes the number is not prime and prime=1 dontes the number entered is a prime
 for(int i=2; i<=sqrt(N); i++){
  //if N%i is 0 that means the number is not prime and the loop checks this for every number in the range of 2 and root of N
    if(N%i==0){
        prime = 0;break;}
 }
 
if(prime==1){
 //if the condition in the loop is not satisfied then prime=1
    cout<<N<<" is prime number"<<endl;

    for(int j=1; j<=N; j++){
            prime=1;
          for( int i=2; i<=sqrt(j); i++){
         
            if(j%i==0){
            prime = 0;break;}
          }
     
if(prime == 1){
x = x+j;
y = y+1;
cout<<j<<" ";}}cout<<" the  prime numbers before "<< N;
cout<<endl<<x/y<<" is their average";} //prints the average
else {
    cout<<N<<" "<<"is not a prime number "<<endl;
          //finds the prime factors of the number
          for(int k=2; k<=sqrt(N); k++){
                    prime=1;
             for( int i=2; i<=sqrt(k); i++){
                if(k%i==0){
                prime = 0;break;
                }
}
if(prime==1){
        if(N%k==0){
     cout<<k<<", ";
}
  }  }
cout<<" =  Are prime factors of "<<N;
}
 cout<<"\n \n";
 goto Loop;
return 0;
}
