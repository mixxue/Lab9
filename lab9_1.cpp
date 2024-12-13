#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 

	double NewBalance, total;
	NewBalance = loan;
	int i = 0;
	while(NewBalance > 0){
		i++;
		cout << setw(13) << left << i;
		cout << setw(13) << left << NewBalance;
		cout << setw(13) << left << (NewBalance*rate/100);
		cout << setw(13) << left << NewBalance+(NewBalance*rate/100);
		if(pay > NewBalance+(NewBalance*rate/100)){
			pay = NewBalance+(NewBalance*rate/100);
		}
		total = NewBalance+(NewBalance*rate/100);
		cout << setw(13) << left << pay;
		cout << setw(13) << left << total-pay;
		NewBalance = total-pay;
		cout << "\n";
	}
	return 0;
}