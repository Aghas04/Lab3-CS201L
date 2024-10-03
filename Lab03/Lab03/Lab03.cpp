#include <iostream>
#include <iomanip>

using namespace std;



/*
	C - Children - 10.95
	A - Adults - 19.99
	S - Seniors - 18.99
	V - Vip - 7.99
	Q - quit
*/


int main() {
	int day = 1, children = 0, tempvalue, adults = 0, senior = 0, vip = 0;
	char choice;
	const double chidlrenPrice = 10.95, adultPrice = 19.99, seniorPrice = 18.99, vipPrice = 7.99;
	double totalDaysProfit = 0, chidlrenTotalPrice = 0.0, adultsTotalPrice = 0.0, seniorTotalPrice = 0.0, vipTotalPrice = 0.0;
	cout << "Welcome to Fun Park menu System !!" << endl;
	cout << "Starting day " << day << endl;
	while (day != 4) {
		cout << "Enter (C)hild, (A)dult, (S)enior, (V)ip or (Q)uit" << endl;
		cout << "Enter choice: ";
		cin >> choice;
		cout << endl;
		choice = toupper(choice);
		switch (choice) {
		case 'C':
			cout << "How many children? ";
			cin >> tempvalue;
			cout << endl;
			children += tempvalue;
			break;



		case 'A':

			cout << "How many Adults? ";
			cin >> tempvalue;
			cout << endl;
			adults += tempvalue;
			break;


		case 'S':

			cout << "How many Seniors? ";
			cin >> tempvalue;
			cout << endl;
			senior += tempvalue;
			break;


		case 'V':

			cout << "How many VIPs? ";
			cin >> tempvalue;
			cout << endl;
			vip += tempvalue;
			break;

		case 'Q':
			chidlrenTotalPrice = children * chidlrenPrice;
			adultsTotalPrice = adults * adultPrice;
			seniorTotalPrice = senior * seniorPrice;
			vipTotalPrice = vip * vipPrice;
			double total = chidlrenTotalPrice + adultsTotalPrice + seniorTotalPrice + vipTotalPrice;

			cout << "Day" << day << endl;
			cout << "            " << "Child " << children << " @ 10.95 = " << chidlrenTotalPrice << endl;
			cout << "            " << "Adult " << adults << " @ 19.99 = " << adultsTotalPrice << endl;
			cout << "            " << "Senior " << senior << " @ 18.99 = " << seniorTotalPrice << endl;
			cout << "            " << "Vip " << vip << " @ 7.99 = " << vipTotalPrice << endl;
			cout << endl;
			cout << "            " << "Total = " << total << endl;
			cout << endl;
			totalDaysProfit += total;
			children = 0;
			adults = 0;
			senior = 0;
			vip = 0;

			day += 1;
			if (day != 4) {
				cout << "Starting day " << day << endl;
			}
			else {

			}

			break;
		}
	}
	cout << endl;
	cout << "the total for all days is " << totalDaysProfit << endl;
}