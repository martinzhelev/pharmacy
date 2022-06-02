#pragma once
#include "CSupplier.h"
#include<iostream>
#include<stdlib.h>
#include<string>
#include"CMedicine.h"
using namespace std;

class CManufacturer : public CSupplier{
public:
	CManufacturer();
	CManufacturer(string, string, string);
	void getManufacturerData();
	void display();
};

