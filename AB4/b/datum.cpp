#include <iostream>
#include "datum.h"
#include <string>
#include <string.h>
using namespace std;

void datum::setJahr(int jahr){
	this->jahr = jahr;
}
void datum::setMonat(int monat){
	this->monat = monat;
}
void datum::setTag(int tag){
      	this->tag = tag;
}
int datum::getJahr(){
	return jahr;
}
int datum::getMonat(){
	return monat;
}
int datum::getTag(){
	return tag;
}
void datum::datumsEingabe(){
	int j, m, t;
	cout << "Scheiben Sie bitte ein Datum 'Jahr'(Eingabe) 'Monat' (Eingabe) 'Tag'" << endl;
	cin >> j >> m >> t;
	setJahr(j);
	setMonat(m);
	setTag(t);
	datumsAusgabe();
}
string datum::convertInt(int a){
	return a >= 10 ? to_string(a) : "0" + to_string(a);
}
void datum::datumsAusgabe(){
	if(checkDate()){
		cout << "Sie haben folgendes Datum eingegeben: " << getJahr() << "/" << convertInt(getMonat()) << "/" << convertInt(getTag()) << endl;
	}
	else{
		cout << "Fehrler im Datum. Versuchen Sie bitte noch mal" << endl; 
		datumsEingabe();
	}
}
bool datum::checkDate(){
	bool status = true;
	string yearStr = to_string(getJahr());
	int month = getMonat();
	int day = getTag();
	if(yearStr.length() != 4){
		status == false;
	}
	if(month > 12 || month < 1){
		status = false;
	}
	if(day > 31 || day < 1){
		status = false;
	}
	return status;
}
