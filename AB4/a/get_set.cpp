#include <iostream>
#include "get_set.h"
#include <string>
using namespace std;

get_set::get_set(){
}
get_set::get_set(int distance){
	this->distance = distance;
}
void get_set::init(){
	cout << "Bitte Lange und Breite des Vierecks eingeben:";
	double h;
	double w;
	cin >> h >> w;
	this->setWidth(w);
	this->setHeight(h);
	this->setSquares();
}
void get_set::setWidth(double width){
	this->width = width;
}
void get_set::setHeight(double height){
	this->height = height;
}
double get_set::getHeight(){
	return height;
}
double get_set::getWidth(){
	return width;
}
void get_set::setName(string name){
	this->name = name;
}
string get_set::getName(){
	return name;
}
void get_set::setSquares(){
	printDistance();
	cout << "Skizze" << endl;
	distance += 4;
	printDistance();
	for(int i = 0; i < width; i++){
		cout << "0";
	}
	cout << endl;
	for(int i = 0; i < height - 2; i++){
		printDistance();
		cout << "0";
		for(int j = 0; j < width - 2; j++){
			cout << " ";
		}
		cout << "0" << endl;
	}
	printDistance();
	for(int i = 0; i < width; i++){
		cout << "0";
	}
	cout << endl;

}
void get_set::printDistance(){
	for(int i = 0; i < distance; i++){
		cout << " ";
	}
}
double get_set::getPerimeter(){
	return (width + height) * 2;
}
double get_set::getSquare(){
	return width * height;
}
