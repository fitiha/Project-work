#include<iostream>
using namespace std;
int main(){
	int code, infant=0, child=0, teenage=0, adult=0;
	int infantSale=0, childSale=0, teenageSale=0, adultSale=0;
	int totalAtendee=0, totalSale=0;

    retry:
	cout<<"WELCOME. ENTER YOUR CODE : ";
	cin>>code;
	if(code>=1 && code<=4){
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
			
			default:
				cout<<"!!INVALID INPUT!! TRY AGAIN!! \n";
				goto retry;
				break;
		}
	}
	else if(code<0){
		totalAtendee = infant + child + teenage + adult;
		totalSale = infantSale + childSale + teenageSale + adultSale;
		cout<<"\n************************************\n";
		cout<<"TOTAL INFANT ATEENDEES = "<<infant;
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
		
		cout<<"TOTAL ATEENDEES = "<<totalAtendee;
		cout<<"\n \t TOTAL SALE = "<<totalSale;
		cout<<"\n************************************\n";
		
	}
	return 0;
}
