#include<iostream>
#include<string>
using namespace std;

class Auto{

	int alter;
	float verbrauch; 
	string marke; 
	bool benzinOderDiesel; // 0 – benzin, 1 - diesel
	public:
		Auto(int alter, float verbrauch, string marke, bool benzinOderDiesel){
			this->alter = alter;
			this->verbrauch = verbrauch;
			this->marke = marke;
			this->benzinOderDiesel = benzinOderDiesel;
		}
		Auto(){}
		int getAlter(){
			return alter;
		}
		float getVerbrauch(){
			return verbrauch;
		}
		string getMarke(){
			return marke;
		}
		bool getBenzinOderDiesel(){
			return benzinOderDiesel;
		}
		static void info(Auto *a){
			cout << "Alter: " << a->getAlter() << endl;
			cout << "Verbrauch: " << a->getVerbrauch() << endl;
			cout << "Marke: " << a->getMarke() << endl;
			cout << "Kraftstof: " << (a->getBenzinOderDiesel() ? "Benzin" : "Diesel") << endl;
		}
 
};

int main(){
	Auto *a = new Auto(2, 9.5, "BMW", true);
	Auto::info(a);
	return 0;
}
