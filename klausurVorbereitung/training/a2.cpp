#include<iostream>

using namespace std;

class A{
	private:
		int value;
	protected:
		A(int value){
			this->value = value;
		}
		int getValue(){
			return value;
		}
};

class B: public A{
	public:
		B(int value): A(value){
		
		}
		virtual void print() = 0;
		static void print(B * obj){
			cout << obj->getValue() << endl;
		}
};

class C: public B{
	public:
		C(int value): B(value){
			
		}
		void print(){
			cout << getValue() << endl;
		}
};

class D: public B{
	public:
		D(int value): B(value){
			
		}
		void print(){
			cout <<  getValue() << endl;
		}
};
class E: public B{
	public:
		E(int value): B(value){
			
		}
		void print(){
			cout << getValue() << endl;
		}
};

int main(){
	B * obj[3];
	obj[0] = new C(1);
	obj[1] = new D(2);
	obj[2] = new E(3);

	for(int i = 0; i < 3; i++){
		obj[i]->print();
	}
	cout << "##########STATIC############" << endl;
	for(int i = 0; i < 3; i++){
		B::print(obj[i]);
	}

	delete [] *obj;
	return 0;
}
