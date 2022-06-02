#pragma once
#include<iostream>
#include<stdlib.h>
#include<string>
#include"CMedicine.h"

class CSupplier{
protected:
	string name;
	string adress;
	string phoneNumber;
public:
	CSupplier();
	CSupplier(string, string, string);
	void getData();
	void display();
};

