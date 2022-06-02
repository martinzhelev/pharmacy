#include "CSupplier.h"
#include<iostream>
#include<stdlib.h>
#include<string>
#include"CMedicine.h"
using namespace std;

CSupplier::CSupplier() {
	name = "not entered";
	adress = "not enetered";
	phoneNumber = "not enetered";

}
CSupplier::CSupplier(string name, string adress, string phoneNumber) {
	this->name = name;
	this->adress = adress;
	this->phoneNumber = phoneNumber;
}
void CSupplier::getData() {
	cout << "Name of the supplier: ";
	getline(cin, name);
	cout << "Adress of the supplier: ";
	getline(cin, adress);
	cout << "Phone number of the supplier: ";
	getline(cin,phoneNumber);
}
void CSupplier::display() {
	cout << "The name of the supplier is: " << name << '\n';
	cout << "The adress of the supplier is: " << adress << endl;
	cout << "The phone number of the supplier is: " << phoneNumber << endl;
}
