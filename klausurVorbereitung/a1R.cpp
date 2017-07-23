#include<iostream>

using namespace std;

class A{
	private:
		int *i;
	public:
	 	A(int i){
			this->i = new int;
			*this->i = i;
		}
		A(A &a){
			this->i = new int;
			int b = a.getI();
			this->i = &b;
		}
		
		int getI(){
			return *i;
		}
		static void print(A * a){
			cout << a->getI() << endl;
		}
		A & operator= (A &a){
			A temp(a);
			cout << "equals" << endl;
			return *this;
		}
};

int main(){
	A a(5);
	A *b = new A(10);
	A c(a);
	A::print(&a);	
	A::print(b);	
	A::print(&c);	
	return 0;
}
