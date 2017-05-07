#include<iostream>
using namespace std;

struct bruch{
	int a;
	int b;
};
struct bruch setGgt(){
	bruch ggt;
	int a, b;
	cout << "Scheiben Sie eine erste Werte" << endl;
	cin >> a;
	cout << "Scheiben Sie eine zweite Werte" << endl;
	cin >> b;
	ggt.a = a;
	ggt.b = b;
	return ggt;
}
int getGgt(bruch ggt){
	for(int i = ggt.a; i > 0; i--){
		if(ggt.a % i == 0 && ggt.b % i == 0){
			return i;
		}
	}
}
struct bruch kBr(bruch obj, int ggtVal){
	obj.a /= ggtVal;
	obj.b /= ggtVal;
	return obj;
}
void getValues(bruch obj){
	cout << obj.a << "/" << obj.b << endl;
}
int main(){
	bruch ggt;
	ggt = setGgt();
	int ggtVal = getGgt(ggt);
	getValues(kBr(ggt, ggtVal));
	return 0;
}
