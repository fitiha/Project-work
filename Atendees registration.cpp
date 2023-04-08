#include<iostream>
using namespace std;
int main(){
    /*Initialize variable "code" for the input and  multiple variables for
    each kind of entry alongside another variable that counts the sales*/
	int code, infant=0, child=0, teenage=0, adult=0;
	int infantSale=0, childSale=0, teenageSale=0, adultSale=0;
	int totalAtendee=0, totalSale=0;
//declare return label to make it run till someone enters a negative numbers
    retry:
	cout<<"WELCOME. ENTER YOUR CODE : ";
//Make the variable "code" accept the inputs 1-4 and use the inputs to determine how much they pay
	cin>>code;
	if(code>=1 && code<=4){
//Increment the values of the variables according to the entry and the total sales by the the amount they should be paying
/*
code 1:Infants  entrance fee=10
code 2:Child    entrance fee=5
code 3:Teenage   entrance fee=20
code 4:Adult     entrance fee=20
*/
		switch(code){

			case 1:
				infant++;
				infantSale+=10;
				goto retry;
				break;

			case 2:
				child++;
				childSale+=5;
				goto retry;
				break;

			case 3:
				teenage++;
				teenageSale+=20;
				goto retry;
				break;

			case 4:
				adult++;
				adultSale+=20;
				goto retry;
				break;
		}
	}
	 else if(code>4){
                cout<<"You have entered an invalid code. \nPlease try again.\n";
                goto retry;
            }
	else if(code<0){
    //Out puts all the information about the fees collected when  a negative number is entered
		totalAtendee = infant + child + teenage + adult;
		totalSale = infantSale + childSale + teenageSale + adultSale;
		cout<<"\n************************************\n";
cout<<"\n  CATEGORY CODE = 1";
		cout<<"\n  TOTAL SALE FROM INFANTS = "<<infantSale;
		cout<<"\n************************************\n";

		cout<<"TOTAL CHILD ATEENDEES = "<<child;
cout<<"\n  CATEGORY CODE = 2";
		cout<<"\n  TOTAL SALE FROM CHILDS = "<<childSale;
		cout<<"\n************************************\n";

		cout<<"TOTAL TEENAGE ATEENDEES = "<<teenage;
cout<<"\n  CATEGORY CODE = 3";
		cout<<"\n  TOTAL SALE FROM TEENAGES = "<<teenageSale;
		cout<<"\n************************************\n";
		cout<<"TOTAL ADULT ATEENDEES = "<<adult;
cout<<"\n  CATEGORY CODE = 4";
		cout<<"\n  TOTAL SALE FROM ADULTS = "<<adultSale;
		cout<<"\n************************************\n";

//Out put the total number of attendees
		cout<<"TOTAL ATEENDEES = "<<totalAtendee;
		cout<<"\n \t TOTAL SALE = "<<totalSale;
		cout<<"\n************************************\n";

	}
	return 0;
}
