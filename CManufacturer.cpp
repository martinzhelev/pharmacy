#include "CManufacturer.h"
#include<iostream>
#include<stdlib.h>
#include<string>
#include"CMedicine.h"
using namespace std;
CManufacturer::CManufacturer():CSupplier() {
	name = "not enetered";
	adress = "not entered";
	phoneNumber = "not enetered";

 }
CManufacturer::CManufacturer(string name, string adress, string phoneNumber) :CSupplier(name, adress, phoneNumber) {
	this->name = name;
	this->adress = adress;
	this->phoneNumber = phoneNumber;
}
void CManufacturer::getManufacturerData() {
	cout << "get the data for the manufacturer: ";
	CSupplier::getData();
}
void CManufacturer::display() {
	cout << "display manufacturer data: " << endl;
	CSupplier::display();
}

