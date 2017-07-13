#include<iostream>
#include<string>
using namespace std;

class Auto{

	int alter;
	float verbrauch; 
	const char* marke; 
	bool benzinOderDiesel; // 0 – benzin, 1 - diesel
	public:
		Auto(int alter, float verbrauch, const char *marke, bool benzinOderDiesel){
			this->marke = new char;
			this->alter = alter;
			this->verbrauch = verbrauch;
			this->marke = marke;
			this->benzinOderDiesel = benzinOderDiesel;
		}
		Auto(){}
		Auto(Auto *a){
			this->marke = new char;
			this->alter = a->alter;
			this->verbrauch = a->verbrauch;
			this->marke = a->marke;
			this->benzinOderDiesel = a->benzinOderDiesel;
		}
		void setAlter(int alter){
			this->alter = alter;
		}
		void setVerbrauch(float verbrauch){
			this->verbrauch = verbrauch;
		}
		void setMarke(const char * marke){
			this->marke = marke;
		}
		void setBenzinOderDiesel(bool benzinOderDiesel){
			this->benzinOderDiesel = benzinOderDiesel;
		}
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
		~Auto(){
		}
		Auto & operator= (Auto & a){
			Auto temp(a);
			cout << "equals" << endl;
			return *this;

		}
 
};

int main(){
	Auto *o2 = new Auto(2, 9.5, "BMW", false);
	Auto o1(o2);
	o1.setMarke("Mercedes");
	Auto::info(o2);
	Auto::info(&o1);
	return 0;
}
