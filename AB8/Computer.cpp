#include<iostream>
#include<string>
using namespace std;

class Computer{
	public:
		string *os;
		string *hardwareName;

	public:
		Computer(string *os, string *hardwareName){
			this->os = os;
			this->hardwareName = hardwareName;
		}
		Computer(Computer *c){

			this->os = new string;
			*this->os = *c->os;
			this->hardwareName = c->hardwareName;
		}
		static void printComp(Computer *c){
			cout << "OS: " << *c->os << " hard: " << *c->hardwareName << endl;
		}
};

int main(){
	string a = "UBUNTU";
	string b = "intel";
	Computer *c = new Computer(&a, &b);
	Computer *cc = new Computer(c);

	*cc->os = "Windows";
	Computer::printComp(c);
	Computer::printComp(cc);
}
