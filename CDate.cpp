#include "CDate.h"
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

CDate::CDate() {
	day = 0;
	month = 0;
	year = 0;
}
CDate::CDate(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}
void CDate::getDate() {
	cout << "input day: ";
	cin >> day;
	cout << "input month: ";
	cin >> month;
	cout << "input year: ";
	cin >> year;

}
void CDate::displayDate() {
	cout << day << "." << month << "." << year << endl;
}