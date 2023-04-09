#include <iostream>
using namespace std;

int main() {
    int code, infant = 0, child = 0, teenage = 0, adult = 0;
    int infantSale = 0, childSale = 0, teenageSale = 0, adultSale = 0;
    int totalAtendee = 0, totalSale = 0;

    int *infantPtr = &infant;
    int *childPtr = &child;
    int *teenagePtr = &teenage;
    int *adultPtr = &adult;
    int *infantSalePtr = &infantSale;
    int *childSalePtr = &childSale;
    int *teenageSalePtr = &teenageSale;
    int *adultSalePtr = &adultSale;
    int *totalAtendeePtr = &totalAtendee;
    int *totalSalePtr = &totalSale;

    retry:
    cout << "WELCOME. ENTER YOUR CODE : ";
    cin >> code;

    if (code >= 1 && code <= 4) {
        switch (code) {
            case 1:
                (*infantPtr)++;
                (*infantSalePtr) += 10;
                goto retry;
                break;

            case 2:
                (*childPtr)++;
                (*childSalePtr) += 5;
                goto retry;
                break;

            case 3:
                (*teenagePtr)++;
                (*teenageSalePtr) += 20;
                goto retry;
                break;

            case 4:
                (*adultPtr)++;
                (*adultSalePtr) += 20;
                goto retry;
                break;
        }
    } else if (code > 4) {
        cout << "You have entered an invalid code. \nPlease try again.\n";
        goto retry;
    } else if (code < 0) {
        (*totalAtendeePtr) = (*infantPtr) + (*childPtr) + (*teenagePtr) + (*adultPtr);
        (*totalSalePtr) = (*infantSalePtr) + (*childSalePtr) + (*teenageSalePtr) + (*adultSalePtr);
        cout << "\n************************************\n";
        cout << "\n  CATEGORY CODE = 1";
        cout << "\n  TOTAL SALE FROM INFANTS = " << (*infantSalePtr);
        cout << "\n************************************\n";
        cout << "TOTAL CHILD ATEENDEES = " << (*childPtr);
        cout << "\n  CATEGORY CODE = 2";
        cout << "\n  TOTAL SALE FROM CHILDS = " << (*childSalePtr);
        cout << "\n************************************\n";
        cout << "TOTAL TEENAGE ATEENDEES = " << (*teenagePtr);
        cout << "\n  CATEGORY CODE = 3";
        cout << "\n  TOTAL SALE FROM TEENAGES = " << (*teenageSalePtr);
        cout << "\n************************************\n";
        cout << "TOTAL ADULT ATEENDEES = " << (*adultPtr);
        cout << "\n  CATEGORY CODE = 4";
        cout << "\n  TOTAL SALE FROM ADULTS = " << (*adultSalePtr);
        cout << "\n************************************\n";
        cout << "TOTAL ATEENDEES = " << (*totalAtendeePtr);
        cout << "\n \t TOTAL SALE = " << (*totalSalePtr);
        cout << "\n************************************\n";
    }

    return 0;
}

