#include<iostream>
#include<exception>
using namespace std;

int main(){
	int a, b, result;
	cout <<  "Schreiben Sie bitte 2 Werte:" << endl;
	cin >> a >> b;
	try{
		result = a / b;
	}catch(exception& e){
		cout << e.what() << endl;
		return 0;
	}
	cout << result << endl;

}

