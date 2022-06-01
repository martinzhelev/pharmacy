#include "CMedicine.h"
#include<iostream>
#include<stdlib.h>
#include<string>
#include"CDate.h"
using namespace std;

CMedicine::CMedicine() {
	name = "not entered";
	price = 0.0;
	expirationDate;
}
CMedicine::CMedicine(string name, float price, CDate expirationDate) {
	this->name = name;
	this->price = price;
	this->expirationDate = expirationDate;
}
void CMedicine::addNewMed() {
	cout << "Enter the name of the medicine: ";
	cin >> name;
	cout << "Enter the price of the medicine: ";
	cin >> price;
	cout << "Enter the expiration date of the medicine: ";
	expirationDate.getDate();
}
void CMedicine::displayAllData() {
	cout << "The name of the medicine is: " << name << endl;
	cout << "The price of the medicine is: " << price << endl;
	cout << "The expiration date of the medicine is: " << endl;
	expirationDate.displayDate();
}
void CMedicine::newArrFromSupplier() {
	
}