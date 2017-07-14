#include<iostream>
using namespace std;
class A{
	private:
		int i;
	protected:
		void setI(int i){
			this->i = i;
		}
		int getI(){
			return i;
		}
	public:
		A(){};
		A(int i){
			this->i = i;
		}
};
class B : public A{
	public:
		virtual void info() = 0;
		B(int i): A(i){
						
		}
};
class C: public B{
	public:
		void info(){
			cout << getI() << endl;
		}
		C(int i) : B(i){
			
		}
};

class D: public B{
	public:
		void info(){
			cout << getI() << endl;
		}
		D(int i) : B(i){
			
		}
};


class E: public B{
	public:
		void info(){
			cout << getI() << endl;
		}
		E(int i) : B(i){
			
		}
};





int main(){
 	B *cObj =  new C(2);
	cObj->info();
 	B *dObj =  new D(2);
	dObj->info();
 	B *eObj =  new E(2);
	eObj->info();

	delete cObj;
	delete dObj;
	delete eObj;
	return 0;	
}