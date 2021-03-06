// Delo_s_polji.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <algorithm>

int * polje =NULL;
int n =NULL;
using namespace std;

int create_array() {
			srand(time(0));
			for (int i = 0; i < n; i++) {  //Polnjenje polja z nakljucnimi stevili med 1 in 100
				polje[i] = rand() % 100 + 1;
			}
			cout <<endl<< "Izpis nakljucnih elementov polja: "<<endl;
	return *polje;
	}

void min_max() {
	int temp = 0;
	int min;
	int max;

	for (int i = 0; i<n; i++) {
		cout << polje[i] << ", ";
	}
	for (int i = 0; i<n; i++)
	{
		if (polje[i] > temp) {
			temp = polje[i];
		}
	}
	max = temp;
	for (int i = 0; i<n; i++)
	{
		if (polje[i] < temp) {
			temp = polje[i];
		}

	}
	min = temp;
	cout <<endl<<"Minimum: "<< min << "  Maximum: " << max<<endl;
	
}
void sum_and_avarage() {
	int sum=0;
	int avarage=0;

	for (int i = 0; i < n; i++) {
		sum += polje[i];
		
	}
	avarage = sum / n;
	cout << endl<<"Vsota: "<<sum<<endl << "Povprecje: "<<avarage<<endl;
}
void order(){
	sort(polje, polje+n);
	for (int i = 0; i < n; i++) {
		cout << polje[i]<<", ";

	}
}

int main(){
	while (true) {

		cout << "Dolocite velikost polja. Vnesite 0 tevilo od 1 do 10^9:  "<<endl;
		cin >> n;
		polje = new (nothrow) int[n];

		if (polje == nullptr || n <= 0) {
			cout << "Vnesite stevilo od 0 do 10^9!"<<endl;

		}
		else
		{
			create_array();
			min_max();
			sum_and_avarage();
			cout << "________________" << endl;
			cout << "Izpis urejenega polja nakljucnih elementov: " << endl;
			order();
		}

		delete[] polje;

		cout <<endl<< "Nadaljevanje programa [y/n]?"<<endl;
		char anwser;
		cin >> anwser;

		if (anwser == 'n') {
			break;
		}

	}
	    
	return 0;
}



