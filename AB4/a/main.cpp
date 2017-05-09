#include <iostream>
#include <string>
#include <cstring>
#include "get_set.h"
using namespace std;
void init(get_set *obj){
	cout << "Bitte Lange und Breite des Vierecks eingeben:";
        double h;
        double w;
        cin >> h >> w;
        obj->setWidth(w);
        obj->setHeight(h);
}
string getBiggestSquare(int count, get_set *arrayObj){
	string name;
	int square;
	for(int i = 0; i < count; i++){
		if(i == 0){
			square = arrayObj[i].getSquare();
			name = arrayObj[i].getName();
		}
		else{
			if(square < arrayObj[i].getSquare()){
				square = arrayObj[i].getSquare();
				name = arrayObj[i].getName();
			}
		}

	}
	return name;
}
void printSquares(int count, get_set *arrayObj){
	for(int i = 0; i < count; i++){
		cout << arrayObj[i].getName() << " Länge: " << arrayObj[i].getHeight() << "cm " << "Breite: " << arrayObj[i].getWidth() << "cm" << endl;
		arrayObj[i].setSquares();
	} 
	cout << endl;
	for(int i = 0; i < count; i++){
		cout << "Umfang " << arrayObj[i].getName() << ": " << arrayObj[i].getPerimeter() << " cm" << endl;
		cout << "Fläche " << arrayObj[i].getName() << ": " << arrayObj[i].getSquare() << " cm2" << endl << endl;
	}
}
int main(){
	int count;
	cout << "Wie viele Vierecken möchten Sie eingeben?" << endl;
	cin >> count;
	get_set *obj = new get_set[count];
	string name = "Viereck";
	for(int i = 0; i < count; i++){
		obj[i].setName(name + to_string(i + 1));
		init(&obj[i]);
	}
	printSquares(count, obj);
	cout << getBiggestSquare(count, obj) << " hat die größte Fläche" << endl;
	delete [] obj;
}
