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
	B * obj[3];
	obj[0] = new C(2);
	obj[0]->info();
	obj[1] = new D(3);
	obj[1]->info();
	obj[2] = new E(4);
	obj[2]->info();

	delete [] *obj;

	return 0;	
}
