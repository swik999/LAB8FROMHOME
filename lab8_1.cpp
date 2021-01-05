#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	cout << "Enter initial loan: ";
	double MONEY = 0;
	cin >> MONEY;
	cout << "Enter interest rate per year (%): ";
	double DOK = 0;
	cin >> DOK;
	cout << "Enter amount you can pay per year: ";
	double PAY = 0;
	cin >> PAY;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int year = 1;
	double PrevBalance = MONEY;
	
	while (PrevBalance > 0){
		
		double Interest = (PrevBalance*(DOK/100));
	    double Total = (PrevBalance + Interest);
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << year ; 
	    cout << setw(13) << left << PrevBalance;
	    cout << setw(13) << left << Interest;
	    cout << setw(13) << left << Total;
	    if (Total < PAY){
	    	cout << setw(13) << left << Total;
	    }else{
	    	cout << setw(13) << left << PAY;
	    }
	    double NewBalance = (Total-PAY) ;
	    if(NewBalance < 0){
	    	cout << setw(13) << left << 0.00;
		}else{
		cout << setw(13) << left << NewBalance;	
		}
	    year++;
	    PrevBalance = NewBalance ;
	    cout << "\n";	
	}
	
	return 0;
}
