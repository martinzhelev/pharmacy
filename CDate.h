#pragma once
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class CDate{
private:
	int day;
	int month;
	int year;
public:
	CDate();
	CDate(int, int, int);
	void getDate();
	void displayDate();
};

