#pragma once
#include<iostream>
#include<stdlib.h>
#include<string>
#include"CDate.h"
using namespace std;

class CMedicine{
private:
	string name;
	float price;
	CDate expirationDate;
public:
	CMedicine();
	CMedicine(string, float, CDate);
	void addNewMed();
	void displayAllData();
	void newArrFromSupplier();
	void newArrFromAllSupp();
};

